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

// Function: func_00273230
// Address: 0x273230 - 0x273630
void func_00273230_0x273230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00273230_0x273230");
#endif

    switch (ctx->pc) {
        case 0x273278u: goto label_273278;
        case 0x2732acu: goto label_2732ac;
        case 0x2732f0u: goto label_2732f0;
        case 0x27333cu: goto label_27333c;
        case 0x273370u: goto label_273370;
        case 0x2733bcu: goto label_2733bc;
        case 0x2733f8u: goto label_2733f8;
        case 0x273444u: goto label_273444;
        case 0x273498u: goto label_273498;
        case 0x2734e4u: goto label_2734e4;
        case 0x273518u: goto label_273518;
        case 0x27356cu: goto label_27356c;
        case 0x2735a0u: goto label_2735a0;
        case 0x2735d4u: goto label_2735d4;
        default: break;
    }

    ctx->pc = 0x273230u;

    // 0x273230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x273230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x273234: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x273234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x273238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x273238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27323c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27323cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273240: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x273240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x273244: 0x2444fe00  addiu       $a0, $v0, -0x200
    ctx->pc = 0x273244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
    // 0x273248: 0x2c83007f  sltiu       $v1, $a0, 0x7F
    ctx->pc = 0x273248u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x27324c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27324Cu;
    {
        const bool branch_taken_0x27324c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x273250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27324Cu;
        // 0x273250: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27324c) {
            ctx->pc = 0x27326Cu;
            goto label_27326c;
        }
    }
    ctx->pc = 0x273254u;
    // 0x273254: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x273254u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x273258: 0x24426a10  addiu       $v0, $v0, 0x6A10
    ctx->pc = 0x273258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27152));
    // 0x27325c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27325cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x273260: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x273260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x273264: 0x800008  jr          $a0
    ctx->pc = 0x273264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27326Cu: goto label_27326c;
            case 0x2732A0u: goto label_2732a0;
            case 0x2732E4u: goto label_2732e4;
            case 0x273330u: goto label_273330;
            case 0x273364u: goto label_273364;
            case 0x2733B0u: goto label_2733b0;
            case 0x2733ECu: goto label_2733ec;
            case 0x273438u: goto label_273438;
            case 0x27348Cu: goto label_27348c;
            case 0x2734D8u: goto label_2734d8;
            case 0x27350Cu: goto label_27350c;
            case 0x273560u: goto label_273560;
            case 0x273594u: goto label_273594;
            case 0x2735C8u: goto label_2735c8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273264u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27326Cu;
label_27326c:
    // 0x27326c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x27326cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x273270: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x273270u;
    SET_GPR_U32(ctx, 31, 0x273278u);
    ctx->pc = 0x273274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273270u;
    // 0x273274: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x273270u, 0x273278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273278u;
label_273278:
    // 0x273278: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x273278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x27327c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x27327cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x273280: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x273280u;
    {
        const bool branch_taken_0x273280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273280u;
        // 0x273284: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273280) {
            ctx->pc = 0x27346Cu;
            goto label_27346c;
        }
    }
    ctx->pc = 0x273288u;
    // 0x273288: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x273288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27328c: 0x24426c10  addiu       $v0, $v0, 0x6C10
    ctx->pc = 0x27328cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27664));
    // 0x273290: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x273290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x273294: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x273294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x273298: 0x800008  jr          $a0
    ctx->pc = 0x273298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27346Cu: goto label_27346c;
            case 0x273474u: goto label_273474;
            case 0x27347Cu: goto label_27347c;
            case 0x273484u: goto label_273484;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273298u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2732A0u;
label_2732a0:
    // 0x2732a0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2732a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2732a4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2732A4u;
    SET_GPR_U32(ctx, 31, 0x2732ACu);
    ctx->pc = 0x2732A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2732A4u;
    // 0x2732a8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2732A4u, 0x2732ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2732ACu;
label_2732ac:
    // 0x2732ac: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2732acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2732b0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2732b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2732b4: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2732B4u;
    {
        const bool branch_taken_0x2732b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2732B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2732B4u;
        // 0x2732b8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2732b4) {
            ctx->pc = 0x2733A0u;
            goto label_2733a0;
        }
    }
    ctx->pc = 0x2732BCu;
    // 0x2732bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2732bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2732c0: 0x24426c30  addiu       $v0, $v0, 0x6C30
    ctx->pc = 0x2732c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27696));
    // 0x2732c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2732c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2732c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2732c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2732cc: 0x800008  jr          $a0
    ctx->pc = 0x2732CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2732D4u: goto label_2732d4;
            case 0x2732DCu: goto label_2732dc;
            case 0x2733A0u: goto label_2733a0;
            case 0x273548u: goto label_273548;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2732CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2732D4u;
label_2732d4:
    // 0x2732d4: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x2732D4u;
    {
        const bool branch_taken_0x2732d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2732D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2732D4u;
        // 0x2732d8: 0x240200fa  addiu       $v0, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2732d4) {
            ctx->pc = 0x273618u;
            goto label_273618;
        }
    }
    ctx->pc = 0x2732DCu;
label_2732dc:
    // 0x2732dc: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x2732DCu;
    {
        const bool branch_taken_0x2732dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2732E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2732DCu;
        // 0x2732e0: 0x24020190  addiu       $v0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2732dc) {
            ctx->pc = 0x273618u;
            goto label_273618;
        }
    }
    ctx->pc = 0x2732E4u;
label_2732e4:
    // 0x2732e4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2732e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2732e8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2732E8u;
    SET_GPR_U32(ctx, 31, 0x2732F0u);
    ctx->pc = 0x2732ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2732E8u;
    // 0x2732ec: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2732E8u, 0x2732F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2732F0u;
label_2732f0:
    // 0x2732f0: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2732f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2732f4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2732f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2732f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2732F8u;
    {
        const bool branch_taken_0x2732f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2732FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2732F8u;
        // 0x2732fc: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2732f8) {
            ctx->pc = 0x273318u;
            goto label_273318;
        }
    }
    ctx->pc = 0x273300u;
    // 0x273300: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x273300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x273304: 0x24426c50  addiu       $v0, $v0, 0x6C50
    ctx->pc = 0x273304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27728));
    // 0x273308: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x273308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27330c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27330cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x273310: 0x800008  jr          $a0
    ctx->pc = 0x273310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x273318u: goto label_273318;
            case 0x273320u: goto label_273320;
            case 0x273328u: goto label_273328;
            case 0x273474u: goto label_273474;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273310u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x273318u;
label_273318:
    // 0x273318: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x273318u;
    {
        const bool branch_taken_0x273318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273318u;
        // 0x27331c: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273318) {
            ctx->pc = 0x273618u;
            goto label_273618;
        }
    }
    ctx->pc = 0x273320u;
label_273320:
    // 0x273320: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x273320u;
    {
        const bool branch_taken_0x273320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273320u;
        // 0x273324: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273320) {
            ctx->pc = 0x273618u;
            goto label_273618;
        }
    }
    ctx->pc = 0x273328u;
label_273328:
    // 0x273328: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x273328u;
    {
        const bool branch_taken_0x273328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273328u;
        // 0x27332c: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273328) {
            ctx->pc = 0x273618u;
            goto label_273618;
        }
    }
    ctx->pc = 0x273330u;
label_273330:
    // 0x273330: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x273330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x273334: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x273334u;
    SET_GPR_U32(ctx, 31, 0x27333Cu);
    ctx->pc = 0x273338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273334u;
    // 0x273338: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x273334u, 0x27333Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27333Cu;
label_27333c:
    // 0x27333c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x27333cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x273340: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x273340u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x273344: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x273344u;
    {
        const bool branch_taken_0x273344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273344u;
        // 0x273348: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273344) {
            ctx->pc = 0x27347Cu;
            goto label_27347c;
        }
    }
    ctx->pc = 0x27334Cu;
    // 0x27334c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27334cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x273350: 0x24426c70  addiu       $v0, $v0, 0x6C70
    ctx->pc = 0x273350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27760));
    // 0x273354: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x273354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x273358: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x273358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27335c: 0x800008  jr          $a0
    ctx->pc = 0x27335Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x273398u: goto label_273398;
            case 0x2733A0u: goto label_2733a0;
            case 0x2733A8u: goto label_2733a8;
            case 0x27347Cu: goto label_27347c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27335Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x273364u;
label_273364:
    // 0x273364: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x273364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x273368: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x273368u;
    SET_GPR_U32(ctx, 31, 0x273370u);
    ctx->pc = 0x27336Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273368u;
    // 0x27336c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x273368u, 0x273370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273370u;
label_273370:
    // 0x273370: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x273370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x273374: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x273374u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x273378: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x273378u;
    {
        const bool branch_taken_0x273378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273378u;
        // 0x27337c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273378) {
            ctx->pc = 0x27347Cu;
            goto label_27347c;
        }
    }
    ctx->pc = 0x273380u;
    // 0x273380: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x273380u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x273384: 0x24426c90  addiu       $v0, $v0, 0x6C90
    ctx->pc = 0x273384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27792));
    // 0x273388: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x273388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27338c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27338cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x273390: 0x800008  jr          $a0
    ctx->pc = 0x273390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x273398u: goto label_273398;
            case 0x2733A0u: goto label_2733a0;
            case 0x2733A8u: goto label_2733a8;
            case 0x27347Cu: goto label_27347c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273390u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x273398u;
label_273398:
    // 0x273398: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x273398u;
    {
        const bool branch_taken_0x273398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273398u;
        // 0x27339c: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273398) {
            ctx->pc = 0x273618u;
            goto label_273618;
        }
    }
    ctx->pc = 0x2733A0u;
label_2733a0:
    // 0x2733a0: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x2733A0u;
    {
        const bool branch_taken_0x2733a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2733A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733A0u;
        // 0x2733a4: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2733a0) {
            ctx->pc = 0x273618u;
            goto label_273618;
        }
    }
    ctx->pc = 0x2733A8u;
label_2733a8:
    // 0x2733a8: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x2733A8u;
    {
        const bool branch_taken_0x2733a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2733ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733A8u;
        // 0x2733ac: 0x2402012c  addiu       $v0, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2733a8) {
            ctx->pc = 0x273618u;
            goto label_273618;
        }
    }
    ctx->pc = 0x2733B0u;
label_2733b0:
    // 0x2733b0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2733b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2733b4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2733B4u;
    SET_GPR_U32(ctx, 31, 0x2733BCu);
    ctx->pc = 0x2733B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2733B4u;
    // 0x2733b8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2733B4u, 0x2733BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2733BCu;
label_2733bc:
    // 0x2733bc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2733bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2733c0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2733c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2733c4: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x2733C4u;
    {
        const bool branch_taken_0x2733c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2733C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733C4u;
        // 0x2733c8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2733c4) {
            ctx->pc = 0x2735FCu;
            goto label_2735fc;
        }
    }
    ctx->pc = 0x2733CCu;
    // 0x2733cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2733ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2733d0: 0x24426cb0  addiu       $v0, $v0, 0x6CB0
    ctx->pc = 0x2733d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27824));
    // 0x2733d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2733d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2733d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2733d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2733dc: 0x800008  jr          $a0
    ctx->pc = 0x2733DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2733E4u: goto label_2733e4;
            case 0x2735FCu: goto label_2735fc;
            case 0x27360Cu: goto label_27360c;
            case 0x273614u: goto label_273614;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2733DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2733E4u;
label_2733e4:
    // 0x2733e4: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x2733E4u;
    {
        const bool branch_taken_0x2733e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2733E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733E4u;
        // 0x2733e8: 0x24020960  addiu       $v0, $zero, 0x960 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2733e4) {
            ctx->pc = 0x273618u;
            goto label_273618;
        }
    }
    ctx->pc = 0x2733ECu;
label_2733ec:
    // 0x2733ec: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2733ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2733f0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2733F0u;
    SET_GPR_U32(ctx, 31, 0x2733F8u);
    ctx->pc = 0x2733F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2733F0u;
    // 0x2733f4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2733F0u, 0x2733F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2733F8u;
label_2733f8:
    // 0x2733f8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2733f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2733fc: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2733fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x273400: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x273400u;
    {
        const bool branch_taken_0x273400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273400u;
        // 0x273404: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273400) {
            ctx->pc = 0x273614u;
            goto label_273614;
        }
    }
    ctx->pc = 0x273408u;
    // 0x273408: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x273408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27340c: 0x24426cd0  addiu       $v0, $v0, 0x6CD0
    ctx->pc = 0x27340cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27856));
    // 0x273410: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x273410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x273414: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x273414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x273418: 0x800008  jr          $a0
    ctx->pc = 0x273418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x273420u: goto label_273420;
            case 0x273428u: goto label_273428;
            case 0x273430u: goto label_273430;
            case 0x273614u: goto label_273614;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273418u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x273420u;
label_273420:
    // 0x273420: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x273420u;
    {
        const bool branch_taken_0x273420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273420u;
        // 0x273424: 0x240212c0  addiu       $v0, $zero, 0x12C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273420) {
            ctx->pc = 0x273618u;
            goto label_273618;
        }
    }
    ctx->pc = 0x273428u;
label_273428:
    // 0x273428: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x273428u;
    {
        const bool branch_taken_0x273428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273428u;
        // 0x27342c: 0x24021770  addiu       $v0, $zero, 0x1770 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273428) {
            ctx->pc = 0x273618u;
            goto label_273618;
        }
    }
    ctx->pc = 0x273430u;
label_273430:
    // 0x273430: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x273430u;
    {
        const bool branch_taken_0x273430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273430u;
        // 0x273434: 0x24021f40  addiu       $v0, $zero, 0x1F40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273430) {
            ctx->pc = 0x273618u;
            goto label_273618;
        }
    }
    ctx->pc = 0x273438u;
label_273438:
    // 0x273438: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x273438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x27343c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x27343Cu;
    SET_GPR_U32(ctx, 31, 0x273444u);
    ctx->pc = 0x273440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27343Cu;
    // 0x273440: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x27343Cu, 0x273444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273444u;
label_273444:
    // 0x273444: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x273444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x273448: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x273448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x27344c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27344Cu;
    {
        const bool branch_taken_0x27344c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27344Cu;
        // 0x273450: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27344c) {
            ctx->pc = 0x27346Cu;
            goto label_27346c;
        }
    }
    ctx->pc = 0x273454u;
    // 0x273454: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x273454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x273458: 0x24426cf0  addiu       $v0, $v0, 0x6CF0
    ctx->pc = 0x273458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27888));
    // 0x27345c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27345cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x273460: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x273460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x273464: 0x800008  jr          $a0
    ctx->pc = 0x273464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27346Cu: goto label_27346c;
            case 0x273474u: goto label_273474;
            case 0x27347Cu: goto label_27347c;
            case 0x273484u: goto label_273484;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273464u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27346Cu;
label_27346c:
    // 0x27346c: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x27346Cu;
    {
        const bool branch_taken_0x27346c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27346Cu;
        // 0x273470: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27346c) {
            ctx->pc = 0x273618u;
            goto label_273618;
        }
    }
    ctx->pc = 0x273474u;
label_273474:
    // 0x273474: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x273474u;
    {
        const bool branch_taken_0x273474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273474u;
        // 0x273478: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273474) {
            ctx->pc = 0x273618u;
            goto label_273618;
        }
    }
    ctx->pc = 0x27347Cu;
label_27347c:
    // 0x27347c: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x27347Cu;
    {
        const bool branch_taken_0x27347c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27347Cu;
        // 0x273480: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27347c) {
            ctx->pc = 0x273618u;
            goto label_273618;
        }
    }
    ctx->pc = 0x273484u;
label_273484:
    // 0x273484: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x273484u;
    {
        const bool branch_taken_0x273484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273484u;
        // 0x273488: 0x24020096  addiu       $v0, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273484) {
            ctx->pc = 0x273618u;
            goto label_273618;
        }
    }
    ctx->pc = 0x27348Cu;
label_27348c:
    // 0x27348c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x27348cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x273490: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x273490u;
    SET_GPR_U32(ctx, 31, 0x273498u);
    ctx->pc = 0x273494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273490u;
    // 0x273494: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x273490u, 0x273498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273498u;
label_273498:
    // 0x273498: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x273498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x27349c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x27349cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2734a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2734A0u;
    {
        const bool branch_taken_0x2734a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2734A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734A0u;
        // 0x2734a4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2734a0) {
            ctx->pc = 0x2734C0u;
            goto label_2734c0;
        }
    }
    ctx->pc = 0x2734A8u;
    // 0x2734a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2734a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2734ac: 0x24426d10  addiu       $v0, $v0, 0x6D10
    ctx->pc = 0x2734acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27920));
    // 0x2734b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2734b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2734b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2734b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2734b8: 0x800008  jr          $a0
    ctx->pc = 0x2734B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2734C0u: goto label_2734c0;
            case 0x2734C8u: goto label_2734c8;
            case 0x2734D0u: goto label_2734d0;
            case 0x273558u: goto label_273558;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2734B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2734C0u;
label_2734c0:
    // 0x2734c0: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2734C0u;
    {
        const bool branch_taken_0x2734c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2734C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734C0u;
        // 0x2734c4: 0x240202ee  addiu       $v0, $zero, 0x2EE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2734c0) {
            ctx->pc = 0x273618u;
            goto label_273618;
        }
    }
    ctx->pc = 0x2734C8u;
label_2734c8:
    // 0x2734c8: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2734C8u;
    {
        const bool branch_taken_0x2734c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2734CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734C8u;
        // 0x2734cc: 0x24020384  addiu       $v0, $zero, 0x384 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2734c8) {
            ctx->pc = 0x273618u;
            goto label_273618;
        }
    }
    ctx->pc = 0x2734D0u;
label_2734d0:
    // 0x2734d0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2734D0u;
    {
        const bool branch_taken_0x2734d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2734D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734D0u;
        // 0x2734d4: 0x240208ca  addiu       $v0, $zero, 0x8CA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2734d0) {
            ctx->pc = 0x273618u;
            goto label_273618;
        }
    }
    ctx->pc = 0x2734D8u;
label_2734d8:
    // 0x2734d8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2734d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2734dc: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2734DCu;
    SET_GPR_U32(ctx, 31, 0x2734E4u);
    ctx->pc = 0x2734E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2734DCu;
    // 0x2734e0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2734DCu, 0x2734E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2734E4u;
label_2734e4:
    // 0x2734e4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2734e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2734e8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2734e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2734ec: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2734ECu;
    {
        const bool branch_taken_0x2734ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2734F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734ECu;
        // 0x2734f0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2734ec) {
            ctx->pc = 0x2735FCu;
            goto label_2735fc;
        }
    }
    ctx->pc = 0x2734F4u;
    // 0x2734f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2734f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2734f8: 0x24426d30  addiu       $v0, $v0, 0x6D30
    ctx->pc = 0x2734f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27952));
    // 0x2734fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2734fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x273500: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x273500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x273504: 0x800008  jr          $a0
    ctx->pc = 0x273504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2735FCu: goto label_2735fc;
            case 0x273604u: goto label_273604;
            case 0x27360Cu: goto label_27360c;
            case 0x273614u: goto label_273614;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273504u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27350Cu;
label_27350c:
    // 0x27350c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x27350cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x273510: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x273510u;
    SET_GPR_U32(ctx, 31, 0x273518u);
    ctx->pc = 0x273514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273510u;
    // 0x273514: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x273510u, 0x273518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273518u;
label_273518:
    // 0x273518: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x273518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x27351c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x27351cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x273520: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x273520u;
    {
        const bool branch_taken_0x273520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273520u;
        // 0x273524: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273520) {
            ctx->pc = 0x273540u;
            goto label_273540;
        }
    }
    ctx->pc = 0x273528u;
    // 0x273528: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x273528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27352c: 0x24426d50  addiu       $v0, $v0, 0x6D50
    ctx->pc = 0x27352cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27984));
    // 0x273530: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x273530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x273534: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x273534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x273538: 0x800008  jr          $a0
    ctx->pc = 0x273538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x273540u: goto label_273540;
            case 0x273548u: goto label_273548;
            case 0x273550u: goto label_273550;
            case 0x273558u: goto label_273558;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273538u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x273540u;
label_273540:
    // 0x273540: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x273540u;
    {
        const bool branch_taken_0x273540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273540u;
        // 0x273544: 0x240201f4  addiu       $v0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273540) {
            ctx->pc = 0x273618u;
            goto label_273618;
        }
    }
    ctx->pc = 0x273548u;
label_273548:
    // 0x273548: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x273548u;
    {
        const bool branch_taken_0x273548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273548u;
        // 0x27354c: 0x24020258  addiu       $v0, $zero, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273548) {
            ctx->pc = 0x273618u;
            goto label_273618;
        }
    }
    ctx->pc = 0x273550u;
label_273550:
    // 0x273550: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x273550u;
    {
        const bool branch_taken_0x273550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273550u;
        // 0x273554: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273550) {
            ctx->pc = 0x273618u;
            goto label_273618;
        }
    }
    ctx->pc = 0x273558u;
label_273558:
    // 0x273558: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x273558u;
    {
        const bool branch_taken_0x273558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273558u;
        // 0x27355c: 0x240205dc  addiu       $v0, $zero, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273558) {
            ctx->pc = 0x273618u;
            goto label_273618;
        }
    }
    ctx->pc = 0x273560u;
label_273560:
    // 0x273560: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x273560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x273564: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x273564u;
    SET_GPR_U32(ctx, 31, 0x27356Cu);
    ctx->pc = 0x273568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273564u;
    // 0x273568: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x273564u, 0x27356Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27356Cu;
label_27356c:
    // 0x27356c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x27356cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x273570: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x273570u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x273574: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x273574u;
    {
        const bool branch_taken_0x273574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273574u;
        // 0x273578: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273574) {
            ctx->pc = 0x2735FCu;
            goto label_2735fc;
        }
    }
    ctx->pc = 0x27357Cu;
    // 0x27357c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27357cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x273580: 0x24426d70  addiu       $v0, $v0, 0x6D70
    ctx->pc = 0x273580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28016));
    // 0x273584: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x273584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x273588: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x273588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27358c: 0x800008  jr          $a0
    ctx->pc = 0x27358Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2735FCu: goto label_2735fc;
            case 0x273604u: goto label_273604;
            case 0x27360Cu: goto label_27360c;
            case 0x273614u: goto label_273614;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27358Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x273594u;
label_273594:
    // 0x273594: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x273594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x273598: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x273598u;
    SET_GPR_U32(ctx, 31, 0x2735A0u);
    ctx->pc = 0x27359Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273598u;
    // 0x27359c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x273598u, 0x2735A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2735A0u;
label_2735a0:
    // 0x2735a0: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2735a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2735a4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2735a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2735a8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2735A8u;
    {
        const bool branch_taken_0x2735a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2735ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735A8u;
        // 0x2735ac: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2735a8) {
            ctx->pc = 0x2735FCu;
            goto label_2735fc;
        }
    }
    ctx->pc = 0x2735B0u;
    // 0x2735b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2735b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2735b4: 0x24426d90  addiu       $v0, $v0, 0x6D90
    ctx->pc = 0x2735b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28048));
    // 0x2735b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2735b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2735bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2735bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2735c0: 0x800008  jr          $a0
    ctx->pc = 0x2735C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2735FCu: goto label_2735fc;
            case 0x273604u: goto label_273604;
            case 0x27360Cu: goto label_27360c;
            case 0x273614u: goto label_273614;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2735C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2735C8u;
label_2735c8:
    // 0x2735c8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2735c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2735cc: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2735CCu;
    SET_GPR_U32(ctx, 31, 0x2735D4u);
    ctx->pc = 0x2735D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2735CCu;
    // 0x2735d0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2735CCu, 0x2735D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2735D4u;
label_2735d4:
    // 0x2735d4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2735d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2735d8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2735d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2735dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2735DCu;
    {
        const bool branch_taken_0x2735dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2735E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735DCu;
        // 0x2735e0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2735dc) {
            ctx->pc = 0x2735FCu;
            goto label_2735fc;
        }
    }
    ctx->pc = 0x2735E4u;
    // 0x2735e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2735e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2735e8: 0x24426db0  addiu       $v0, $v0, 0x6DB0
    ctx->pc = 0x2735e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28080));
    // 0x2735ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2735ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2735f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2735f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2735f4: 0x800008  jr          $a0
    ctx->pc = 0x2735F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2735FCu: goto label_2735fc;
            case 0x273604u: goto label_273604;
            case 0x27360Cu: goto label_27360c;
            case 0x273614u: goto label_273614;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2735F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2735FCu;
label_2735fc:
    // 0x2735fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2735FCu;
    {
        const bool branch_taken_0x2735fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735FCu;
        // 0x273600: 0x240207d0  addiu       $v0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2735fc) {
            ctx->pc = 0x273618u;
            goto label_273618;
        }
    }
    ctx->pc = 0x273604u;
label_273604:
    // 0x273604: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x273604u;
    {
        const bool branch_taken_0x273604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273604u;
        // 0x273608: 0x240209c4  addiu       $v0, $zero, 0x9C4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273604) {
            ctx->pc = 0x273618u;
            goto label_273618;
        }
    }
    ctx->pc = 0x27360Cu;
label_27360c:
    // 0x27360c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27360Cu;
    {
        const bool branch_taken_0x27360c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27360Cu;
        // 0x273610: 0x24020bb8  addiu       $v0, $zero, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27360c) {
            ctx->pc = 0x273618u;
            goto label_273618;
        }
    }
    ctx->pc = 0x273614u;
label_273614:
    // 0x273614: 0x24020fa0  addiu       $v0, $zero, 0xFA0
    ctx->pc = 0x273614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
label_273618:
    // 0x273618: 0xae020624  sw          $v0, 0x624($s0)
    ctx->pc = 0x273618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1572), GPR_U32(ctx, 2));
    // 0x27361c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27361cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x273620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273624: 0x3e00008  jr          $ra
    ctx->pc = 0x273624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273624u;
        // 0x273628: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27362Cu;
    // 0x27362c: 0x0  nop
    ctx->pc = 0x27362cu;
    // NOP
    ctx->pc = 0x273630u;
}
