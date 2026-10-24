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

// Function: cEmManage_findEma2Near
// Address: 0x292dc8 - 0x292e80
void cEmManage_findEma2Near_0x292dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_findEma2Near_0x292dc8");
#endif

    switch (ctx->pc) {
        case 0x292e00u: goto label_292e00;
        case 0x292e14u: goto label_292e14;
        case 0x292e34u: goto label_292e34;
        default: break;
    }

    ctx->pc = 0x292dc8u;

    // 0x292dc8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x292dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x292dcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x292dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x292dd0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x292dd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x292dd4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x292dd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292dd8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x292dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x292ddc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x292ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x292de0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x292de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x292de4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x292de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x292de8: 0x8c910500  lw          $s1, 0x500($a0)
    ctx->pc = 0x292de8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1280)));
    // 0x292dec: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x292DECu;
    {
        const bool branch_taken_0x292dec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x292DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292DECu;
        // 0x292df0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292dec) {
            ctx->pc = 0x292E58u;
            goto label_292e58;
        }
    }
    ctx->pc = 0x292DF4u;
    // 0x292df4: 0x3c130045  lui         $s3, 0x45
    ctx->pc = 0x292df4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)69 << 16));
    // 0x292df8: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x292df8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x292dfc: 0x0  nop
    ctx->pc = 0x292dfcu;
    // NOP
label_292e00:
    // 0x292e00: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x292E00u;
    {
        const bool branch_taken_0x292e00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x292e00) {
            ctx->pc = 0x292E04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292E00u;
            // 0x292e04: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292E50u;
            goto label_292e50;
        }
    }
    ctx->pc = 0x292E08u;
    // 0x292e08: 0x8e0504ac  lw          $a1, 0x4AC($s0)
    ctx->pc = 0x292e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1196)));
    // 0x292e0c: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x292E0Cu;
    SET_GPR_U32(ctx, 31, 0x292E14u);
    ctx->pc = 0x292E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292E0Cu;
    // 0x292e10: 0x2664a7a8  addiu       $a0, $s3, -0x5858 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294944680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x292E0Cu, 0x292E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292E14u;
label_292e14:
    // 0x292e14: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x292E14u;
    {
        const bool branch_taken_0x292e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292e14) {
            ctx->pc = 0x292E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292E14u;
            // 0x292e18: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292E50u;
            goto label_292e50;
        }
    }
    ctx->pc = 0x292E1Cu;
    // 0x292e1c: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x292e1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x292e20: 0x5840000b  blezl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x292E20u;
    {
        const bool branch_taken_0x292e20 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x292e20) {
            ctx->pc = 0x292E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292E20u;
            // 0x292e24: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292E50u;
            goto label_292e50;
        }
    }
    ctx->pc = 0x292E28u;
    // 0x292e28: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x292e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x292e2c: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x292E2Cu;
    SET_GPR_U32(ctx, 31, 0x292E34u);
    ctx->pc = 0x292E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292E2Cu;
    // 0x292e30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x292E2Cu, 0x292E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292E34u;
label_292e34:
    // 0x292e34: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x292e34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x292e38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x292e38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x292e3c: 0x0  nop
    ctx->pc = 0x292e3cu;
    // NOP
    // 0x292e40: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x292E40u;
    {
        const bool branch_taken_0x292e40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x292e40) {
            ctx->pc = 0x292E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292E40u;
            // 0x292e44: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292E50u;
            goto label_292e50;
        }
    }
    ctx->pc = 0x292E48u;
    // 0x292e48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x292E48u;
    {
        const bool branch_taken_0x292e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E48u;
        // 0x292e4c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e48) {
            ctx->pc = 0x292E5Cu;
            goto label_292e5c;
        }
    }
    ctx->pc = 0x292E50u;
label_292e50:
    // 0x292e50: 0x5620ffeb  bnel        $s1, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x292E50u;
    {
        const bool branch_taken_0x292e50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x292e50) {
            ctx->pc = 0x292E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292E50u;
            // 0x292e54: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_292e00;
        }
    }
    ctx->pc = 0x292E58u;
label_292e58:
    // 0x292e58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x292e58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_292e5c:
    // 0x292e5c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x292e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x292e60: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x292e60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x292e64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x292e64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292e68: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x292e68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292e6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x292e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292e70: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x292e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x292e74: 0x3e00008  jr          $ra
    ctx->pc = 0x292E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E74u;
        // 0x292e78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292E7Cu;
    // 0x292e7c: 0x0  nop
    ctx->pc = 0x292e7cu;
    // NOP
    ctx->pc = 0x292e80u;
}
