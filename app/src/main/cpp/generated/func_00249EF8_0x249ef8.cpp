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

// Function: func_00249EF8
// Address: 0x249ef8 - 0x24a0b0
void func_00249EF8_0x249ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00249EF8_0x249ef8");
#endif

    switch (ctx->pc) {
        case 0x249f54u: goto label_249f54;
        case 0x249f78u: goto label_249f78;
        case 0x249f9cu: goto label_249f9c;
        case 0x249fb0u: goto label_249fb0;
        case 0x249fc4u: goto label_249fc4;
        case 0x249fdcu: goto label_249fdc;
        case 0x249ff0u: goto label_249ff0;
        case 0x24a004u: goto label_24a004;
        case 0x24a024u: goto label_24a024;
        case 0x24a038u: goto label_24a038;
        case 0x24a064u: goto label_24a064;
        case 0x24a070u: goto label_24a070;
        case 0x24a08cu: goto label_24a08c;
        default: break;
    }

    ctx->pc = 0x249ef8u;

    // 0x249ef8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x249ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x249efc: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x249efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x249f00: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x249f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x249f04: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x249f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x249f08: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x249f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x249f0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x249f0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249f10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x249f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x249f14: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x249f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x249f18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x249f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x249f1c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x249f1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x249f20: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x249f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x249f24: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x249f24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x249f28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x249f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x249f2c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x249F2Cu;
    {
        const bool branch_taken_0x249f2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x249F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F2Cu;
        // 0x249f30: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249f2c) {
            ctx->pc = 0x249F48u;
            goto label_249f48;
        }
    }
    ctx->pc = 0x249F34u;
    // 0x249f34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249f38: 0x1082003d  beq         $a0, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x249F38u;
    {
        const bool branch_taken_0x249f38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x249f38) {
            ctx->pc = 0x24A030u;
            goto label_24a030;
        }
    }
    ctx->pc = 0x249F40u;
    // 0x249f40: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x249F40u;
    {
        const bool branch_taken_0x249f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F40u;
        // 0x249f44: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249f40) {
            ctx->pc = 0x24A074u;
            goto label_24a074;
        }
    }
    ctx->pc = 0x249F48u;
label_249f48:
    // 0x249f48: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x249f48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x249f4c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x249F4Cu;
    SET_GPR_U32(ctx, 31, 0x249F54u);
    ctx->pc = 0x249F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249F4Cu;
    // 0x249f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x249F4Cu, 0x249F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249F54u;
label_249f54:
    // 0x249f54: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x249f54u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x249f58: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x249f58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x249f5c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x249f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x249f60: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x249f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x249f64: 0x8c433d68  lw          $v1, 0x3D68($v0)
    ctx->pc = 0x249f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15720)));
    // 0x249f68: 0x8c453d64  lw          $a1, 0x3D64($v0)
    ctx->pc = 0x249f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15716)));
    // 0x249f6c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x249f6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x249f70: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x249F70u;
    SET_GPR_U32(ctx, 31, 0x249F78u);
    ctx->pc = 0x249F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249F70u;
    // 0x249f74: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x249F70u, 0x249F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249F78u;
label_249f78:
    // 0x249f78: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x249f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x249f7c: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x249F7Cu;
    {
        const bool branch_taken_0x249f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x249F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F7Cu;
        // 0x249f80: 0x8e040748  lw          $a0, 0x748($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249f7c) {
            ctx->pc = 0x249FCCu;
            goto label_249fcc;
        }
    }
    ctx->pc = 0x249F84u;
    // 0x249f84: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x249f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x249f88: 0x8c623d6c  lw          $v0, 0x3D6C($v1)
    ctx->pc = 0x249f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15724)));
    // 0x249f8c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x249F8Cu;
    {
        const bool branch_taken_0x249f8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x249F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F8Cu;
        // 0x249f90: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249f8c) {
            ctx->pc = 0x249F9Cu;
            goto label_249f9c;
        }
    }
    ctx->pc = 0x249F94u;
    // 0x249f94: 0xc0a04a4  jal         func_281290
    ctx->pc = 0x249F94u;
    SET_GPR_U32(ctx, 31, 0x249F9Cu);
    ctx->pc = 0x249F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249F94u;
    // 0x249f98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281290u, 0x249F94u, 0x249F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249F9Cu;
label_249f9c:
    // 0x249f9c: 0x8e04074c  lw          $a0, 0x74C($s0)
    ctx->pc = 0x249f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
    // 0x249fa0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x249FA0u;
    {
        const bool branch_taken_0x249fa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x249fa0) {
            ctx->pc = 0x249FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249FA0u;
            // 0x249fa4: 0x8e040750  lw          $a0, 0x750($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249FB4u;
            goto label_249fb4;
        }
    }
    ctx->pc = 0x249FA8u;
    // 0x249fa8: 0xc0a0c6c  jal         func_2831B0
    ctx->pc = 0x249FA8u;
    SET_GPR_U32(ctx, 31, 0x249FB0u);
    ctx->pc = 0x249FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249FA8u;
    // 0x249fac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2831B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2831B0u, 0x249FA8u, 0x249FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249FB0u;
label_249fb0:
    // 0x249fb0: 0x8e040750  lw          $a0, 0x750($s0)
    ctx->pc = 0x249fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
label_249fb4:
    // 0x249fb4: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x249FB4u;
    {
        const bool branch_taken_0x249fb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x249fb4) {
            ctx->pc = 0x24A004u;
            goto label_24a004;
        }
    }
    ctx->pc = 0x249FBCu;
    // 0x249fbc: 0xc0a0c5c  jal         func_283170
    ctx->pc = 0x249FBCu;
    SET_GPR_U32(ctx, 31, 0x249FC4u);
    ctx->pc = 0x283170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283170u, 0x249FBCu, 0x249FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249FC4u;
label_249fc4:
    // 0x249fc4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x249FC4u;
    {
        const bool branch_taken_0x249fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249fc4) {
            ctx->pc = 0x24A004u;
            goto label_24a004;
        }
    }
    ctx->pc = 0x249FCCu;
label_249fcc:
    // 0x249fcc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x249FCCu;
    {
        const bool branch_taken_0x249fcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x249fcc) {
            ctx->pc = 0x249FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249FCCu;
            // 0x249fd0: 0x8e04074c  lw          $a0, 0x74C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249FE0u;
            goto label_249fe0;
        }
    }
    ctx->pc = 0x249FD4u;
    // 0x249fd4: 0xc0a04a4  jal         func_281290
    ctx->pc = 0x249FD4u;
    SET_GPR_U32(ctx, 31, 0x249FDCu);
    ctx->pc = 0x249FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249FD4u;
    // 0x249fd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281290u, 0x249FD4u, 0x249FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249FDCu;
label_249fdc:
    // 0x249fdc: 0x8e04074c  lw          $a0, 0x74C($s0)
    ctx->pc = 0x249fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
label_249fe0:
    // 0x249fe0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x249FE0u;
    {
        const bool branch_taken_0x249fe0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x249fe0) {
            ctx->pc = 0x249FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249FE0u;
            // 0x249fe4: 0x8e040750  lw          $a0, 0x750($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249FF4u;
            goto label_249ff4;
        }
    }
    ctx->pc = 0x249FE8u;
    // 0x249fe8: 0xc0a0c6c  jal         func_2831B0
    ctx->pc = 0x249FE8u;
    SET_GPR_U32(ctx, 31, 0x249FF0u);
    ctx->pc = 0x249FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249FE8u;
    // 0x249fec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2831B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2831B0u, 0x249FE8u, 0x249FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249FF0u;
label_249ff0:
    // 0x249ff0: 0x8e040750  lw          $a0, 0x750($s0)
    ctx->pc = 0x249ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
label_249ff4:
    // 0x249ff4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x249FF4u;
    {
        const bool branch_taken_0x249ff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x249ff4) {
            ctx->pc = 0x24A004u;
            goto label_24a004;
        }
    }
    ctx->pc = 0x249FFCu;
    // 0x249ffc: 0xc0a0c5c  jal         func_283170
    ctx->pc = 0x249FFCu;
    SET_GPR_U32(ctx, 31, 0x24A004u);
    ctx->pc = 0x283170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283170u, 0x249FFCu, 0x24A004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A004u;
label_24a004:
    // 0x24a004: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24a004u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24a008: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24a008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a00c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24a00cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a010: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x24a010u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a018: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x24a018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24a01c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24A01Cu;
    SET_GPR_U32(ctx, 31, 0x24A024u);
    ctx->pc = 0x24A020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A01Cu;
    // 0x24a020: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24A01Cu, 0x24A024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A024u;
label_24a024:
    // 0x24a024: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x24a024u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x24a028: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24a028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24a02c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x24a02cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_24a030:
    // 0x24a030: 0xc055f06  jal         func_157C18
    ctx->pc = 0x24A030u;
    SET_GPR_U32(ctx, 31, 0x24A038u);
    ctx->pc = 0x24A034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A030u;
    // 0x24a034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x24A030u, 0x24A038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A038u;
label_24a038:
    // 0x24a038: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24A038u;
    {
        const bool branch_taken_0x24a038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A038u;
        // 0x24a03c: 0x240200a1  addiu       $v0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a038) {
            ctx->pc = 0x24A050u;
            goto label_24a050;
        }
    }
    ctx->pc = 0x24A040u;
    // 0x24a040: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x24a040u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x24a044: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x24a044u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x24a048: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x24a048u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x24a04c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x24a04cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_24a050:
    // 0x24a050: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24a050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24a054: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24a054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24a058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a05c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x24A05Cu;
    SET_GPR_U32(ctx, 31, 0x24A064u);
    ctx->pc = 0x24A060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A05Cu;
    // 0x24a060: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x24A05Cu, 0x24A064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A064u;
label_24a064:
    // 0x24a064: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24a064u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24a068: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x24A068u;
    SET_GPR_U32(ctx, 31, 0x24A070u);
    ctx->pc = 0x24A06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A068u;
    // 0x24a06c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x24A068u, 0x24A070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A070u;
label_24a070:
    // 0x24a070: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x24a070u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_24a074:
    // 0x24a074: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24a074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24a078: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A078u;
    {
        const bool branch_taken_0x24a078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A078u;
        // 0x24a07c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a078) {
            ctx->pc = 0x24A08Cu;
            goto label_24a08c;
        }
    }
    ctx->pc = 0x24A080u;
    // 0x24a080: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x24a080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24a084: 0xc09b6c0  jal         func_26DB00
    ctx->pc = 0x24A084u;
    SET_GPR_U32(ctx, 31, 0x24A08Cu);
    ctx->pc = 0x24A088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A084u;
    // 0x24a088: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26DB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DB00u, 0x24A084u, 0x24A08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A08Cu;
label_24a08c:
    // 0x24a08c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x24a08cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24a090: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x24a090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24a094: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24a094u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24a098: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x24a098u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a09c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24a09cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a0a0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x24a0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24a0a4: 0x3e00008  jr          $ra
    ctx->pc = 0x24A0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0A4u;
        // 0x24a0a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A0A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A0ACu;
    // 0x24a0ac: 0x0  nop
    ctx->pc = 0x24a0acu;
    // NOP
    ctx->pc = 0x24a0b0u;
}
