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

// Function: func_00350700
// Address: 0x350700 - 0x3507b0
void func_00350700_0x350700(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00350700_0x350700");
#endif

    if (__builtin_expect(ctx->pc != 0x350700u, 0)) {
        switch (ctx->pc) {
            case 0x350734u: goto label_350734;
            case 0x350744u: goto label_350744;
            case 0x350760u: goto label_350760;
            case 0x350778u: goto label_350778;
            case 0x350780u: goto label_350780;
            case 0x35078cu: goto label_35078c;
            case 0x350794u: goto label_350794;
            default: break;
        }
    }


    // 0x350700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x350704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x350704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x350708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x350708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35070c: 0x80d41c6  j           func_350718
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35070Cu;
    // 0x350710: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350718u;
    goto label_350718;
    // 0x350714: 0x0  nop
    // NOP
label_350718:
    // 0x350718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35071c: 0x24050005  addiu       $a1, $zero, 0x5
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x350720: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x350720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x350724: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x350724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x350728: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x350728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35072c: 0xc0d6872  jal         func_35A1C8
    SET_GPR_U32(ctx, 31, 0x350734u);
    ctx->pc = 0x350730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35072Cu;
    // 0x350730: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &GetArrayElemA0C_35A1C8_0x35a1c8, 0x35a1c8u, 0x350734u)) {
        return;
    }
label_350734:
    // 0x350734: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x350734u;
    {
        const bool branch_taken_0x350734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350734u;
        // 0x350738: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350734) {
            ctx->pc = 0x350798u;
            goto label_350798;
        }
    }
    // 0x35073c: 0xc0d4230  jal         func_3508C0
    ctx->pc = 0x35073Cu;
    SET_GPR_U32(ctx, 31, 0x350744u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_003508C0_0x3508c0, 0x3508c0u, 0x350744u)) {
        return;
    }
label_350744:
    // 0x350744: 0x24030001  addiu       $v1, $zero, 0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x350748: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x350748u;
    {
        const bool branch_taken_0x350748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x35074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350748u;
        // 0x35074c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350748) {
            ctx->pc = 0x350758u;
            goto label_350758;
        }
    }
    // 0x350750: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x350750u;
    {
        const bool branch_taken_0x350750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350750u;
        // 0x350754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350750) {
            ctx->pc = 0x350798u;
            goto label_350798;
        }
    }
label_350758:
    // 0x350758: 0xc0d41ec  jal         func_3507B0
    ctx->pc = 0x350758u;
    SET_GPR_U32(ctx, 31, 0x350760u);
    if (!runtime->callDirectStatic(rdram, ctx, &sfmpv_SetCondY16_0x3507b0, 0x3507b0u, 0x350760u)) {
        return;
    }
label_350760:
    // 0x350760: 0x24030002  addiu       $v1, $zero, 0x2
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x350764: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x350764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x350768: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x350768u;
    {
        const bool branch_taken_0x350768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x35076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350768u;
        // 0x35076c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350768) {
            ctx->pc = 0x350778u;
            goto label_350778;
        }
    }
    // 0x350770: 0xc0d4208  jal         func_350820
    ctx->pc = 0x350770u;
    SET_GPR_U32(ctx, 31, 0x350778u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_00350820_0x350820, 0x350820u, 0x350778u)) {
        return;
    }
label_350778:
    // 0x350778: 0xc0d431e  jal         func_350C78
    SET_GPR_U32(ctx, 31, 0x350780u);
    ctx->pc = 0x35077Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350778u;
    // 0x35077c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00350C78_0x350c78, 0x350c78u, 0x350780u)) {
        return;
    }
label_350780:
    // 0x350780: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350784: 0xc0d4236  jal         func_3508D8
    SET_GPR_U32(ctx, 31, 0x35078Cu);
    ctx->pc = 0x350788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350784u;
    // 0x350788: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_003508D8_0x3508d8, 0x3508d8u, 0x35078cu)) {
        return;
    }
label_35078c:
    // 0x35078c: 0xc0d42d8  jal         func_350B60
    SET_GPR_U32(ctx, 31, 0x350794u);
    ctx->pc = 0x350790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35078Cu;
    // 0x350790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00350B60_0x350b60, 0x350b60u, 0x350794u)) {
        return;
    }
label_350794:
    // 0x350794: 0x200102d  daddu       $v0, $s0, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_350798:
    // 0x350798: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x350798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35079c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35079cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3507a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3507a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3507a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3507A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3507A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3507A4u;
        // 0x3507a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3507A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x3507ac: 0x0  nop
    // NOP
    ctx->pc = 0x3507b0u;
}