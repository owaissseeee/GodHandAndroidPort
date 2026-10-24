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

// Function: SetSlotEntry_376260
// Address: 0x376260 - 0x3762d8
void SetSlotEntry_376260_0x376260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetSlotEntry_376260_0x376260");
#endif

    switch (ctx->pc) {
        case 0x376294u: goto label_376294;
        case 0x3762b8u: goto label_3762b8;
        default: break;
    }

    ctx->pc = 0x376260u;

    // 0x376260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x376260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x376264: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x376264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x376268: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x376268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37626c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37626cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x376270: 0x94a30006  lhu         $v1, 0x6($a1)
    ctx->pc = 0x376270u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x376274: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x376274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x376278: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x376278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37627c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x37627cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x376280: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x376280u;
    {
        const bool branch_taken_0x376280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376280u;
        // 0x376284: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376280) {
            ctx->pc = 0x37629Cu;
            goto label_37629c;
        }
    }
    ctx->pc = 0x376288u;
    // 0x376288: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x376288u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x37628c: 0xc0ddab8  jal         func_376AE0
    ctx->pc = 0x37628Cu;
    SET_GPR_U32(ctx, 31, 0x376294u);
    ctx->pc = 0x376290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37628Cu;
    // 0x376290: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376AE0u, 0x37628Cu, 0x376294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376294u;
label_376294:
    // 0x376294: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x376294u;
    {
        const bool branch_taken_0x376294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x376298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376294u;
        // 0x376298: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376294) {
            ctx->pc = 0x3762C8u;
            goto label_3762c8;
        }
    }
    ctx->pc = 0x37629Cu;
label_37629c:
    // 0x37629c: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x37629cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3762a0: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x3762a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x3762a4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3762a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3762a8: 0xa602001a  sh          $v0, 0x1A($s0)
    ctx->pc = 0x3762a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x3762ac: 0x94a30006  lhu         $v1, 0x6($a1)
    ctx->pc = 0x3762acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x3762b0: 0xc0de008  jal         func_378020
    ctx->pc = 0x3762B0u;
    SET_GPR_U32(ctx, 31, 0x3762B8u);
    ctx->pc = 0x3762B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3762B0u;
    // 0x3762b4: 0xa603001e  sh          $v1, 0x1E($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378020u, 0x3762B0u, 0x3762B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3762B8u;
label_3762b8:
    // 0x3762b8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x3762b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3762bc: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3762bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x3762c0: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x3762c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3762c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3762c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3762c8:
    // 0x3762c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3762c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3762cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3762CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3762D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3762CCu;
        // 0x3762d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3762CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3762D4u;
    // 0x3762d4: 0x0  nop
    ctx->pc = 0x3762d4u;
    // NOP
    ctx->pc = 0x3762d8u;
}
