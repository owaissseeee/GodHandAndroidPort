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

// Function: func_00332890
// Address: 0x332890 - 0x332958
void func_00332890_0x332890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00332890_0x332890");
#endif

    switch (ctx->pc) {
        case 0x3328b4u: goto label_3328b4;
        case 0x3328bcu: goto label_3328bc;
        case 0x332930u: goto label_332930;
        default: break;
    }

    ctx->pc = 0x332890u;

    // 0x332890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x332890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x332894: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x332894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x332898: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x332898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33289c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33289cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3328a0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x3328a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3328a4: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x3328A4u;
    {
        const bool branch_taken_0x3328a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3328a4) {
            ctx->pc = 0x3328A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3328A4u;
            // 0x3328a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x332948u;
            goto label_332948;
        }
    }
    ctx->pc = 0x3328ACu;
    // 0x3328ac: 0xc0ceda2  jal         func_33B688
    ctx->pc = 0x3328ACu;
    SET_GPR_U32(ctx, 31, 0x3328B4u);
    ctx->pc = 0x33B688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B688u, 0x3328ACu, 0x3328B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3328B4u;
label_3328b4:
    // 0x3328b4: 0xc0cc4ac  jal         func_3312B0
    ctx->pc = 0x3328B4u;
    SET_GPR_U32(ctx, 31, 0x3328BCu);
    ctx->pc = 0x3328B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3328B4u;
    // 0x3328b8: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3312B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3312B0u, 0x3328B4u, 0x3328BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3328BCu;
label_3328bc:
    // 0x3328bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3328bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3328c0: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x3328c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3328c4: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x3328C4u;
    {
        const bool branch_taken_0x3328c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3328c4) {
            ctx->pc = 0x3328C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3328C4u;
            // 0x3328c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x332938u;
            goto label_332938;
        }
    }
    ctx->pc = 0x3328CCu;
    // 0x3328cc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3328ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3328d0: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x3328d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x3328d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3328d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3328d8: 0x8c6342d0  lw          $v1, 0x42D0($v1)
    ctx->pc = 0x3328d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17104)));
    // 0x3328dc: 0x600008  jr          $v1
    ctx->pc = 0x3328DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3328E8u: goto label_3328e8;
            case 0x3328F8u: goto label_3328f8;
            case 0x332920u: goto label_332920;
            case 0x332934u: goto label_332934;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3328DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3328E4u;
    // 0x3328e4: 0x0  nop
    ctx->pc = 0x3328e4u;
    // NOP
label_3328e8:
    // 0x3328e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3328e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3328ec: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x3328ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3328f0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3328F0u;
    {
        const bool branch_taken_0x3328f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3328F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3328F0u;
        // 0x3328f4: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3328f0) {
            ctx->pc = 0x332928u;
            goto label_332928;
        }
    }
    ctx->pc = 0x3328F8u;
label_3328f8:
    // 0x3328f8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3328f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3328fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3328fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332900: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x332900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x332904: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x332904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x332908: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x332908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33290c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x33290cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x332910: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x332910u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x332914: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x332914u;
    {
        const bool branch_taken_0x332914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332914u;
        // 0x332918: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332914) {
            ctx->pc = 0x332928u;
            goto label_332928;
        }
    }
    ctx->pc = 0x33291Cu;
    // 0x33291c: 0x0  nop
    ctx->pc = 0x33291cu;
    // NOP
label_332920:
    // 0x332920: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x332920u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x332924: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x332924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_332928:
    // 0x332928: 0xc0cc41c  jal         func_331070
    ctx->pc = 0x332928u;
    SET_GPR_U32(ctx, 31, 0x332930u);
    ctx->pc = 0x331070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331070u, 0x332928u, 0x332930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332930u;
label_332930:
    // 0x332930: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x332930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_332934:
    // 0x332934: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x332934u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_332938:
    // 0x332938: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x332938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33293c: 0x80cedae  j           func_33B6B8
    ctx->pc = 0x33293Cu;
    ctx->pc = 0x332940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33293Cu;
    // 0x332940: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B6B8u, 0x33293Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x332944u;
    // 0x332944: 0x0  nop
    ctx->pc = 0x332944u;
    // NOP
label_332948:
    // 0x332948: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x332948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33294c: 0x3e00008  jr          $ra
    ctx->pc = 0x33294Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33294Cu;
        // 0x332950: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33294Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332954u;
    // 0x332954: 0x0  nop
    ctx->pc = 0x332954u;
    // NOP
    ctx->pc = 0x332958u;
}
