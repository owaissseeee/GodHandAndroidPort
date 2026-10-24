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

// Function: sceDopen
// Address: 0x3b52f0 - 0x3b53b8
void sceDopen_0x3b52f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDopen_0x3b52f0");
#endif

    switch (ctx->pc) {
        case 0x3b5310u: goto label_3b5310;
        case 0x3b5328u: goto label_3b5328;
        case 0x3b5330u: goto label_3b5330;
        case 0x3b5338u: goto label_3b5338;
        case 0x3b5354u: goto label_3b5354;
        case 0x3b5368u: goto label_3b5368;
        case 0x3b537cu: goto label_3b537c;
        case 0x3b539cu: goto label_3b539c;
        default: break;
    }

    ctx->pc = 0x3b52f0u;

    // 0x3b52f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b52f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b52f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b52f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b52f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b52f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b52fc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b52fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b5300: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b5300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3b5304: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x3b5304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3b5308: 0xc0ecfb2  jal         func_3B3EC8
    ctx->pc = 0x3B5308u;
    SET_GPR_U32(ctx, 31, 0x3B5310u);
    ctx->pc = 0x3B530Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5308u;
    // 0x3b530c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EC8u, 0x3B5308u, 0x3B5310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5310u;
label_3b5310:
    // 0x3b5310: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3b5310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3b5314: 0x8c62aedc  lw          $v0, -0x5124($v1)
    ctx->pc = 0x3b5314u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAEDCu));
    // 0x3b5318: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B5318u;
    {
        const bool branch_taken_0x3b5318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b5318) {
            ctx->pc = 0x3B5328u;
            goto label_3b5328;
        }
    }
    ctx->pc = 0x3B5320u;
    // 0x3b5320: 0xc0ecfd4  jal         func_3B3F50
    ctx->pc = 0x3B5320u;
    SET_GPR_U32(ctx, 31, 0x3B5328u);
    ctx->pc = 0x3B3F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3F50u, 0x3B5320u, 0x3B5328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5328u;
label_3b5328:
    // 0x3b5328: 0xc0ecfbe  jal         func_3B3EF8
    ctx->pc = 0x3B5328u;
    SET_GPR_U32(ctx, 31, 0x3B5330u);
    ctx->pc = 0x3B3EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EF8u, 0x3B5328u, 0x3B5330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5330u;
label_3b5330:
    // 0x3b5330: 0xc0ece34  jal         func_3B38D0
    ctx->pc = 0x3B5330u;
    SET_GPR_U32(ctx, 31, 0x3B5338u);
    ctx->pc = 0x3B38D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B38D0u, 0x3B5330u, 0x3B5338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5338u;
label_3b5338:
    // 0x3b5338: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3b5338u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b533c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B533Cu;
    {
        const bool branch_taken_0x3b533c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B5340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B533Cu;
        // 0x3b5340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b533c) {
            ctx->pc = 0x3B534Cu;
            goto label_3b534c;
        }
    }
    ctx->pc = 0x3B5344u;
    // 0x3b5344: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3B5344u;
    {
        const bool branch_taken_0x3b5344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5344u;
        // 0x3b5348: 0x2402ffed  addiu       $v0, $zero, -0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967277));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5344) {
            ctx->pc = 0x3B53A0u;
            goto label_3b53a0;
        }
    }
    ctx->pc = 0x3B534Cu;
label_3b534c:
    // 0x3b534c: 0xc0ed448  jal         func_3B5120
    ctx->pc = 0x3B534Cu;
    SET_GPR_U32(ctx, 31, 0x3B5354u);
    ctx->pc = 0x3B5350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B534Cu;
    // 0x3b5350: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5120u, 0x3B534Cu, 0x3B5354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5354u;
label_3b5354:
    // 0x3b5354: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b5354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5358: 0x6210006  bgez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B5358u;
    {
        const bool branch_taken_0x3b5358 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x3B535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5358u;
        // 0x3b535c: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5358) {
            ctx->pc = 0x3B5374u;
            goto label_3b5374;
        }
    }
    ctx->pc = 0x3B5360u;
    // 0x3b5360: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x3B5360u;
    SET_GPR_U32(ctx, 31, 0x3B5368u);
    ctx->pc = 0x3B5364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5360u;
    // 0x3b5364: 0x8e04aee8  lw          $a0, -0x5118($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x3B5360u, 0x3B5368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5368u;
label_3b5368:
    // 0x3b5368: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3b5368u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x3b536c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3B536Cu;
    {
        const bool branch_taken_0x3b536c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B536Cu;
        // 0x3b5370: 0x8e04aee8  lw          $a0, -0x5118($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b536c) {
            ctx->pc = 0x3B5394u;
            goto label_3b5394;
        }
    }
    ctx->pc = 0x3B5374u;
label_3b5374:
    // 0x3b5374: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x3B5374u;
    SET_GPR_U32(ctx, 31, 0x3B537Cu);
    ctx->pc = 0x3B5378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5374u;
    // 0x3b5378: 0x8e04aee8  lw          $a0, -0x5118($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x3B5374u, 0x3B537Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B537Cu;
label_3b537c:
    // 0x3b537c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x3b537cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x3b5380: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x3b5380u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x3b5384: 0x246314c0  addiu       $v1, $v1, 0x14C0
    ctx->pc = 0x3b5384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5312));
    // 0x3b5388: 0x8e04aee8  lw          $a0, -0x5118($s0)
    ctx->pc = 0x3b5388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946536)));
    // 0x3b538c: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x3b538cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x3b5390: 0x38903  sra         $s1, $v1, 4
    ctx->pc = 0x3b5390u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 4));
label_3b5394:
    // 0x3b5394: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x3B5394u;
    SET_GPR_U32(ctx, 31, 0x3B539Cu);
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x3B5394u, 0x3B539Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B539Cu;
label_3b539c:
    // 0x3b539c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b539cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b53a0:
    // 0x3b53a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b53a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b53a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b53a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b53a8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b53a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b53ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b53acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b53b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B53B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B53B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B53B0u;
        // 0x3b53b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B53B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B53B8u;
}
