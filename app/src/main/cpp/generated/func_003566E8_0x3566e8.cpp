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

// Function: func_003566E8
// Address: 0x3566e8 - 0x356790
void func_003566E8_0x3566e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003566E8_0x3566e8");
#endif

    switch (ctx->pc) {
        case 0x356720u: goto label_356720;
        case 0x356730u: goto label_356730;
        case 0x356760u: goto label_356760;
        case 0x356770u: goto label_356770;
        default: break;
    }

    ctx->pc = 0x3566e8u;

    // 0x3566e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3566e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3566ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3566ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3566f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3566f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3566f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3566f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3566f8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3566f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3566fc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3566fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x356700: 0x8cc21fc0  lw          $v0, 0x1FC0($a2)
    ctx->pc = 0x356700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8128)));
    // 0x356704: 0x24511128  addiu       $s1, $v0, 0x1128
    ctx->pc = 0x356704u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4392));
    // 0x356708: 0x24441150  addiu       $a0, $v0, 0x1150
    ctx->pc = 0x356708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
    // 0x35670c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x35670cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x356710: 0x14720005  bne         $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x356710u;
    {
        const bool branch_taken_0x356710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x356714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356710u;
        // 0x356714: 0x24501198  addiu       $s0, $v0, 0x1198 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356710) {
            ctx->pc = 0x356728u;
            goto label_356728;
        }
    }
    ctx->pc = 0x356718u;
    // 0x356718: 0xc0e6a8e  jal         func_39AA38
    ctx->pc = 0x356718u;
    SET_GPR_U32(ctx, 31, 0x356720u);
    ctx->pc = 0x39AA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AA38u, 0x356718u, 0x356720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356720u;
label_356720:
    // 0x356720: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x356720u;
    {
        const bool branch_taken_0x356720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356720u;
        // 0x356724: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356720) {
            ctx->pc = 0x356774u;
            goto label_356774;
        }
    }
    ctx->pc = 0x356728u;
label_356728:
    // 0x356728: 0xc0d5722  jal         func_355C88
    ctx->pc = 0x356728u;
    SET_GPR_U32(ctx, 31, 0x356730u);
    ctx->pc = 0x35672Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356728u;
    // 0x35672c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355C88u, 0x356728u, 0x356730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356730u;
label_356730:
    // 0x356730: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x356730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x356734: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x356734u;
    {
        const bool branch_taken_0x356734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x356738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356734u;
        // 0x356738: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356734) {
            ctx->pc = 0x356774u;
            goto label_356774;
        }
    }
    ctx->pc = 0x35673Cu;
    // 0x35673c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x35673cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x356740: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x356740u;
    {
        const bool branch_taken_0x356740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x356744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356740u;
        // 0x356744: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356740) {
            ctx->pc = 0x356774u;
            goto label_356774;
        }
    }
    ctx->pc = 0x356748u;
    // 0x356748: 0xae320018  sw          $s2, 0x18($s1)
    ctx->pc = 0x356748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 18));
    // 0x35674c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x35674cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x356750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x356750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356754: 0x24a59748  addiu       $a1, $a1, -0x68B8
    ctx->pc = 0x356754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940488));
    // 0x356758: 0xc0d5992  jal         func_356648
    ctx->pc = 0x356758u;
    SET_GPR_U32(ctx, 31, 0x356760u);
    ctx->pc = 0x35675Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356758u;
    // 0x35675c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356648u, 0x356758u, 0x356760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356760u;
label_356760:
    // 0x356760: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x356760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x356764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x356764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356768: 0xc0d5722  jal         func_355C88
    ctx->pc = 0x356768u;
    SET_GPR_U32(ctx, 31, 0x356770u);
    ctx->pc = 0x35676Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356768u;
    // 0x35676c: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355C88u, 0x356768u, 0x356770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356770u;
label_356770:
    // 0x356770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_356774:
    // 0x356774: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x356774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356778: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x356778u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35677c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35677cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x356780: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x356780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x356784: 0x3e00008  jr          $ra
    ctx->pc = 0x356784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356784u;
        // 0x356788: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35678Cu;
    // 0x35678c: 0x0  nop
    ctx->pc = 0x35678cu;
    // NOP
    ctx->pc = 0x356790u;
}
