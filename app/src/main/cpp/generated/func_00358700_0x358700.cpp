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

// Function: func_00358700
// Address: 0x358700 - 0x358768
void func_00358700_0x358700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00358700_0x358700");
#endif

    switch (ctx->pc) {
        case 0x358700u: goto label_358700;
        case 0x358704u: goto label_358704;
        case 0x358708u: goto label_358708;
        case 0x35870cu: goto label_35870c;
        case 0x358710u: goto label_358710;
        case 0x358714u: goto label_358714;
        case 0x358718u: goto label_358718;
        case 0x35871cu: goto label_35871c;
        case 0x358720u: goto label_358720;
        case 0x358724u: goto label_358724;
        case 0x358728u: goto label_358728;
        case 0x35872cu: goto label_35872c;
        case 0x358730u: goto label_358730;
        case 0x358734u: goto label_358734;
        case 0x358738u: goto label_358738;
        case 0x35873cu: goto label_35873c;
        case 0x358740u: goto label_358740;
        case 0x358744u: goto label_358744;
        case 0x358748u: goto label_358748;
        case 0x35874cu: goto label_35874c;
        case 0x358750u: goto label_358750;
        case 0x358754u: goto label_358754;
        case 0x358758u: goto label_358758;
        case 0x35875cu: goto label_35875c;
        case 0x358760u: goto label_358760;
        case 0x358764u: goto label_358764;
        default: break;
    }

    ctx->pc = 0x358700u;

label_358700:
    // 0x358700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x358700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_358704:
    // 0x358704: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x358704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_358708:
    // 0x358708: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x358708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_35870c:
    // 0x35870c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35870cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_358710:
    // 0x358710: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x358710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_358714:
    // 0x358714: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x358714u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_358718:
    // 0x358718: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x358718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_35871c:
    // 0x35871c: 0x26300950  addiu       $s0, $s1, 0x950
    ctx->pc = 0x35871cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2384));
label_358720:
    // 0x358720: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x358720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_358724:
    // 0x358724: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x358724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_358728:
    // 0x358728: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x358728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_35872c:
    // 0x35872c: 0xc0d6872  jal         func_35A1C8
label_358730:
    if (ctx->pc == 0x358730u) {
        ctx->pc = 0x358730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35872Cu;
        // 0x358730: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358734u;
        goto label_358734;
    }
    ctx->pc = 0x35872Cu;
    SET_GPR_U32(ctx, 31, 0x358734u);
    ctx->pc = 0x358730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35872Cu;
    // 0x358730: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x35872Cu, 0x358734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358734u;
label_358734:
    // 0x358734: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x358734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_358738:
    // 0x358738: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x358738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35873c:
    // 0x35873c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_358740:
    if (ctx->pc == 0x358740u) {
        ctx->pc = 0x358740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35873Cu;
        // 0x358740: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358744u;
        goto label_358744;
    }
    ctx->pc = 0x35873Cu;
    {
        const bool branch_taken_0x35873c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x358740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35873Cu;
        // 0x358740: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35873c) {
            ctx->pc = 0x35874Cu;
            goto label_35874c;
        }
    }
    ctx->pc = 0x358744u;
label_358744:
    // 0x358744: 0x40f809  jalr        $v0
label_358748:
    if (ctx->pc == 0x358748u) {
        ctx->pc = 0x35874Cu;
        goto label_35874c;
    }
    ctx->pc = 0x358744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35874Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358744u, 0x35874Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35874Cu;
label_35874c:
    // 0x35874c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35874cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_358750:
    // 0x358750: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x358750u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_358754:
    // 0x358754: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x358754u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_358758:
    // 0x358758: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x358758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_35875c:
    // 0x35875c: 0x3e00008  jr          $ra
label_358760:
    if (ctx->pc == 0x358760u) {
        ctx->pc = 0x358760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35875Cu;
        // 0x358760: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358764u;
        goto label_358764;
    }
    ctx->pc = 0x35875Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35875Cu;
        // 0x358760: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35875Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358764u;
label_358764:
    // 0x358764: 0x0  nop
    ctx->pc = 0x358764u;
    // NOP
    ctx->pc = 0x358768u;
}
