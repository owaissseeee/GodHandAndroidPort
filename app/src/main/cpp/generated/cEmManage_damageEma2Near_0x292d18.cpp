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

// Function: cEmManage_damageEma2Near
// Address: 0x292d18 - 0x292dc8
void cEmManage_damageEma2Near_0x292d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_damageEma2Near_0x292d18");
#endif

    switch (ctx->pc) {
        case 0x292d50u: goto label_292d50;
        case 0x292d64u: goto label_292d64;
        case 0x292d84u: goto label_292d84;
        case 0x292d9cu: goto label_292d9c;
        default: break;
    }

    ctx->pc = 0x292d18u;

    // 0x292d18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x292d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x292d1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x292d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x292d20: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x292d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x292d24: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x292d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x292d28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x292d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x292d2c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x292d2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x292d30: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x292d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x292d34: 0x8c910500  lw          $s1, 0x500($a0)
    ctx->pc = 0x292d34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1280)));
    // 0x292d38: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x292D38u;
    {
        const bool branch_taken_0x292d38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x292D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D38u;
        // 0x292d3c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292d38) {
            ctx->pc = 0x292DA8u;
            goto label_292da8;
        }
    }
    ctx->pc = 0x292D40u;
    // 0x292d40: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x292d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x292d44: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x292d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x292d48: 0x3c130045  lui         $s3, 0x45
    ctx->pc = 0x292d48u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)69 << 16));
    // 0x292d4c: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x292d4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_292d50:
    // 0x292d50: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x292D50u;
    {
        const bool branch_taken_0x292d50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x292d50) {
            ctx->pc = 0x292D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292D50u;
            // 0x292d54: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292DA0u;
            goto label_292da0;
        }
    }
    ctx->pc = 0x292D58u;
    // 0x292d58: 0x8e0504ac  lw          $a1, 0x4AC($s0)
    ctx->pc = 0x292d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1196)));
    // 0x292d5c: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x292D5Cu;
    SET_GPR_U32(ctx, 31, 0x292D64u);
    ctx->pc = 0x292D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292D5Cu;
    // 0x292d60: 0x2664a7a8  addiu       $a0, $s3, -0x5858 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294944680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x292D5Cu, 0x292D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292D64u;
label_292d64:
    // 0x292d64: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x292D64u;
    {
        const bool branch_taken_0x292d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292d64) {
            ctx->pc = 0x292D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292D64u;
            // 0x292d68: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292DA0u;
            goto label_292da0;
        }
    }
    ctx->pc = 0x292D6Cu;
    // 0x292d6c: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x292d6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x292d70: 0x5840000b  blezl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x292D70u;
    {
        const bool branch_taken_0x292d70 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x292d70) {
            ctx->pc = 0x292D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292D70u;
            // 0x292d74: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292DA0u;
            goto label_292da0;
        }
    }
    ctx->pc = 0x292D78u;
    // 0x292d78: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x292d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x292d7c: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x292D7Cu;
    SET_GPR_U32(ctx, 31, 0x292D84u);
    ctx->pc = 0x292D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292D7Cu;
    // 0x292d80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x292D7Cu, 0x292D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292D84u;
label_292d84:
    // 0x292d84: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x292d84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292d88: 0x0  nop
    ctx->pc = 0x292d88u;
    // NOP
    // 0x292d8c: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x292D8Cu;
    {
        const bool branch_taken_0x292d8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x292d8c) {
            ctx->pc = 0x292D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292D8Cu;
            // 0x292d90: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292DA0u;
            goto label_292da0;
        }
    }
    ctx->pc = 0x292D94u;
    // 0x292d94: 0xc0a23c0  jal         func_288F00
    ctx->pc = 0x292D94u;
    SET_GPR_U32(ctx, 31, 0x292D9Cu);
    ctx->pc = 0x292D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292D94u;
    // 0x292d98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288F00u, 0x292D94u, 0x292D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292D9Cu;
label_292d9c:
    // 0x292d9c: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x292d9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_292da0:
    // 0x292da0: 0x5620ffeb  bnel        $s1, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x292DA0u;
    {
        const bool branch_taken_0x292da0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x292da0) {
            ctx->pc = 0x292DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292DA0u;
            // 0x292da4: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_292d50;
        }
    }
    ctx->pc = 0x292DA8u;
label_292da8:
    // 0x292da8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x292da8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x292dac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x292dacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x292db0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x292db0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292db4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x292db4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292db8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x292db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292dbc: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x292dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x292dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x292DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292DC0u;
        // 0x292dc4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292DC8u;
}
