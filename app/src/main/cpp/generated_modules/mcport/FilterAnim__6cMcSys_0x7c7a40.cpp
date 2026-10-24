#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: FilterAnim__6cMcSys
// Address: 0x7c7a40 - 0x7c7ae0
void FilterAnim__6cMcSys_0x7c7a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FilterAnim__6cMcSys_0x7c7a40");
#endif

    switch (ctx->pc) {
        case 0x7c7a74u: goto label_7c7a74;
        case 0x7c7ac4u: goto label_7c7ac4;
        default: break;
    }

    ctx->pc = 0x7c7a40u;

    // 0x7c7a40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7c7a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7c7a44: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x7c7a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x7c7a48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7c7a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7c7a4c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7c7a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7c7a50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c7a50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7a54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c7a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c7a58: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x7c7a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x7c7a5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7c7a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7c7a60: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x7C7A60u;
    {
        const bool branch_taken_0x7c7a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7A60u;
        // 0x7c7a64: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7a60) {
            ctx->pc = 0x7C7AC8u;
            goto label_7c7ac8;
        }
    }
    ctx->pc = 0x7C7A68u;
    // 0x7c7a68: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x7c7a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x7c7a6c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x7C7A6Cu;
    SET_GPR_U32(ctx, 31, 0x7C7A74u);
    ctx->pc = 0x7C7A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7A6Cu;
    // 0x7c7a70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x7C7A6Cu, 0x7C7A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7A74u;
label_7c7a74:
    // 0x7c7a74: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x7c7a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x7c7a78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7c7a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7a7c: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x7c7a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
    // 0x7c7a80: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x7c7a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x7c7a84: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C7A84u;
    {
        const bool branch_taken_0x7c7a84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7A84u;
        // 0x7c7a88: 0x9050004f  lbu         $s0, 0x4F($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 79)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7a84) {
            ctx->pc = 0x7C7AA0u;
            goto label_7c7aa0;
        }
    }
    ctx->pc = 0x7C7A8Cu;
    // 0x7c7a8c: 0x26100003  addiu       $s0, $s0, 0x3
    ctx->pc = 0x7c7a8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x7c7a90: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x7c7a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x7c7a94: 0x2a020013  slti        $v0, $s0, 0x13
    ctx->pc = 0x7c7a94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x7c7a98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x7C7A98u;
    {
        const bool branch_taken_0x7c7a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7A98u;
        // 0x7c7a9c: 0x62800a  movz        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7a98) {
            ctx->pc = 0x7C7AB8u;
            goto label_7c7ab8;
        }
    }
    ctx->pc = 0x7C7AA0u;
label_7c7aa0:
    // 0x7c7aa0: 0x2602fffd  addiu       $v0, $s0, -0x3
    ctx->pc = 0x7c7aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
    // 0x7c7aa4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x7c7aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c7aa8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x7c7aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x7c7aac: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x7c7aacu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x7c7ab0: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x7c7ab0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x7c7ab4: 0x3800a  movz        $s0, $zero, $v1
    ctx->pc = 0x7c7ab4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_7c7ab8:
    // 0x7c7ab8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x7c7ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7abc: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x7C7ABCu;
    SET_GPR_U32(ctx, 31, 0x7C7AC4u);
    ctx->pc = 0x7C7AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7ABCu;
    // 0x7c7ac0: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x7C7ABCu, 0x7C7AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7AC4u;
label_7c7ac4:
    // 0x7c7ac4: 0xa050004f  sb          $s0, 0x4F($v0)
    ctx->pc = 0x7c7ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 79), (uint8_t)GPR_U32(ctx, 16));
label_7c7ac8:
    // 0x7c7ac8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7c7ac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c7acc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7c7accu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c7ad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c7ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c7ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x7C7AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C7AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7AD4u;
        // 0x7c7ad8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C7AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C7ADCu;
    // 0x7c7adc: 0x0  nop
    ctx->pc = 0x7c7adcu;
    // NOP
    ctx->pc = 0x7c7ae0u;
}
} // namespace gh_mcport
