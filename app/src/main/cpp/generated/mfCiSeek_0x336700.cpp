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

// Function: mfCiSeek
// Address: 0x336700 - 0x3367c0
void mfCiSeek_0x336700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mfCiSeek_0x336700");
#endif

    switch (ctx->pc) {
        case 0x336730u: goto label_336730;
        case 0x336740u: goto label_336740;
        case 0x3367a0u: goto label_3367a0;
        default: break;
    }

    ctx->pc = 0x336700u;

    // 0x336700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x336700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x336704: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x336704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x336708: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x336708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33670c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33670cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x336710: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x336710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336714: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x336714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x336718: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x336718u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33671c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33671Cu;
    {
        const bool branch_taken_0x33671c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x336720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33671Cu;
        // 0x336720: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33671c) {
            ctx->pc = 0x336738u;
            goto label_336738;
        }
    }
    ctx->pc = 0x336724u;
    // 0x336724: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x336724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x336728: 0xc0cd8cc  jal         func_336330
    ctx->pc = 0x336728u;
    SET_GPR_U32(ctx, 31, 0x336730u);
    ctx->pc = 0x33672Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336728u;
    // 0x33672c: 0x24a55110  addiu       $a1, $a1, 0x5110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336330u, 0x336728u, 0x336730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336730u;
label_336730:
    // 0x336730: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x336730u;
    {
        const bool branch_taken_0x336730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336730u;
        // 0x336734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336730) {
            ctx->pc = 0x3367A4u;
            goto label_3367a4;
        }
    }
    ctx->pc = 0x336738u;
label_336738:
    // 0x336738: 0xc0cd8ba  jal         func_3362E8
    ctx->pc = 0x336738u;
    SET_GPR_U32(ctx, 31, 0x336740u);
    ctx->pc = 0x3362E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3362E8u, 0x336738u, 0x336740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336740u;
label_336740:
    // 0x336740: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x336740u;
    {
        const bool branch_taken_0x336740 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x336744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336740u;
        // 0x336744: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336740) {
            ctx->pc = 0x336750u;
            goto label_336750;
        }
    }
    ctx->pc = 0x336748u;
    // 0x336748: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x336748u;
    {
        const bool branch_taken_0x336748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336748u;
        // 0x33674c: 0xae120010  sw          $s2, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336748) {
            ctx->pc = 0x336780u;
            goto label_336780;
        }
    }
    ctx->pc = 0x336750u;
label_336750:
    // 0x336750: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x336750u;
    {
        const bool branch_taken_0x336750 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x336754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336750u;
        // 0x336754: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336750) {
            ctx->pc = 0x336768u;
            goto label_336768;
        }
    }
    ctx->pc = 0x336758u;
    // 0x336758: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x336758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x33675c: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x33675cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x336760: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x336760u;
    {
        const bool branch_taken_0x336760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336760u;
        // 0x336764: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336760) {
            ctx->pc = 0x336784u;
            goto label_336784;
        }
    }
    ctx->pc = 0x336768u;
label_336768:
    // 0x336768: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x336768u;
    {
        const bool branch_taken_0x336768 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x33676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336768u;
        // 0x33676c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336768) {
            ctx->pc = 0x336784u;
            goto label_336784;
        }
    }
    ctx->pc = 0x336770u;
    // 0x336770: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x336770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x336774: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x336774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x336778: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x336778u;
    {
        const bool branch_taken_0x336778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336778u;
        // 0x33677c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336778) {
            ctx->pc = 0x336784u;
            goto label_336784;
        }
    }
    ctx->pc = 0x336780u;
label_336780:
    // 0x336780: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x336780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_336784:
    // 0x336784: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x336784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x336788: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x336788u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x33678c: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x33678cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x336790: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x336790u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x336794: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x336794u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x336798: 0xc0cd8c0  jal         func_336300
    ctx->pc = 0x336798u;
    SET_GPR_U32(ctx, 31, 0x3367A0u);
    ctx->pc = 0x33679Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336798u;
    // 0x33679c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336300u, 0x336798u, 0x3367A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3367A0u;
label_3367a0:
    // 0x3367a0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3367a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3367a4:
    // 0x3367a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3367a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3367a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3367a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3367ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3367acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3367b0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3367b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3367b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3367B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3367B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3367B4u;
        // 0x3367b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3367B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3367BCu;
    // 0x3367bc: 0x0  nop
    ctx->pc = 0x3367bcu;
    // NOP
    ctx->pc = 0x3367c0u;
}
