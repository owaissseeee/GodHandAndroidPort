#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_002D0EA0
// Address: 0x2d0ea0 - 0x2d1498
void func_002D0EA0_0x2d0ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D0EA0_0x2d0ea0");
#endif

    switch (ctx->pc) {
        case 0x2d0efcu: goto label_2d0efc;
        case 0x2d0f40u: goto label_2d0f40;
        case 0x2d0fb4u: goto label_2d0fb4;
        case 0x2d1018u: goto label_2d1018;
        case 0x2d1054u: goto label_2d1054;
        case 0x2d1064u: goto label_2d1064;
        case 0x2d10a8u: goto label_2d10a8;
        case 0x2d10fcu: goto label_2d10fc;
        case 0x2d1120u: goto label_2d1120;
        case 0x2d113cu: goto label_2d113c;
        case 0x2d1168u: goto label_2d1168;
        case 0x2d1178u: goto label_2d1178;
        case 0x2d1188u: goto label_2d1188;
        case 0x2d11c0u: goto label_2d11c0;
        case 0x2d11dcu: goto label_2d11dc;
        case 0x2d11f4u: goto label_2d11f4;
        case 0x2d1208u: goto label_2d1208;
        case 0x2d1260u: goto label_2d1260;
        case 0x2d1270u: goto label_2d1270;
        case 0x2d12a4u: goto label_2d12a4;
        case 0x2d12f8u: goto label_2d12f8;
        case 0x2d1308u: goto label_2d1308;
        case 0x2d132cu: goto label_2d132c;
        case 0x2d1368u: goto label_2d1368;
        case 0x2d13bcu: goto label_2d13bc;
        case 0x2d13f8u: goto label_2d13f8;
        case 0x2d1448u: goto label_2d1448;
        default: break;
    }

    ctx->pc = 0x2d0ea0u;

    // 0x2d0ea0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2d0ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2d0ea4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2d0ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2d0ea8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2d0ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2d0eac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d0eacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0eb0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2d0eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2d0eb4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2d0eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2d0eb8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2d0eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2d0ebc: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2d0ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2d0ec0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2d0ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x2d0ec4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2d0ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x2d0ec8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2d0ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x2d0ecc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0ed0: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2d0ed0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2d0ed4: 0x8e420138  lw          $v0, 0x138($s2)
    ctx->pc = 0x2d0ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
    // 0x2d0ed8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d0ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d0edc: 0x1c400161  bgtz        $v0, . + 4 + (0x161 << 2)
    ctx->pc = 0x2D0EDCu;
    {
        const bool branch_taken_0x2d0edc = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x2D0EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0EDCu;
        // 0x2d0ee0: 0xae420138  sw          $v0, 0x138($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0edc) {
            ctx->pc = 0x2D1464u;
            goto label_2d1464;
        }
    }
    ctx->pc = 0x2D0EE4u;
    // 0x2d0ee4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d0ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d0ee8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2d0ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2d0eec: 0xae420138  sw          $v0, 0x138($s2)
    ctx->pc = 0x2d0eecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 312), GPR_U32(ctx, 2));
    // 0x2d0ef0: 0x247374a0  addiu       $s3, $v1, 0x74A0
    ctx->pc = 0x2d0ef0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x2d0ef4: 0xc0b435c  jal         func_2D0D70
    ctx->pc = 0x2D0EF4u;
    SET_GPR_U32(ctx, 31, 0x2D0EFCu);
    ctx->pc = 0x2D0EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0EF4u;
    // 0x2d0ef8: 0x966505b0  lhu         $a1, 0x5B0($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1456)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0D70u, 0x2D0EF4u, 0x2D0EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0EFCu;
label_2d0efc:
    // 0x2d0efc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d0efcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0f00: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2d0f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2d0f04: 0x122200a1  beq         $s1, $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2D0F04u;
    {
        const bool branch_taken_0x2d0f04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D0F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0F04u;
        // 0x2d0f08: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0f04) {
            ctx->pc = 0x2D118Cu;
            goto label_2d118c;
        }
    }
    ctx->pc = 0x2D0F0Cu;
    // 0x2d0f0c: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x2d0f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
    // 0x2d0f10: 0x1222009f  beq         $s1, $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x2D0F10u;
    {
        const bool branch_taken_0x2d0f10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D0F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0F10u;
        // 0x2d0f14: 0x246274a0  addiu       $v0, $v1, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0f10) {
            ctx->pc = 0x2D1190u;
            goto label_2d1190;
        }
    }
    ctx->pc = 0x2D0F18u;
    // 0x2d0f18: 0x8e500018  lw          $s0, 0x18($s2)
    ctx->pc = 0x2d0f18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2d0f1c: 0x52000055  beql        $s0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x2D0F1Cu;
    {
        const bool branch_taken_0x2d0f1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0f1c) {
            ctx->pc = 0x2D0F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0F1Cu;
            // 0x2d0f20: 0x8e420134  lw          $v0, 0x134($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1074u;
            goto label_2d1074;
        }
    }
    ctx->pc = 0x2D0F24u;
    // 0x2d0f24: 0x2416000a  addiu       $s6, $zero, 0xA
    ctx->pc = 0x2d0f24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d0f28: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2d0f28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0f2c: 0x2413002e  addiu       $s3, $zero, 0x2E
    ctx->pc = 0x2d0f2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x2d0f30: 0x2415001b  addiu       $s5, $zero, 0x1B
    ctx->pc = 0x2d0f30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2d0f34: 0x3c1e0018  lui         $fp, 0x18
    ctx->pc = 0x2d0f34u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)24 << 16));
    // 0x2d0f38: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x2d0f38u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d0f3c: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x2d0f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_2d0f40:
    // 0x2d0f40: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2d0f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2d0f44: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2d0f44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2d0f48: 0x50570047  beql        $v0, $s7, . + 4 + (0x47 << 2)
    ctx->pc = 0x2D0F48u;
    {
        const bool branch_taken_0x2d0f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x2d0f48) {
            ctx->pc = 0x2D0F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0F48u;
            // 0x2d0f4c: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1068u;
            goto label_2d1068;
        }
    }
    ctx->pc = 0x2D0F50u;
    // 0x2d0f50: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x2d0f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2d0f54: 0x10910043  beq         $a0, $s1, . + 4 + (0x43 << 2)
    ctx->pc = 0x2D0F54u;
    {
        const bool branch_taken_0x2d0f54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x2D0F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0F54u;
        // 0x2d0f58: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0f54) {
            ctx->pc = 0x2D1064u;
            goto label_2d1064;
        }
    }
    ctx->pc = 0x2D0F5Cu;
    // 0x2d0f5c: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x2d0f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x2d0f60: 0x904305b1  lbu         $v1, 0x5B1($v0)
    ctx->pc = 0x2d0f60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1457)));
    // 0x2d0f64: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2d0f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2d0f68: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D0F68u;
    {
        const bool branch_taken_0x2d0f68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d0f68) {
            ctx->pc = 0x2D0F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0F68u;
            // 0x2d0f6c: 0x8e020098  lw          $v0, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0FA0u;
            goto label_2d0fa0;
        }
    }
    ctx->pc = 0x2D0F70u;
    // 0x2d0f70: 0x5236000b  beql        $s1, $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x2D0F70u;
    {
        const bool branch_taken_0x2d0f70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 22));
        if (branch_taken_0x2d0f70) {
            ctx->pc = 0x2D0F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0F70u;
            // 0x2d0f74: 0x8e020098  lw          $v0, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0FA0u;
            goto label_2d0fa0;
        }
    }
    ctx->pc = 0x2D0F78u;
    // 0x2d0f78: 0x52340009  beql        $s1, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D0F78u;
    {
        const bool branch_taken_0x2d0f78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        if (branch_taken_0x2d0f78) {
            ctx->pc = 0x2D0F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0F78u;
            // 0x2d0f7c: 0x8e020098  lw          $v0, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0FA0u;
            goto label_2d0fa0;
        }
    }
    ctx->pc = 0x2D0F80u;
    // 0x2d0f80: 0x50930007  beql        $a0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D0F80u;
    {
        const bool branch_taken_0x2d0f80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        if (branch_taken_0x2d0f80) {
            ctx->pc = 0x2D0F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0F80u;
            // 0x2d0f84: 0x8e020098  lw          $v0, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0FA0u;
            goto label_2d0fa0;
        }
    }
    ctx->pc = 0x2D0F88u;
    // 0x2d0f88: 0x52350005  beql        $s1, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D0F88u;
    {
        const bool branch_taken_0x2d0f88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 21));
        if (branch_taken_0x2d0f88) {
            ctx->pc = 0x2D0F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0F88u;
            // 0x2d0f8c: 0x8e020098  lw          $v0, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0FA0u;
            goto label_2d0fa0;
        }
    }
    ctx->pc = 0x2D0F90u;
    // 0x2d0f90: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2d0f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2d0f94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d0f94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d0f98: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2D0F98u;
    {
        const bool branch_taken_0x2d0f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0f98) {
            ctx->pc = 0x2D1010u;
            goto label_2d1010;
        }
    }
    ctx->pc = 0x2D0FA0u;
label_2d0fa0:
    // 0x2d0fa0: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x2d0fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x2d0fa4: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x2D0FA4u;
    {
        const bool branch_taken_0x2d0fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0fa4) {
            ctx->pc = 0x2D0FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0FA4u;
            // 0x2d0fa8: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1068u;
            goto label_2d1068;
        }
    }
    ctx->pc = 0x2D0FACu;
    // 0x2d0fac: 0xc0dce9e  jal         func_373A78
    ctx->pc = 0x2D0FACu;
    SET_GPR_U32(ctx, 31, 0x2D0FB4u);
    ctx->pc = 0x2D0FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0FACu;
    // 0x2d0fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A78u, 0x2D0FACu, 0x2D0FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0FB4u;
label_2d0fb4:
    // 0x2d0fb4: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x2D0FB4u;
    {
        const bool branch_taken_0x2d0fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0fb4) {
            ctx->pc = 0x2D0FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0FB4u;
            // 0x2d0fb8: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1068u;
            goto label_2d1068;
        }
    }
    ctx->pc = 0x2D0FBCu;
    // 0x2d0fbc: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x2d0fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2d0fc0: 0x10540003  beq         $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0FC0u;
    {
        const bool branch_taken_0x2d0fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x2d0fc0) {
            ctx->pc = 0x2D0FD0u;
            goto label_2d0fd0;
        }
    }
    ctx->pc = 0x2D0FC8u;
    // 0x2d0fc8: 0x54530005  bnel        $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D0FC8u;
    {
        const bool branch_taken_0x2d0fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2d0fc8) {
            ctx->pc = 0x2D0FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0FC8u;
            // 0x2d0fcc: 0x9202005f  lbu         $v0, 0x5F($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 95)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0FE0u;
            goto label_2d0fe0;
        }
    }
    ctx->pc = 0x2D0FD0u;
label_2d0fd0:
    // 0x2d0fd0: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2d0fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2d0fd4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d0fd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d0fd8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D0FD8u;
    {
        const bool branch_taken_0x2d0fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0fd8) {
            ctx->pc = 0x2D1010u;
            goto label_2d1010;
        }
    }
    ctx->pc = 0x2D0FE0u;
label_2d0fe0:
    // 0x2d0fe0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D0FE0u;
    {
        const bool branch_taken_0x2d0fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0FE0u;
        // 0x2d0fe4: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0fe0) {
            ctx->pc = 0x2D0FF8u;
            goto label_2d0ff8;
        }
    }
    ctx->pc = 0x2D0FE8u;
    // 0x2d0fe8: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x2d0fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
    // 0x2d0fec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2d0fecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2d0ff0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2D0FF0u;
    {
        const bool branch_taken_0x2d0ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0FF0u;
        // 0x2d0ff4: 0xae420134  sw          $v0, 0x134($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0ff0) {
            ctx->pc = 0x2D1024u;
            goto label_2d1024;
        }
    }
    ctx->pc = 0x2D0FF8u;
label_2d0ff8:
    // 0x2d0ff8: 0x92020061  lbu         $v0, 0x61($s0)
    ctx->pc = 0x2d0ff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 97)));
    // 0x2d0ffc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0FFCu;
    {
        const bool branch_taken_0x2d0ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0FFCu;
        // 0x2d1000: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0ffc) {
            ctx->pc = 0x2D1020u;
            goto label_2d1020;
        }
    }
    ctx->pc = 0x2D1004u;
    // 0x2d1004: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x2d1004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x2d1008: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d1008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d100c: 0xae420134  sw          $v0, 0x134($s2)
    ctx->pc = 0x2d100cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 308), GPR_U32(ctx, 2));
label_2d1010:
    // 0x2d1010: 0xc0b352a  jal         func_2CD4A8
    ctx->pc = 0x2D1010u;
    SET_GPR_U32(ctx, 31, 0x2D1018u);
    ctx->pc = 0x2D1014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1010u;
    // 0x2d1014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD4A8u, 0x2D1010u, 0x2D1018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1018u;
label_2d1018:
    // 0x2d1018: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2D1018u;
    {
        const bool branch_taken_0x2d1018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1018u;
        // 0x2d101c: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1018) {
            ctx->pc = 0x2D1068u;
            goto label_2d1068;
        }
    }
    ctx->pc = 0x2D1020u;
label_2d1020:
    // 0x2d1020: 0xae400134  sw          $zero, 0x134($s2)
    ctx->pc = 0x2d1020u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 308), GPR_U32(ctx, 0));
label_2d1024:
    // 0x2d1024: 0x12360008  beq         $s1, $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D1024u;
    {
        const bool branch_taken_0x2d1024 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 22));
        ctx->pc = 0x2D1028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1024u;
        // 0x2d1028: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1024) {
            ctx->pc = 0x2D1048u;
            goto label_2d1048;
        }
    }
    ctx->pc = 0x2D102Cu;
    // 0x2d102c: 0x12340007  beq         $s1, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D102Cu;
    {
        const bool branch_taken_0x2d102c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        ctx->pc = 0x2D1030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D102Cu;
        // 0x2d1030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d102c) {
            ctx->pc = 0x2D104Cu;
            goto label_2d104c;
        }
    }
    ctx->pc = 0x2D1034u;
    // 0x2d1034: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x2d1034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2d1038: 0x10530004  beq         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1038u;
    {
        const bool branch_taken_0x2d1038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x2d1038) {
            ctx->pc = 0x2D104Cu;
            goto label_2d104c;
        }
    }
    ctx->pc = 0x2D1040u;
    // 0x2d1040: 0x16350006  bne         $s1, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D1040u;
    {
        const bool branch_taken_0x2d1040 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        if (branch_taken_0x2d1040) {
            ctx->pc = 0x2D105Cu;
            goto label_2d105c;
        }
    }
    ctx->pc = 0x2D1048u;
label_2d1048:
    // 0x2d1048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d1048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d104c:
    // 0x2d104c: 0xc0b3540  jal         func_2CD500
    ctx->pc = 0x2D104Cu;
    SET_GPR_U32(ctx, 31, 0x2D1054u);
    ctx->pc = 0x2D1050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D104Cu;
    // 0x2d1050: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD500u, 0x2D104Cu, 0x2D1054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1054u;
label_2d1054:
    // 0x2d1054: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1054u;
    {
        const bool branch_taken_0x2d1054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1054u;
        // 0x2d1058: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1054) {
            ctx->pc = 0x2D1068u;
            goto label_2d1068;
        }
    }
    ctx->pc = 0x2D105Cu;
label_2d105c:
    // 0x2d105c: 0xc0b352a  jal         func_2CD4A8
    ctx->pc = 0x2D105Cu;
    SET_GPR_U32(ctx, 31, 0x2D1064u);
    ctx->pc = 0x2D1060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D105Cu;
    // 0x2d1060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD4A8u, 0x2D105Cu, 0x2D1064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1064u;
label_2d1064:
    // 0x2d1064: 0x8e100088  lw          $s0, 0x88($s0)
    ctx->pc = 0x2d1064u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_2d1068:
    // 0x2d1068: 0x5600ffb5  bnel        $s0, $zero, . + 4 + (-0x4B << 2)
    ctx->pc = 0x2D1068u;
    {
        const bool branch_taken_0x2d1068 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1068) {
            ctx->pc = 0x2D106Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1068u;
            // 0x2d106c: 0x8e0200b0  lw          $v0, 0xB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0f40;
        }
    }
    ctx->pc = 0x2D1070u;
    // 0x2d1070: 0x8e420134  lw          $v0, 0x134($s2)
    ctx->pc = 0x2d1070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
label_2d1074:
    // 0x2d1074: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d1074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d1078: 0x1c400043  bgtz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2D1078u;
    {
        const bool branch_taken_0x2d1078 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x2D107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1078u;
        // 0x2d107c: 0xae420134  sw          $v0, 0x134($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1078) {
            ctx->pc = 0x2D1188u;
            goto label_2d1188;
        }
    }
    ctx->pc = 0x2D1080u;
    // 0x2d1080: 0x8e500018  lw          $s0, 0x18($s2)
    ctx->pc = 0x2d1080u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2d1084: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d1084u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1088: 0xae510128  sw          $s1, 0x128($s2)
    ctx->pc = 0x2d1088u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 296), GPR_U32(ctx, 17));
    // 0x2d108c: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2D108Cu;
    {
        const bool branch_taken_0x2d108c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D108Cu;
        // 0x2d1090: 0xae400134  sw          $zero, 0x134($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d108c) {
            ctx->pc = 0x2D112Cu;
            goto label_2d112c;
        }
    }
    ctx->pc = 0x2D1094u;
    // 0x2d1094: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x2d1094u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d1098: 0x3c150018  lui         $s5, 0x18
    ctx->pc = 0x2d1098u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)24 << 16));
    // 0x2d109c: 0x3c140010  lui         $s4, 0x10
    ctx->pc = 0x2d109cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)16 << 16));
    // 0x2d10a0: 0x3c110008  lui         $s1, 0x8
    ctx->pc = 0x2d10a0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)8 << 16));
    // 0x2d10a4: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x2d10a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_2d10a8:
    // 0x2d10a8: 0x5056001e  beql        $v0, $s6, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D10A8u;
    {
        const bool branch_taken_0x2d10a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x2d10a8) {
            ctx->pc = 0x2D10ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D10A8u;
            // 0x2d10ac: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1124u;
            goto label_2d1124;
        }
    }
    ctx->pc = 0x2D10B0u;
    // 0x2d10b0: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x2d10b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2d10b4: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x2d10b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
    // 0x2d10b8: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D10B8u;
    {
        const bool branch_taken_0x2d10b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d10b8) {
            ctx->pc = 0x2D10BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D10B8u;
            // 0x2d10bc: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1124u;
            goto label_2d1124;
        }
    }
    ctx->pc = 0x2D10C0u;
    // 0x2d10c0: 0x92020061  lbu         $v0, 0x61($s0)
    ctx->pc = 0x2d10c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 97)));
    // 0x2d10c4: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D10C4u;
    {
        const bool branch_taken_0x2d10c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d10c4) {
            ctx->pc = 0x2D10C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D10C4u;
            // 0x2d10c8: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1124u;
            goto label_2d1124;
        }
    }
    ctx->pc = 0x2D10CCu;
    // 0x2d10cc: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x2d10ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x2d10d0: 0x751024  and         $v0, $v1, $s5
    ctx->pc = 0x2d10d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 21));
    // 0x2d10d4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D10D4u;
    {
        const bool branch_taken_0x2d10d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D10D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D10D4u;
        // 0x2d10d8: 0x741024  and         $v0, $v1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d10d4) {
            ctx->pc = 0x2D1120u;
            goto label_2d1120;
        }
    }
    ctx->pc = 0x2D10DCu;
    // 0x2d10dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D10DCu;
    {
        const bool branch_taken_0x2d10dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D10E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D10DCu;
        // 0x2d10e0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d10dc) {
            ctx->pc = 0x2D10FCu;
            goto label_2d10fc;
        }
    }
    ctx->pc = 0x2D10E4u;
    // 0x2d10e4: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2d10e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x2d10e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d10e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d10ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d10ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d10f0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2d10f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2d10f4: 0xc0b3552  jal         func_2CD548
    ctx->pc = 0x2D10F4u;
    SET_GPR_U32(ctx, 31, 0x2D10FCu);
    ctx->pc = 0x2D10F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D10F4u;
    // 0x2d10f8: 0x3c060010  lui         $a2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD548u, 0x2D10F4u, 0x2D10FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D10FCu;
label_2d10fc:
    // 0x2d10fc: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x2d10fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x2d1100: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x2d1100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x2d1104: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D1104u;
    {
        const bool branch_taken_0x2d1104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1104u;
        // 0x2d1108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1104) {
            ctx->pc = 0x2D1120u;
            goto label_2d1120;
        }
    }
    ctx->pc = 0x2D110Cu;
    // 0x2d110c: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x2d110cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x2d1110: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d1110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d1114: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x2d1114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x2d1118: 0xc0b3552  jal         func_2CD548
    ctx->pc = 0x2D1118u;
    SET_GPR_U32(ctx, 31, 0x2D1120u);
    ctx->pc = 0x2D111Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1118u;
    // 0x2d111c: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD548u, 0x2D1118u, 0x2D1120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1120u;
label_2d1120:
    // 0x2d1120: 0x8e100088  lw          $s0, 0x88($s0)
    ctx->pc = 0x2d1120u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_2d1124:
    // 0x2d1124: 0x5600ffe0  bnel        $s0, $zero, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2D1124u;
    {
        const bool branch_taken_0x2d1124 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1124) {
            ctx->pc = 0x2D1128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1124u;
            // 0x2d1128: 0x8e0200b0  lw          $v0, 0xB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D10A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d10a8;
        }
    }
    ctx->pc = 0x2D112Cu;
label_2d112c:
    // 0x2d112c: 0x16600017  bnez        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D112Cu;
    {
        const bool branch_taken_0x2d112c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D112Cu;
        // 0x2d1130: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d112c) {
            ctx->pc = 0x2D118Cu;
            goto label_2d118c;
        }
    }
    ctx->pc = 0x2D1134u;
    // 0x2d1134: 0xc0b488a  jal         func_2D2228
    ctx->pc = 0x2D1134u;
    SET_GPR_U32(ctx, 31, 0x2D113Cu);
    ctx->pc = 0x2D1138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1134u;
    // 0x2d1138: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2228u, 0x2D1134u, 0x2D113Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D113Cu;
label_2d113c:
    // 0x2d113c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d113cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1140: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D1140u;
    {
        const bool branch_taken_0x2d1140 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1140u;
        // 0x2d1144: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1140) {
            ctx->pc = 0x2D1188u;
            goto label_2d1188;
        }
    }
    ctx->pc = 0x2D1148u;
    // 0x2d1148: 0x8e460128  lw          $a2, 0x128($s2)
    ctx->pc = 0x2d1148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
    // 0x2d114c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2d114cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x2d1150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d1150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1154: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d1154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1158: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x2d1158u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x2d115c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d115cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1160: 0xc0b3240  jal         func_2CC900
    ctx->pc = 0x2D1160u;
    SET_GPR_U32(ctx, 31, 0x2D1168u);
    ctx->pc = 0x2D1164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1160u;
    // 0x2d1164: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC900u, 0x2D1160u, 0x2D1168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1168u;
label_2d1168:
    // 0x2d1168: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2d1168u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d116c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d116cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1170: 0xc0dcd58  jal         func_373560
    ctx->pc = 0x2D1170u;
    SET_GPR_U32(ctx, 31, 0x2D1178u);
    ctx->pc = 0x2D1174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1170u;
    // 0x2d1174: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373560u, 0x2D1170u, 0x2D1178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1178u;
label_2d1178:
    // 0x2d1178: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x2d1178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x2d117c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d117cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d1180: 0xc0b351c  jal         func_2CD470
    ctx->pc = 0x2D1180u;
    SET_GPR_U32(ctx, 31, 0x2D1188u);
    ctx->pc = 0x2D1184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1180u;
    // 0x2d1184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD470u, 0x2D1180u, 0x2D1188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1188u;
label_2d1188:
    // 0x2d1188: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2d1188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_2d118c:
    // 0x2d118c: 0x246274a0  addiu       $v0, $v1, 0x74A0
    ctx->pc = 0x2d118cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
label_2d1190:
    // 0x2d1190: 0x944305b0  lhu         $v1, 0x5B0($v0)
    ctx->pc = 0x2d1190u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1456)));
    // 0x2d1194: 0x10600068  beqz        $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x2D1194u;
    {
        const bool branch_taken_0x2d1194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1194u;
        // 0x2d1198: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1194) {
            ctx->pc = 0x2D1338u;
            goto label_2d1338;
        }
    }
    ctx->pc = 0x2D119Cu;
    // 0x2d119c: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x2d119cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x2d11a0: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D11A0u;
    {
        const bool branch_taken_0x2d11a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d11a0) {
            ctx->pc = 0x2D1200u;
            goto label_2d1200;
        }
    }
    ctx->pc = 0x2D11A8u;
    // 0x2d11a8: 0x8e500018  lw          $s0, 0x18($s2)
    ctx->pc = 0x2d11a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2d11ac: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D11ACu;
    {
        const bool branch_taken_0x2d11ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d11ac) {
            ctx->pc = 0x2D1200u;
            goto label_2d1200;
        }
    }
    ctx->pc = 0x2D11B4u;
    // 0x2d11b4: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x2d11b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d11b8: 0x2411000a  addiu       $s1, $zero, 0xA
    ctx->pc = 0x2d11b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d11bc: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x2d11bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_2d11c0:
    // 0x2d11c0: 0x5053000d  beql        $v0, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x2D11C0u;
    {
        const bool branch_taken_0x2d11c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x2d11c0) {
            ctx->pc = 0x2D11C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D11C0u;
            // 0x2d11c4: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D11F8u;
            goto label_2d11f8;
        }
    }
    ctx->pc = 0x2D11C8u;
    // 0x2d11c8: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x2d11c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2d11cc: 0x5451000a  bnel        $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2D11CCu;
    {
        const bool branch_taken_0x2d11cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2d11cc) {
            ctx->pc = 0x2D11D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D11CCu;
            // 0x2d11d0: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D11F8u;
            goto label_2d11f8;
        }
    }
    ctx->pc = 0x2D11D4u;
    // 0x2d11d4: 0xc0dce9e  jal         func_373A78
    ctx->pc = 0x2D11D4u;
    SET_GPR_U32(ctx, 31, 0x2D11DCu);
    ctx->pc = 0x2D11D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D11D4u;
    // 0x2d11d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A78u, 0x2D11D4u, 0x2D11DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D11DCu;
label_2d11dc:
    // 0x2d11dc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D11DCu;
    {
        const bool branch_taken_0x2d11dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d11dc) {
            ctx->pc = 0x2D11E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D11DCu;
            // 0x2d11e0: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D11F8u;
            goto label_2d11f8;
        }
    }
    ctx->pc = 0x2D11E4u;
    // 0x2d11e4: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2d11e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2d11e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d11e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d11ec: 0xc0b352a  jal         func_2CD4A8
    ctx->pc = 0x2D11ECu;
    SET_GPR_U32(ctx, 31, 0x2D11F4u);
    ctx->pc = 0x2D11F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D11ECu;
    // 0x2d11f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD4A8u, 0x2D11ECu, 0x2D11F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D11F4u;
label_2d11f4:
    // 0x2d11f4: 0x8e100088  lw          $s0, 0x88($s0)
    ctx->pc = 0x2d11f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_2d11f8:
    // 0x2d11f8: 0x5600fff1  bnel        $s0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x2D11F8u;
    {
        const bool branch_taken_0x2d11f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d11f8) {
            ctx->pc = 0x2D11FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D11F8u;
            // 0x2d11fc: 0x8e0200b0  lw          $v0, 0xB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D11C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d11c0;
        }
    }
    ctx->pc = 0x2D1200u;
label_2d1200:
    // 0x2d1200: 0xc0b4334  jal         func_2D0CD0
    ctx->pc = 0x2D1200u;
    SET_GPR_U32(ctx, 31, 0x2D1208u);
    ctx->pc = 0x2D1204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1200u;
    // 0x2d1204: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0CD0u, 0x2D1200u, 0x2D1208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1208u;
label_2d1208:
    // 0x2d1208: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2d1208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2d120c: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2D120Cu;
    {
        const bool branch_taken_0x2d120c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D1210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D120Cu;
        // 0x2d1210: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d120c) {
            ctx->pc = 0x2D123Cu;
            goto label_2d123c;
        }
    }
    ctx->pc = 0x2D1214u;
    // 0x2d1214: 0x8e43013c  lw          $v1, 0x13C($s2)
    ctx->pc = 0x2d1214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
    // 0x2d1218: 0x14620029  bne         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2D1218u;
    {
        const bool branch_taken_0x2d1218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1218u;
        // 0x2d121c: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1218) {
            ctx->pc = 0x2D12C0u;
            goto label_2d12c0;
        }
    }
    ctx->pc = 0x2D1220u;
    // 0x2d1220: 0x246274a0  addiu       $v0, $v1, 0x74A0
    ctx->pc = 0x2d1220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x2d1224: 0x944405b0  lhu         $a0, 0x5B0($v0)
    ctx->pc = 0x2d1224u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1456)));
    // 0x2d1228: 0x24030604  addiu       $v1, $zero, 0x604
    ctx->pc = 0x2d1228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1540));
    // 0x2d122c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D122Cu;
    {
        const bool branch_taken_0x2d122c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D1230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D122Cu;
        // 0x2d1230: 0x24020606  addiu       $v0, $zero, 0x606 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1542));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d122c) {
            ctx->pc = 0x2D123Cu;
            goto label_2d123c;
        }
    }
    ctx->pc = 0x2D1234u;
    // 0x2d1234: 0x5482001f  bnel        $a0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D1234u;
    {
        const bool branch_taken_0x2d1234 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d1234) {
            ctx->pc = 0x2D1238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1234u;
            // 0x2d1238: 0x8e43013c  lw          $v1, 0x13C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D12B4u;
            goto label_2d12b4;
        }
    }
    ctx->pc = 0x2D123Cu;
label_2d123c:
    // 0x2d123c: 0x8e500018  lw          $s0, 0x18($s2)
    ctx->pc = 0x2d123cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2d1240: 0x5200001c  beql        $s0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2D1240u;
    {
        const bool branch_taken_0x2d1240 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1240) {
            ctx->pc = 0x2D1244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1240u;
            // 0x2d1244: 0x8e43013c  lw          $v1, 0x13C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D12B4u;
            goto label_2d12b4;
        }
    }
    ctx->pc = 0x2D1248u;
    // 0x2d1248: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x2d1248u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d124c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2d124cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1250: 0x2413002e  addiu       $s3, $zero, 0x2E
    ctx->pc = 0x2d1250u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x2d1254: 0x2411001b  addiu       $s1, $zero, 0x1B
    ctx->pc = 0x2d1254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2d1258: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x2d1258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2d125c: 0x0  nop
    ctx->pc = 0x2d125cu;
    // NOP
label_2d1260:
    // 0x2d1260: 0x50550011  beql        $v0, $s5, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D1260u;
    {
        const bool branch_taken_0x2d1260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x2d1260) {
            ctx->pc = 0x2D1264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1260u;
            // 0x2d1264: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D12A8u;
            goto label_2d12a8;
        }
    }
    ctx->pc = 0x2D1268u;
    // 0x2d1268: 0xc0dce9e  jal         func_373A78
    ctx->pc = 0x2D1268u;
    SET_GPR_U32(ctx, 31, 0x2D1270u);
    ctx->pc = 0x2D126Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1268u;
    // 0x2d126c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A78u, 0x2D1268u, 0x2D1270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1270u;
label_2d1270:
    // 0x2d1270: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2D1270u;
    {
        const bool branch_taken_0x2d1270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1270) {
            ctx->pc = 0x2D1274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1270u;
            // 0x2d1274: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D12A8u;
            goto label_2d12a8;
        }
    }
    ctx->pc = 0x2D1278u;
    // 0x2d1278: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x2d1278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2d127c: 0x10540005  beq         $v0, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D127Cu;
    {
        const bool branch_taken_0x2d127c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x2d127c) {
            ctx->pc = 0x2D1294u;
            goto label_2d1294;
        }
    }
    ctx->pc = 0x2D1284u;
    // 0x2d1284: 0x10530003  beq         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1284u;
    {
        const bool branch_taken_0x2d1284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x2d1284) {
            ctx->pc = 0x2D1294u;
            goto label_2d1294;
        }
    }
    ctx->pc = 0x2D128Cu;
    // 0x2d128c: 0x54510006  bnel        $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D128Cu;
    {
        const bool branch_taken_0x2d128c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2d128c) {
            ctx->pc = 0x2D1290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D128Cu;
            // 0x2d1290: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D12A8u;
            goto label_2d12a8;
        }
    }
    ctx->pc = 0x2D1294u;
label_2d1294:
    // 0x2d1294: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2d1294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x2d1298: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d1298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d129c: 0xc0b352a  jal         func_2CD4A8
    ctx->pc = 0x2D129Cu;
    SET_GPR_U32(ctx, 31, 0x2D12A4u);
    ctx->pc = 0x2D12A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D129Cu;
    // 0x2d12a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD4A8u, 0x2D129Cu, 0x2D12A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D12A4u;
label_2d12a4:
    // 0x2d12a4: 0x8e100088  lw          $s0, 0x88($s0)
    ctx->pc = 0x2d12a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_2d12a8:
    // 0x2d12a8: 0x5600ffed  bnel        $s0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2D12A8u;
    {
        const bool branch_taken_0x2d12a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d12a8) {
            ctx->pc = 0x2D12ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D12A8u;
            // 0x2d12ac: 0x8e0200b0  lw          $v0, 0xB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1260;
        }
    }
    ctx->pc = 0x2D12B0u;
    // 0x2d12b0: 0x8e43013c  lw          $v1, 0x13C($s2)
    ctx->pc = 0x2d12b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
label_2d12b4:
    // 0x2d12b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d12b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d12b8: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D12B8u;
    {
        const bool branch_taken_0x2d12b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D12BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D12B8u;
        // 0x2d12bc: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d12b8) {
            ctx->pc = 0x2D1338u;
            goto label_2d1338;
        }
    }
    ctx->pc = 0x2D12C0u;
label_2d12c0:
    // 0x2d12c0: 0x246274a0  addiu       $v0, $v1, 0x74A0
    ctx->pc = 0x2d12c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x2d12c4: 0x944405b0  lhu         $a0, 0x5B0($v0)
    ctx->pc = 0x2d12c4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1456)));
    // 0x2d12c8: 0x24030604  addiu       $v1, $zero, 0x604
    ctx->pc = 0x2d12c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1540));
    // 0x2d12cc: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D12CCu;
    {
        const bool branch_taken_0x2d12cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D12D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D12CCu;
        // 0x2d12d0: 0x24020606  addiu       $v0, $zero, 0x606 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1542));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d12cc) {
            ctx->pc = 0x2D12DCu;
            goto label_2d12dc;
        }
    }
    ctx->pc = 0x2D12D4u;
    // 0x2d12d4: 0x54820019  bnel        $a0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D12D4u;
    {
        const bool branch_taken_0x2d12d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d12d4) {
            ctx->pc = 0x2D12D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D12D4u;
            // 0x2d12d8: 0x8e4200ac  lw          $v0, 0xAC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D133Cu;
            goto label_2d133c;
        }
    }
    ctx->pc = 0x2D12DCu;
label_2d12dc:
    // 0x2d12dc: 0x8e500018  lw          $s0, 0x18($s2)
    ctx->pc = 0x2d12dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2d12e0: 0x52000016  beql        $s0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D12E0u;
    {
        const bool branch_taken_0x2d12e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d12e0) {
            ctx->pc = 0x2D12E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D12E0u;
            // 0x2d12e4: 0x8e4200ac  lw          $v0, 0xAC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D133Cu;
            goto label_2d133c;
        }
    }
    ctx->pc = 0x2D12E8u;
    // 0x2d12e8: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x2d12e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d12ec: 0x24110026  addiu       $s1, $zero, 0x26
    ctx->pc = 0x2d12ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2d12f0: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x2d12f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2d12f4: 0x0  nop
    ctx->pc = 0x2d12f4u;
    // NOP
label_2d12f8:
    // 0x2d12f8: 0x5053000d  beql        $v0, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x2D12F8u;
    {
        const bool branch_taken_0x2d12f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x2d12f8) {
            ctx->pc = 0x2D12FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D12F8u;
            // 0x2d12fc: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1330u;
            goto label_2d1330;
        }
    }
    ctx->pc = 0x2D1300u;
    // 0x2d1300: 0xc0dce9e  jal         func_373A78
    ctx->pc = 0x2D1300u;
    SET_GPR_U32(ctx, 31, 0x2D1308u);
    ctx->pc = 0x2D1304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1300u;
    // 0x2d1304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A78u, 0x2D1300u, 0x2D1308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1308u;
label_2d1308:
    // 0x2d1308: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D1308u;
    {
        const bool branch_taken_0x2d1308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1308) {
            ctx->pc = 0x2D130Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1308u;
            // 0x2d130c: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1330u;
            goto label_2d1330;
        }
    }
    ctx->pc = 0x2D1310u;
    // 0x2d1310: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x2d1310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2d1314: 0x54510006  bnel        $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D1314u;
    {
        const bool branch_taken_0x2d1314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2d1314) {
            ctx->pc = 0x2D1318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1314u;
            // 0x2d1318: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1330u;
            goto label_2d1330;
        }
    }
    ctx->pc = 0x2D131Cu;
    // 0x2d131c: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2d131cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x2d1320: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d1320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d1324: 0xc0b352a  jal         func_2CD4A8
    ctx->pc = 0x2D1324u;
    SET_GPR_U32(ctx, 31, 0x2D132Cu);
    ctx->pc = 0x2D1328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1324u;
    // 0x2d1328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD4A8u, 0x2D1324u, 0x2D132Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D132Cu;
label_2d132c:
    // 0x2d132c: 0x8e100088  lw          $s0, 0x88($s0)
    ctx->pc = 0x2d132cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_2d1330:
    // 0x2d1330: 0x5600fff1  bnel        $s0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x2D1330u;
    {
        const bool branch_taken_0x2d1330 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1330) {
            ctx->pc = 0x2D1334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1330u;
            // 0x2d1334: 0x8e0200b0  lw          $v0, 0xB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D12F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d12f8;
        }
    }
    ctx->pc = 0x2D1338u;
label_2d1338:
    // 0x2d1338: 0x8e4200ac  lw          $v0, 0xAC($s2)
    ctx->pc = 0x2d1338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
label_2d133c:
    // 0x2d133c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2d133cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2d1340: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d1340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d1344: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2D1344u;
    {
        const bool branch_taken_0x2d1344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1344u;
        // 0x2d1348: 0x8e500018  lw          $s0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1344) {
            ctx->pc = 0x2D13E0u;
            goto label_2d13e0;
        }
    }
    ctx->pc = 0x2D134Cu;
    // 0x2d134c: 0x12000045  beqz        $s0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2D134Cu;
    {
        const bool branch_taken_0x2d134c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D134Cu;
        // 0x2d1350: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d134c) {
            ctx->pc = 0x2D1464u;
            goto label_2d1464;
        }
    }
    ctx->pc = 0x2D1354u;
    // 0x2d1354: 0x3c13fffb  lui         $s3, 0xFFFB
    ctx->pc = 0x2d1354u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65531 << 16));
    // 0x2d1358: 0x3c140008  lui         $s4, 0x8
    ctx->pc = 0x2d1358u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)8 << 16));
    // 0x2d135c: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x2d135cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x2d1360: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x2d1360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2d1364: 0x0  nop
    ctx->pc = 0x2d1364u;
    // NOP
label_2d1368:
    // 0x2d1368: 0x50550019  beql        $v0, $s5, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D1368u;
    {
        const bool branch_taken_0x2d1368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x2d1368) {
            ctx->pc = 0x2D136Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1368u;
            // 0x2d136c: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D13D0u;
            goto label_2d13d0;
        }
    }
    ctx->pc = 0x2D1370u;
    // 0x2d1370: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x2d1370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2d1374: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x2d1374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
    // 0x2d1378: 0x54620015  bnel        $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D1378u;
    {
        const bool branch_taken_0x2d1378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d1378) {
            ctx->pc = 0x2D137Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1378u;
            // 0x2d137c: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D13D0u;
            goto label_2d13d0;
        }
    }
    ctx->pc = 0x2D1380u;
    // 0x2d1380: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x2d1380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x2d1384: 0x741024  and         $v0, $v1, $s4
    ctx->pc = 0x2d1384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x2d1388: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D1388u;
    {
        const bool branch_taken_0x2d1388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1388) {
            ctx->pc = 0x2D138Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1388u;
            // 0x2d138c: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D13D0u;
            goto label_2d13d0;
        }
    }
    ctx->pc = 0x2D1390u;
    // 0x2d1390: 0x3c110002  lui         $s1, 0x2
    ctx->pc = 0x2d1390u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)2 << 16));
    // 0x2d1394: 0x711024  and         $v0, $v1, $s1
    ctx->pc = 0x2d1394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x2d1398: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2D1398u;
    {
        const bool branch_taken_0x2d1398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1398) {
            ctx->pc = 0x2D139Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1398u;
            // 0x2d139c: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D13D0u;
            goto label_2d13d0;
        }
    }
    ctx->pc = 0x2D13A0u;
    // 0x2d13a0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2d13a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2d13a4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d13a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2d13a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d13a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d13ac: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2d13acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2d13b0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2d13b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d13b4: 0xc0b3538  jal         func_2CD4E0
    ctx->pc = 0x2D13B4u;
    SET_GPR_U32(ctx, 31, 0x2D13BCu);
    ctx->pc = 0x2D13B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D13B4u;
    // 0x2d13b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD4E0u, 0x2D13B4u, 0x2D13BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D13BCu;
label_2d13bc:
    // 0x2d13bc: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x2d13bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x2d13c0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x2d13c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x2d13c4: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x2d13c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x2d13c8: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x2d13c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x2d13cc: 0x8e100088  lw          $s0, 0x88($s0)
    ctx->pc = 0x2d13ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_2d13d0:
    // 0x2d13d0: 0x5600ffe5  bnel        $s0, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2D13D0u;
    {
        const bool branch_taken_0x2d13d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d13d0) {
            ctx->pc = 0x2D13D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D13D0u;
            // 0x2d13d4: 0x8e0200b0  lw          $v0, 0xB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1368;
        }
    }
    ctx->pc = 0x2D13D8u;
    // 0x2d13d8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2D13D8u;
    {
        const bool branch_taken_0x2d13d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D13DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D13D8u;
        // 0x2d13dc: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d13d8) {
            ctx->pc = 0x2D1468u;
            goto label_2d1468;
        }
    }
    ctx->pc = 0x2D13E0u;
label_2d13e0:
    // 0x2d13e0: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2D13E0u;
    {
        const bool branch_taken_0x2d13e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D13E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D13E0u;
        // 0x2d13e4: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d13e0) {
            ctx->pc = 0x2D1464u;
            goto label_2d1464;
        }
    }
    ctx->pc = 0x2D13E8u;
    // 0x2d13e8: 0x3c13fffd  lui         $s3, 0xFFFD
    ctx->pc = 0x2d13e8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65533 << 16));
    // 0x2d13ec: 0x3c140008  lui         $s4, 0x8
    ctx->pc = 0x2d13ecu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)8 << 16));
    // 0x2d13f0: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x2d13f0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x2d13f4: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x2d13f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_2d13f8:
    // 0x2d13f8: 0x50550018  beql        $v0, $s5, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D13F8u;
    {
        const bool branch_taken_0x2d13f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x2d13f8) {
            ctx->pc = 0x2D13FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D13F8u;
            // 0x2d13fc: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D145Cu;
            goto label_2d145c;
        }
    }
    ctx->pc = 0x2D1400u;
    // 0x2d1400: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x2d1400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2d1404: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x2d1404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
    // 0x2d1408: 0x54620014  bnel        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D1408u;
    {
        const bool branch_taken_0x2d1408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d1408) {
            ctx->pc = 0x2D140Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1408u;
            // 0x2d140c: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D145Cu;
            goto label_2d145c;
        }
    }
    ctx->pc = 0x2D1410u;
    // 0x2d1410: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x2d1410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x2d1414: 0x741024  and         $v0, $v1, $s4
    ctx->pc = 0x2d1414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x2d1418: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D1418u;
    {
        const bool branch_taken_0x2d1418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1418) {
            ctx->pc = 0x2D141Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1418u;
            // 0x2d141c: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D145Cu;
            goto label_2d145c;
        }
    }
    ctx->pc = 0x2D1420u;
    // 0x2d1420: 0x3c110004  lui         $s1, 0x4
    ctx->pc = 0x2d1420u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4 << 16));
    // 0x2d1424: 0x711024  and         $v0, $v1, $s1
    ctx->pc = 0x2d1424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x2d1428: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2D1428u;
    {
        const bool branch_taken_0x2d1428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1428) {
            ctx->pc = 0x2D142Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1428u;
            // 0x2d142c: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D145Cu;
            goto label_2d145c;
        }
    }
    ctx->pc = 0x2D1430u;
    // 0x2d1430: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d1430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d1434: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d1434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d1438: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2d1438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2d143c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2d143cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d1440: 0xc0b3538  jal         func_2CD4E0
    ctx->pc = 0x2D1440u;
    SET_GPR_U32(ctx, 31, 0x2D1448u);
    ctx->pc = 0x2D1444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1440u;
    // 0x2d1444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD4E0u, 0x2D1440u, 0x2D1448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1448u;
label_2d1448:
    // 0x2d1448: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x2d1448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x2d144c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x2d144cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x2d1450: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x2d1450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x2d1454: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x2d1454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x2d1458: 0x8e100088  lw          $s0, 0x88($s0)
    ctx->pc = 0x2d1458u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_2d145c:
    // 0x2d145c: 0x5600ffe6  bnel        $s0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2D145Cu;
    {
        const bool branch_taken_0x2d145c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d145c) {
            ctx->pc = 0x2D1460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D145Cu;
            // 0x2d1460: 0x8e0200b0  lw          $v0, 0xB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D13F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d13f8;
        }
    }
    ctx->pc = 0x2D1464u;
label_2d1464:
    // 0x2d1464: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2d1464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2d1468:
    // 0x2d1468: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2d1468u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d146c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2d146cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d1470: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2d1470u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d1474: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2d1474u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d1478: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2d1478u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d147c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2d147cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1480: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2d1480u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1484: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2d1484u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d148c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2d148cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d1490: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1490u;
        // 0x2d1494: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1498u;
}
