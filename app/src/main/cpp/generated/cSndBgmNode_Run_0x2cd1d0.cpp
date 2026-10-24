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

// Function: cSndBgmNode_Run
// Address: 0x2cd1d0 - 0x2cd310
void cSndBgmNode_Run_0x2cd1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndBgmNode_Run_0x2cd1d0");
#endif

    switch (ctx->pc) {
        case 0x2cd224u: goto label_2cd224;
        case 0x2cd248u: goto label_2cd248;
        case 0x2cd260u: goto label_2cd260;
        case 0x2cd27cu: goto label_2cd27c;
        case 0x2cd288u: goto label_2cd288;
        case 0x2cd2acu: goto label_2cd2ac;
        case 0x2cd2e4u: goto label_2cd2e4;
        case 0x2cd2ecu: goto label_2cd2ec;
        case 0x2cd2fcu: goto label_2cd2fc;
        default: break;
    }

    ctx->pc = 0x2cd1d0u;

    // 0x2cd1d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cd1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cd1d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2cd1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2cd1d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cd1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cd1dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cd1dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd1e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cd1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cd1e4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2cd1e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd1e8: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x2cd1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2cd1ec: 0x10710019  beq         $v1, $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2CD1ECu;
    {
        const bool branch_taken_0x2cd1ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x2CD1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD1ECu;
        // 0x2cd1f0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd1ec) {
            ctx->pc = 0x2CD254u;
            goto label_2cd254;
        }
    }
    ctx->pc = 0x2CD1F4u;
    // 0x2cd1f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD1F4u;
    {
        const bool branch_taken_0x2cd1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd1f4) {
            ctx->pc = 0x2CD1F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD1F4u;
            // 0x2cd1f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD20Cu;
            goto label_2cd20c;
        }
    }
    ctx->pc = 0x2CD1FCu;
    // 0x2cd1fc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CD1FCu;
    {
        const bool branch_taken_0x2cd1fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd1fc) {
            ctx->pc = 0x2CD21Cu;
            goto label_2cd21c;
        }
    }
    ctx->pc = 0x2CD204u;
    // 0x2cd204: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2CD204u;
    {
        const bool branch_taken_0x2cd204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD204u;
        // 0x2cd208: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd204) {
            ctx->pc = 0x2CD300u;
            goto label_2cd300;
        }
    }
    ctx->pc = 0x2CD20Cu;
label_2cd20c:
    // 0x2cd20c: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2CD20Cu;
    {
        const bool branch_taken_0x2cd20c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cd20c) {
            ctx->pc = 0x2CD2E4u;
            goto label_2cd2e4;
        }
    }
    ctx->pc = 0x2CD214u;
    // 0x2cd214: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2CD214u;
    {
        const bool branch_taken_0x2cd214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD214u;
        // 0x2cd218: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd214) {
            ctx->pc = 0x2CD300u;
            goto label_2cd300;
        }
    }
    ctx->pc = 0x2CD21Cu;
label_2cd21c:
    // 0x2cd21c: 0xc0b34e6  jal         func_2CD398
    ctx->pc = 0x2CD21Cu;
    SET_GPR_U32(ctx, 31, 0x2CD224u);
    ctx->pc = 0x2CD220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD21Cu;
    // 0x2cd220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD398u, 0x2CD21Cu, 0x2CD224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD224u;
label_2cd224:
    // 0x2cd224: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x2CD224u;
    {
        const bool branch_taken_0x2cd224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd224) {
            ctx->pc = 0x2CD228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD224u;
            // 0x2cd228: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD300u;
            goto label_2cd300;
        }
    }
    ctx->pc = 0x2CD22Cu;
    // 0x2cd22c: 0x960200a0  lhu         $v0, 0xA0($s0)
    ctx->pc = 0x2cd22cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x2cd230: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cd230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cd234: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CD234u;
    {
        const bool branch_taken_0x2cd234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd234) {
            ctx->pc = 0x2CD238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD234u;
            // 0x2cd238: 0xae1100b0  sw          $s1, 0xB0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD254u;
            goto label_2cd254;
        }
    }
    ctx->pc = 0x2CD23Cu;
    // 0x2cd23c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cd23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd240: 0xc0dce04  jal         func_373810
    ctx->pc = 0x2CD240u;
    SET_GPR_U32(ctx, 31, 0x2CD248u);
    ctx->pc = 0x2CD244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD240u;
    // 0x2cd244: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373810u, 0x2CD240u, 0x2CD248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD248u;
label_2cd248:
    // 0x2cd248: 0x860200a2  lh          $v0, 0xA2($s0)
    ctx->pc = 0x2cd248u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 162)));
    // 0x2cd24c: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x2cd24cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
    // 0x2cd250: 0xae1100b0  sw          $s1, 0xB0($s0)
    ctx->pc = 0x2cd250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 17));
label_2cd254:
    // 0x2cd254: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2cd254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2cd258: 0xc0b41dc  jal         func_2D0770
    ctx->pc = 0x2CD258u;
    SET_GPR_U32(ctx, 31, 0x2CD260u);
    ctx->pc = 0x2CD25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD258u;
    // 0x2cd25c: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0770u, 0x2CD258u, 0x2CD260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD260u;
label_2cd260:
    // 0x2cd260: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x2cd260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x2cd264: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cd264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cd268: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2CD268u;
    {
        const bool branch_taken_0x2cd268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd268) {
            ctx->pc = 0x2CD26Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD268u;
            // 0x2cd26c: 0x8e020098  lw          $v0, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD294u;
            goto label_2cd294;
        }
    }
    ctx->pc = 0x2CD270u;
    // 0x2cd270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cd270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd274: 0xc0dce16  jal         func_373858
    ctx->pc = 0x2CD274u;
    SET_GPR_U32(ctx, 31, 0x2CD27Cu);
    ctx->pc = 0x2CD278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD274u;
    // 0x2cd278: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373858u, 0x2CD274u, 0x2CD27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD27Cu;
label_2cd27c:
    // 0x2cd27c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2cd27cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cd280: 0xc0b352a  jal         func_2CD4A8
    ctx->pc = 0x2CD280u;
    SET_GPR_U32(ctx, 31, 0x2CD288u);
    ctx->pc = 0x2CD284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD280u;
    // 0x2cd284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD4A8u, 0x2CD280u, 0x2CD288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD288u;
label_2cd288:
    // 0x2cd288: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cd288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd28c: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x2cd28cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x2cd290: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x2cd290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_2cd294:
    // 0x2cd294: 0x3c030018  lui         $v1, 0x18
    ctx->pc = 0x2cd294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24 << 16));
    // 0x2cd298: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cd298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cd29c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CD29Cu;
    {
        const bool branch_taken_0x2cd29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd29c) {
            ctx->pc = 0x2CD2E4u;
            goto label_2cd2e4;
        }
    }
    ctx->pc = 0x2CD2A4u;
    // 0x2cd2a4: 0xc0dce96  jal         func_373A58
    ctx->pc = 0x2CD2A4u;
    SET_GPR_U32(ctx, 31, 0x2CD2ACu);
    ctx->pc = 0x2CD2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD2A4u;
    // 0x2cd2a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A58u, 0x2CD2A4u, 0x2CD2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD2ACu;
label_2cd2ac:
    // 0x2cd2ac: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CD2ACu;
    {
        const bool branch_taken_0x2cd2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd2ac) {
            ctx->pc = 0x2CD2E4u;
            goto label_2cd2e4;
        }
    }
    ctx->pc = 0x2CD2B4u;
    // 0x2cd2b4: 0xc60000c8  lwc1        $f0, 0xC8($s0)
    ctx->pc = 0x2cd2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd2b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cd2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cd2bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cd2bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cd2c0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2cd2c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cd2c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cd2c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2cd2c8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2cd2c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd2cc: 0x0  nop
    ctx->pc = 0x2cd2ccu;
    // NOP
    // 0x2cd2d0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD2D0u;
    {
        const bool branch_taken_0x2cd2d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CD2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD2D0u;
        // 0x2cd2d4: 0xe60000c8  swc1        $f0, 0xC8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd2d0) {
            ctx->pc = 0x2CD2E4u;
            goto label_2cd2e4;
        }
    }
    ctx->pc = 0x2CD2D8u;
    // 0x2cd2d8: 0xe60200c8  swc1        $f2, 0xC8($s0)
    ctx->pc = 0x2cd2d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
    // 0x2cd2dc: 0xc0dcd22  jal         func_373488
    ctx->pc = 0x2CD2DCu;
    SET_GPR_U32(ctx, 31, 0x2CD2E4u);
    ctx->pc = 0x2CD2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD2DCu;
    // 0x2cd2e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373488u, 0x2CD2DCu, 0x2CD2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD2E4u;
label_2cd2e4:
    // 0x2cd2e4: 0xc0dcddc  jal         func_373770
    ctx->pc = 0x2CD2E4u;
    SET_GPR_U32(ctx, 31, 0x2CD2ECu);
    ctx->pc = 0x2CD2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD2E4u;
    // 0x2cd2e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373770u, 0x2CD2E4u, 0x2CD2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD2ECu;
label_2cd2ec:
    // 0x2cd2ec: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD2ECu;
    {
        const bool branch_taken_0x2cd2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd2ec) {
            ctx->pc = 0x2CD2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD2ECu;
            // 0x2cd2f0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD300u;
            goto label_2cd300;
        }
    }
    ctx->pc = 0x2CD2F4u;
    // 0x2cd2f4: 0xc0b317a  jal         func_2CC5E8
    ctx->pc = 0x2CD2F4u;
    SET_GPR_U32(ctx, 31, 0x2CD2FCu);
    ctx->pc = 0x2CD2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD2F4u;
    // 0x2cd2f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC5E8u, 0x2CD2F4u, 0x2CD2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD2FCu;
label_2cd2fc:
    // 0x2cd2fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2cd2fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cd300:
    // 0x2cd300: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cd300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd304: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cd304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd308: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD308u;
        // 0x2cd30c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD310u;
}
