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

// Function: ReleaseObj
// Address: 0x312708 - 0x312778
void ReleaseObj_0x312708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReleaseObj_0x312708");
#endif

    switch (ctx->pc) {
        case 0x312708u: goto label_312708;
        case 0x31270cu: goto label_31270c;
        case 0x312710u: goto label_312710;
        case 0x312714u: goto label_312714;
        case 0x312718u: goto label_312718;
        case 0x31271cu: goto label_31271c;
        case 0x312720u: goto label_312720;
        case 0x312724u: goto label_312724;
        case 0x312728u: goto label_312728;
        case 0x31272cu: goto label_31272c;
        case 0x312730u: goto label_312730;
        case 0x312734u: goto label_312734;
        case 0x312738u: goto label_312738;
        case 0x31273cu: goto label_31273c;
        case 0x312740u: goto label_312740;
        case 0x312744u: goto label_312744;
        case 0x312748u: goto label_312748;
        case 0x31274cu: goto label_31274c;
        case 0x312750u: goto label_312750;
        case 0x312754u: goto label_312754;
        case 0x312758u: goto label_312758;
        case 0x31275cu: goto label_31275c;
        case 0x312760u: goto label_312760;
        case 0x312764u: goto label_312764;
        case 0x312768u: goto label_312768;
        case 0x31276cu: goto label_31276c;
        case 0x312770u: goto label_312770;
        case 0x312774u: goto label_312774;
        default: break;
    }

    ctx->pc = 0x312708u;

label_312708:
    // 0x312708: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x312708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_31270c:
    // 0x31270c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x31270cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_312710:
    // 0x312710: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x312710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_312714:
    // 0x312714: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x312714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_312718:
    // 0x312718: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_31271c:
    if (ctx->pc == 0x31271Cu) {
        ctx->pc = 0x31271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312718u;
        // 0x31271c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312720u;
        goto label_312720;
    }
    ctx->pc = 0x312718u;
    {
        const bool branch_taken_0x312718 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312718u;
        // 0x31271c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312718) {
            ctx->pc = 0x312760u;
            goto label_312760;
        }
    }
    ctx->pc = 0x312720u;
label_312720:
    // 0x312720: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x312720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_312724:
    // 0x312724: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x312724u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
label_312728:
    // 0x312728: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
label_31272c:
    if (ctx->pc == 0x31272Cu) {
        ctx->pc = 0x31272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312728u;
        // 0x31272c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312730u;
        goto label_312730;
    }
    ctx->pc = 0x312728u;
    {
        const bool branch_taken_0x312728 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x31272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312728u;
        // 0x31272c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312728) {
            ctx->pc = 0x312760u;
            goto label_312760;
        }
    }
    ctx->pc = 0x312730u;
label_312730:
    // 0x312730: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x312730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_312734:
    // 0x312734: 0xc0b2f86  jal         func_2CBE18
label_312738:
    if (ctx->pc == 0x312738u) {
        ctx->pc = 0x312738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312734u;
        // 0x312738: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31273Cu;
        goto label_31273c;
    }
    ctx->pc = 0x312734u;
    SET_GPR_U32(ctx, 31, 0x31273Cu);
    ctx->pc = 0x312738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312734u;
    // 0x312738: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBE18u, 0x312734u, 0x31273Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31273Cu;
label_31273c:
    // 0x31273c: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x31273cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_312740:
    // 0x312740: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x312740u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_312744:
    // 0x312744: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x312744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_312748:
    // 0x312748: 0x60f809  jalr        $v1
label_31274c:
    if (ctx->pc == 0x31274Cu) {
        ctx->pc = 0x31274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312748u;
        // 0x31274c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312750u;
        goto label_312750;
    }
    ctx->pc = 0x312748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x312750u);
        ctx->pc = 0x31274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312748u;
        // 0x31274c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312748u, 0x312750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x312750u;
label_312750:
    // 0x312750: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x312750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_312754:
    // 0x312754: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x312754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_312758:
    // 0x312758: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x312758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_31275c:
    // 0x31275c: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x31275cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
label_312760:
    // 0x312760: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x312760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_312764:
    // 0x312764: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x312764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_312768:
    // 0x312768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x312768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31276c:
    // 0x31276c: 0x3e00008  jr          $ra
label_312770:
    if (ctx->pc == 0x312770u) {
        ctx->pc = 0x312770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31276Cu;
        // 0x312770: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312774u;
        goto label_312774;
    }
    ctx->pc = 0x31276Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31276Cu;
        // 0x312770: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31276Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312774u;
label_312774:
    // 0x312774: 0x0  nop
    ctx->pc = 0x312774u;
    // NOP
    ctx->pc = 0x312778u;
}
