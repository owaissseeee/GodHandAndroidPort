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

// Function: func_003340F0
// Address: 0x3340f0 - 0x3341b8
void func_003340F0_0x3340f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003340F0_0x3340f0");
#endif

    switch (ctx->pc) {
        case 0x334114u: goto label_334114;
        case 0x33411cu: goto label_33411c;
        case 0x334190u: goto label_334190;
        default: break;
    }

    ctx->pc = 0x3340f0u;

    // 0x3340f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3340f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3340f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3340f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3340f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3340f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3340fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3340fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x334100: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x334100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x334104: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x334104u;
    {
        const bool branch_taken_0x334104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x334104) {
            ctx->pc = 0x334108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334104u;
            // 0x334108: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3341A8u;
            goto label_3341a8;
        }
    }
    ctx->pc = 0x33410Cu;
    // 0x33410c: 0xc0ceda2  jal         func_33B688
    ctx->pc = 0x33410Cu;
    SET_GPR_U32(ctx, 31, 0x334114u);
    ctx->pc = 0x33B688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B688u, 0x33410Cu, 0x334114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334114u;
label_334114:
    // 0x334114: 0xc0cc4ac  jal         func_3312B0
    ctx->pc = 0x334114u;
    SET_GPR_U32(ctx, 31, 0x33411Cu);
    ctx->pc = 0x334118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334114u;
    // 0x334118: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3312B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3312B0u, 0x334114u, 0x33411Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33411Cu;
label_33411c:
    // 0x33411c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x33411cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334120: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x334120u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x334124: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x334124u;
    {
        const bool branch_taken_0x334124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x334124) {
            ctx->pc = 0x334128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334124u;
            // 0x334128: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334198u;
            goto label_334198;
        }
    }
    ctx->pc = 0x33412Cu;
    // 0x33412c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33412cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x334130: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x334130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x334134: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x334134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x334138: 0x8c6346e0  lw          $v1, 0x46E0($v1)
    ctx->pc = 0x334138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18144)));
    // 0x33413c: 0x600008  jr          $v1
    ctx->pc = 0x33413Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x334148u: goto label_334148;
            case 0x334158u: goto label_334158;
            case 0x334180u: goto label_334180;
            case 0x334194u: goto label_334194;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33413Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x334144u;
    // 0x334144: 0x0  nop
    ctx->pc = 0x334144u;
    // NOP
label_334148:
    // 0x334148: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x334148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33414c: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x33414cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x334150: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x334150u;
    {
        const bool branch_taken_0x334150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334150u;
        // 0x334154: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334150) {
            ctx->pc = 0x334188u;
            goto label_334188;
        }
    }
    ctx->pc = 0x334158u;
label_334158:
    // 0x334158: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x334158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x33415c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33415cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334160: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x334160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x334164: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x334164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
    // 0x334168: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x334168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33416c: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x33416cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x334170: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x334170u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x334174: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x334174u;
    {
        const bool branch_taken_0x334174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334174u;
        // 0x334178: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334174) {
            ctx->pc = 0x334188u;
            goto label_334188;
        }
    }
    ctx->pc = 0x33417Cu;
    // 0x33417c: 0x0  nop
    ctx->pc = 0x33417cu;
    // NOP
label_334180:
    // 0x334180: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x334180u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x334184: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x334184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_334188:
    // 0x334188: 0xc0cc41c  jal         func_331070
    ctx->pc = 0x334188u;
    SET_GPR_U32(ctx, 31, 0x334190u);
    ctx->pc = 0x331070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331070u, 0x334188u, 0x334190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334190u;
label_334190:
    // 0x334190: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x334190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_334194:
    // 0x334194: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x334194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_334198:
    // 0x334198: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x334198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33419c: 0x80cedae  j           func_33B6B8
    ctx->pc = 0x33419Cu;
    ctx->pc = 0x3341A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33419Cu;
    // 0x3341a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B6B8u, 0x33419Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3341A4u;
    // 0x3341a4: 0x0  nop
    ctx->pc = 0x3341a4u;
    // NOP
label_3341a8:
    // 0x3341a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3341a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3341ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3341ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3341B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3341ACu;
        // 0x3341b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3341ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3341B4u;
    // 0x3341b4: 0x0  nop
    ctx->pc = 0x3341b4u;
    // NOP
    ctx->pc = 0x3341b8u;
}
