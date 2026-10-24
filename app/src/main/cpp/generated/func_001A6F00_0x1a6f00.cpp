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

// Function: func_001A6F00
// Address: 0x1a6f00 - 0x1a6fb0
void func_001A6F00_0x1a6f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A6F00_0x1a6f00");
#endif

    switch (ctx->pc) {
        case 0x1a6f20u: goto label_1a6f20;
        case 0x1a6f28u: goto label_1a6f28;
        case 0x1a6f30u: goto label_1a6f30;
        case 0x1a6f50u: goto label_1a6f50;
        case 0x1a6f5cu: goto label_1a6f5c;
        case 0x1a6f70u: goto label_1a6f70;
        case 0x1a6f8cu: goto label_1a6f8c;
        default: break;
    }

    ctx->pc = 0x1a6f00u;

    // 0x1a6f00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a6f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a6f04: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a6f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a6f08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a6f08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6f0c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1a6f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1a6f10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a6f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a6f14: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x1a6f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x1a6f18: 0xc0c28fe  jal         func_30A3F8
    ctx->pc = 0x1A6F18u;
    SET_GPR_U32(ctx, 31, 0x1A6F20u);
    ctx->pc = 0x1A6F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6F18u;
    // 0x1a6f1c: 0x26240600  addiu       $a0, $s1, 0x600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A3F8u, 0x1A6F18u, 0x1A6F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6F20u;
label_1a6f20:
    // 0x1a6f20: 0xc069bec  jal         func_1A6FB0
    ctx->pc = 0x1A6F20u;
    SET_GPR_U32(ctx, 31, 0x1A6F28u);
    ctx->pc = 0x1A6F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6F20u;
    // 0x1a6f24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB0u, 0x1A6F20u, 0x1A6F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6F28u;
label_1a6f28:
    // 0x1a6f28: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1A6F28u;
    SET_GPR_U32(ctx, 31, 0x1A6F30u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1A6F28u, 0x1A6F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6F30u;
label_1a6f30:
    // 0x1a6f30: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x1a6f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1a6f34: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1a6f34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a6f38: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1a6f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a6f3c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a6f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1a6f40: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a6f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a6f44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6f48: 0xc069c36  jal         func_1A70D8
    ctx->pc = 0x1A6F48u;
    SET_GPR_U32(ctx, 31, 0x1A6F50u);
    ctx->pc = 0x1A6F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6F48u;
    // 0x1a6f4c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A70D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A70D8u, 0x1A6F48u, 0x1A6F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6F50u;
label_1a6f50:
    // 0x1a6f50: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1a6f50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1a6f54: 0xc0a4c4c  jal         func_293130
    ctx->pc = 0x1A6F54u;
    SET_GPR_U32(ctx, 31, 0x1A6F5Cu);
    ctx->pc = 0x1A6F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6F54u;
    // 0x1a6f58: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293130u, 0x1A6F54u, 0x1A6F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6F5Cu;
label_1a6f5c:
    // 0x1a6f5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a6f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6f60: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1A6F60u;
    {
        const bool branch_taken_0x1a6f60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6f60) {
            ctx->pc = 0x1A6F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6F60u;
            // 0x1a6f64: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6F9Cu;
            goto label_1a6f9c;
        }
    }
    ctx->pc = 0x1A6F68u;
    // 0x1a6f68: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a6f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a6f6c: 0x0  nop
    ctx->pc = 0x1a6f6cu;
    // NOP
label_1a6f70:
    // 0x1a6f70: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A6F70u;
    {
        const bool branch_taken_0x1a6f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6f70) {
            ctx->pc = 0x1A6F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6F70u;
            // 0x1a6f74: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6F90u;
            goto label_1a6f90;
        }
    }
    ctx->pc = 0x1A6F78u;
    // 0x1a6f78: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x1a6f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1a6f7c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a6f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1a6f80: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a6f80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a6f84: 0xc069c36  jal         func_1A70D8
    ctx->pc = 0x1A6F84u;
    SET_GPR_U32(ctx, 31, 0x1A6F8Cu);
    ctx->pc = 0x1A6F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6F84u;
    // 0x1a6f88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A70D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A70D8u, 0x1A6F84u, 0x1A6F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6F8Cu;
label_1a6f8c:
    // 0x1a6f8c: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x1a6f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a6f90:
    // 0x1a6f90: 0x5600fff7  bnel        $s0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A6F90u;
    {
        const bool branch_taken_0x1a6f90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6f90) {
            ctx->pc = 0x1A6F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6F90u;
            // 0x1a6f94: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6f70;
        }
    }
    ctx->pc = 0x1A6F98u;
    // 0x1a6f98: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1a6f98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a6f9c:
    // 0x1a6f9c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a6f9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6fa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a6fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FA4u;
        // 0x1a6fa8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6FACu;
    // 0x1a6fac: 0x0  nop
    ctx->pc = 0x1a6facu;
    // NOP
    ctx->pc = 0x1a6fb0u;
}
