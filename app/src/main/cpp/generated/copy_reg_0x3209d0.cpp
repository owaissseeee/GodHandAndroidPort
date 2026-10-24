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

// Function: copy_reg
// Address: 0x3209d0 - 0x320a50
void copy_reg_0x3209d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("copy_reg_0x3209d0");
#endif

    switch (ctx->pc) {
        case 0x3209f4u: goto label_3209f4;
        case 0x320a08u: goto label_320a08;
        case 0x320a34u: goto label_320a34;
        default: break;
    }

    ctx->pc = 0x3209d0u;

    // 0x3209d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3209d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3209d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3209d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3209d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3209d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3209dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3209dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3209e0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3209e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3209e4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3209e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3209e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3209e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3209ec: 0xc0c8252  jal         func_320948
    ctx->pc = 0x3209ECu;
    SET_GPR_U32(ctx, 31, 0x3209F4u);
    ctx->pc = 0x3209F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3209ECu;
    // 0x3209f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320948u, 0x3209ECu, 0x3209F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3209F4u;
label_3209f4:
    // 0x3209f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3209f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3209f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3209f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3209fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3209fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320a00: 0xc0c8252  jal         func_320948
    ctx->pc = 0x320A00u;
    SET_GPR_U32(ctx, 31, 0x320A08u);
    ctx->pc = 0x320A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320A00u;
    // 0x320a04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320948u, 0x320A00u, 0x320A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320A08u;
label_320a08:
    // 0x320a08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x320a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320a0c: 0x2a22001f  slti        $v0, $s1, 0x1F
    ctx->pc = 0x320a0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x320a10: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x320A10u;
    {
        const bool branch_taken_0x320a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x320a10) {
            ctx->pc = 0x320A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320A10u;
            // 0x320a14: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320A2Cu;
            goto label_320a2c;
        }
    }
    ctx->pc = 0x320A18u;
    // 0x320a18: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x320a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x320a1c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x320a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x320a20: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x320a20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x320a24: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x320a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x320a28: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x320a28u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_320a2c:
    // 0x320a2c: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x320A2Cu;
    SET_GPR_U32(ctx, 31, 0x320A34u);
    ctx->pc = 0x320A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320A2Cu;
    // 0x320a30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x320A2Cu, 0x320A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320A34u;
label_320a34:
    // 0x320a34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x320a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x320a38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x320a38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x320a3c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x320a3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320a40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x320a40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320a44: 0x3e00008  jr          $ra
    ctx->pc = 0x320A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A44u;
        // 0x320a48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320A4Cu;
    // 0x320a4c: 0x0  nop
    ctx->pc = 0x320a4cu;
    // NOP
    ctx->pc = 0x320a50u;
}
