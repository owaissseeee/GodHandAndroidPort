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

// Function: cCoreSave_dropLevelPoint
// Address: 0x1fa1a0 - 0x1fa280
void cCoreSave_dropLevelPoint_0x1fa1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_dropLevelPoint_0x1fa1a0");
#endif

    switch (ctx->pc) {
        case 0x1fa1c4u: goto label_1fa1c4;
        case 0x1fa204u: goto label_1fa204;
        case 0x1fa244u: goto label_1fa244;
        case 0x1fa258u: goto label_1fa258;
        case 0x1fa26cu: goto label_1fa26c;
        default: break;
    }

    ctx->pc = 0x1fa1a0u;

    // 0x1fa1a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fa1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fa1a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fa1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fa1a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fa1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fa1ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fa1acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa1b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fa1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa1b4: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x1FA1B4u;
    {
        const bool branch_taken_0x1fa1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa1b4) {
            ctx->pc = 0x1FA1B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA1B4u;
            // 0x1fa1b8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA270u;
            goto label_1fa270;
        }
    }
    ctx->pc = 0x1FA1BCu;
    // 0x1fa1bc: 0xc07e99e  jal         func_1FA678
    ctx->pc = 0x1FA1BCu;
    SET_GPR_U32(ctx, 31, 0x1FA1C4u);
    ctx->pc = 0x1FA678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA678u, 0x1FA1BCu, 0x1FA1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA1C4u;
label_1fa1c4:
    // 0x1fa1c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fa1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fa1c8: 0x10430028  beq         $v0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1FA1C8u;
    {
        const bool branch_taken_0x1fa1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FA1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA1C8u;
        // 0x1fa1cc: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa1c8) {
            ctx->pc = 0x1FA26Cu;
            goto label_1fa26c;
        }
    }
    ctx->pc = 0x1FA1D0u;
    // 0x1fa1d0: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x1fa1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x1fa1d4: 0x8c839b70  lw          $v1, -0x6490($a0)
    ctx->pc = 0x1fa1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941552)));
    // 0x1fa1d8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1fa1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1fa1dc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1fa1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1fa1e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA1E0u;
    {
        const bool branch_taken_0x1fa1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA1E0u;
        // 0x1fa1e4: 0x3c030057  lui         $v1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa1e0) {
            ctx->pc = 0x1FA1FCu;
            goto label_1fa1fc;
        }
    }
    ctx->pc = 0x1FA1E8u;
    // 0x1fa1e8: 0x9c628240  lwu         $v0, -0x7DC0($v1)
    ctx->pc = 0x1fa1e8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294935104)));
    // 0x1fa1ec: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1fa1ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1fa1f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fa1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fa1f4: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FA1F4u;
    {
        const bool branch_taken_0x1fa1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa1f4) {
            ctx->pc = 0x1FA1F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA1F4u;
            // 0x1fa1f8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA270u;
            goto label_1fa270;
        }
    }
    ctx->pc = 0x1FA1FCu;
label_1fa1fc:
    // 0x1fa1fc: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x1FA1FCu;
    SET_GPR_U32(ctx, 31, 0x1FA204u);
    ctx->pc = 0x1FA200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA1FCu;
    // 0x1fa200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x1FA1FCu, 0x1FA204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA204u;
label_1fa204:
    // 0x1fa204: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1fa204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fa208: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1fa208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1fa20c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA20Cu;
    {
        const bool branch_taken_0x1fa20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA20Cu;
        // 0x1fa210: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa20c) {
            ctx->pc = 0x1FA22Cu;
            goto label_1fa22c;
        }
    }
    ctx->pc = 0x1FA214u;
    // 0x1fa214: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fa214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fa218: 0x2442c3f0  addiu       $v0, $v0, -0x3C10
    ctx->pc = 0x1fa218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951920));
    // 0x1fa21c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fa21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fa220: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1fa220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fa224: 0x800008  jr          $a0
    ctx->pc = 0x1FA224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FA22Cu: goto label_1fa22c;
            case 0x1FA238u: goto label_1fa238;
            case 0x1FA24Cu: goto label_1fa24c;
            case 0x1FA260u: goto label_1fa260;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA224u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1FA22Cu;
label_1fa22c:
    // 0x1fa22c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fa22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa230: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1FA230u;
    {
        const bool branch_taken_0x1fa230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA230u;
        // 0x1fa234: 0xa440001c  sh          $zero, 0x1C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 28), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa230) {
            ctx->pc = 0x1FA26Cu;
            goto label_1fa26c;
        }
    }
    ctx->pc = 0x1FA238u;
label_1fa238:
    // 0x1fa238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa23c: 0xc07e852  jal         func_1FA148
    ctx->pc = 0x1FA23Cu;
    SET_GPR_U32(ctx, 31, 0x1FA244u);
    ctx->pc = 0x1FA240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA23Cu;
    // 0x1fa240: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA148u, 0x1FA23Cu, 0x1FA244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA244u;
label_1fa244:
    // 0x1fa244: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1FA244u;
    {
        const bool branch_taken_0x1fa244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA244u;
        // 0x1fa248: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa244) {
            ctx->pc = 0x1FA270u;
            goto label_1fa270;
        }
    }
    ctx->pc = 0x1FA24Cu;
label_1fa24c:
    // 0x1fa24c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa250: 0xc07e852  jal         func_1FA148
    ctx->pc = 0x1FA250u;
    SET_GPR_U32(ctx, 31, 0x1FA258u);
    ctx->pc = 0x1FA254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA250u;
    // 0x1fa254: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA148u, 0x1FA250u, 0x1FA258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA258u;
label_1fa258:
    // 0x1fa258: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA258u;
    {
        const bool branch_taken_0x1fa258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA258u;
        // 0x1fa25c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa258) {
            ctx->pc = 0x1FA270u;
            goto label_1fa270;
        }
    }
    ctx->pc = 0x1FA260u;
label_1fa260:
    // 0x1fa260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa264: 0xc07e852  jal         func_1FA148
    ctx->pc = 0x1FA264u;
    SET_GPR_U32(ctx, 31, 0x1FA26Cu);
    ctx->pc = 0x1FA268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA264u;
    // 0x1fa268: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA148u, 0x1FA264u, 0x1FA26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA26Cu;
label_1fa26c:
    // 0x1fa26c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fa26cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fa270:
    // 0x1fa270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fa270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa274: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA274u;
        // 0x1fa278: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA27Cu;
    // 0x1fa27c: 0x0  nop
    ctx->pc = 0x1fa27cu;
    // NOP
    ctx->pc = 0x1fa280u;
}
