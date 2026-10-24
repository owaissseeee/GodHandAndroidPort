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

// Function: func_00259548
// Address: 0x259548 - 0x259a88
void func_00259548_0x259548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00259548_0x259548");
#endif

    switch (ctx->pc) {
        case 0x2595b0u: goto label_2595b0;
        case 0x2595c0u: goto label_2595c0;
        case 0x2595d8u: goto label_2595d8;
        case 0x259690u: goto label_259690;
        case 0x2596bcu: goto label_2596bc;
        case 0x259870u: goto label_259870;
        case 0x259884u: goto label_259884;
        case 0x2598acu: goto label_2598ac;
        case 0x2598d0u: goto label_2598d0;
        case 0x2598e8u: goto label_2598e8;
        case 0x25993cu: goto label_25993c;
        case 0x259994u: goto label_259994;
        case 0x2599c8u: goto label_2599c8;
        case 0x2599f8u: goto label_2599f8;
        case 0x259a50u: goto label_259a50;
        default: break;
    }

    ctx->pc = 0x259548u;

    // 0x259548: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x259548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25954c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x25954cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x259550: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x259550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x259554: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x259554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x259558: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x259558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x25955c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25955cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259560: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x259560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x259564: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x259564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x259568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25956c: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x25956cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x259570: 0x107000d1  beq         $v1, $s0, . + 4 + (0xD1 << 2)
    ctx->pc = 0x259570u;
    {
        const bool branch_taken_0x259570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x259574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259570u;
        // 0x259574: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x259570) {
            ctx->pc = 0x2598B8u;
            goto label_2598b8;
        }
    }
    ctx->pc = 0x259578u;
    // 0x259578: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x259578u;
    {
        const bool branch_taken_0x259578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259578) {
            ctx->pc = 0x25957Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259578u;
            // 0x25957c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259590u;
            goto label_259590;
        }
    }
    ctx->pc = 0x259580u;
    // 0x259580: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x259580u;
    {
        const bool branch_taken_0x259580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x259580) {
            ctx->pc = 0x2595A8u;
            goto label_2595a8;
        }
    }
    ctx->pc = 0x259588u;
    // 0x259588: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x259588u;
    {
        const bool branch_taken_0x259588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259588u;
        // 0x25958c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259588) {
            ctx->pc = 0x259A68u;
            goto label_259a68;
        }
    }
    ctx->pc = 0x259590u;
label_259590:
    // 0x259590: 0x10620102  beq         $v1, $v0, . + 4 + (0x102 << 2)
    ctx->pc = 0x259590u;
    {
        const bool branch_taken_0x259590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x259594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259590u;
        // 0x259594: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259590) {
            ctx->pc = 0x25999Cu;
            goto label_25999c;
        }
    }
    ctx->pc = 0x259598u;
    // 0x259598: 0x10620106  beq         $v1, $v0, . + 4 + (0x106 << 2)
    ctx->pc = 0x259598u;
    {
        const bool branch_taken_0x259598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259598u;
        // 0x25959c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259598) {
            ctx->pc = 0x2599B4u;
            goto label_2599b4;
        }
    }
    ctx->pc = 0x2595A0u;
    // 0x2595a0: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x2595A0u;
    {
        const bool branch_taken_0x2595a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2595A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2595A0u;
        // 0x2595a4: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2595a0) {
            ctx->pc = 0x259A6Cu;
            goto label_259a6c;
        }
    }
    ctx->pc = 0x2595A8u;
label_2595a8:
    // 0x2595a8: 0xc09d036  jal         func_2740D8
    ctx->pc = 0x2595A8u;
    SET_GPR_U32(ctx, 31, 0x2595B0u);
    ctx->pc = 0x2595ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2595A8u;
    // 0x2595ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2740D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2740D8u, 0x2595A8u, 0x2595B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2595B0u;
label_2595b0:
    // 0x2595b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2595B0u;
    {
        const bool branch_taken_0x2595b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2595b0) {
            ctx->pc = 0x2595D0u;
            goto label_2595d0;
        }
    }
    ctx->pc = 0x2595B8u;
    // 0x2595b8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2595B8u;
    SET_GPR_U32(ctx, 31, 0x2595C0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2595B8u, 0x2595C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2595C0u;
label_2595c0:
    // 0x2595c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2595c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2595c4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2595C4u;
    {
        const bool branch_taken_0x2595c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2595c4) {
            ctx->pc = 0x2595C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2595C4u;
            // 0x2595c8: 0xa22017c3  sb          $zero, 0x17C3($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 6083), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2595D0u;
            goto label_2595d0;
        }
    }
    ctx->pc = 0x2595CCu;
    // 0x2595cc: 0xa23017c3  sb          $s0, 0x17C3($s1)
    ctx->pc = 0x2595ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6083), (uint8_t)GPR_U32(ctx, 16));
label_2595d0:
    // 0x2595d0: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2595D0u;
    SET_GPR_U32(ctx, 31, 0x2595D8u);
    ctx->pc = 0x2595D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2595D0u;
    // 0x2595d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2595D0u, 0x2595D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2595D8u;
label_2595d8:
    // 0x2595d8: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x2595d8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2595dc: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x2595dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x2595e0: 0x2444fdfb  addiu       $a0, $v0, -0x205
    ctx->pc = 0x2595e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966779));
    // 0x2595e4: 0x2c830075  sltiu       $v1, $a0, 0x75
    ctx->pc = 0x2595e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)117) ? 1 : 0);
    // 0x2595e8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2595E8u;
    {
        const bool branch_taken_0x2595e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2595ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2595E8u;
        // 0x2595ec: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2595e8) {
            ctx->pc = 0x259608u;
            goto label_259608;
        }
    }
    ctx->pc = 0x2595F0u;
    // 0x2595f0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2595f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2595f4: 0x24422e30  addiu       $v0, $v0, 0x2E30
    ctx->pc = 0x2595f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11824));
    // 0x2595f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2595f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2595fc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2595fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x259600: 0x800008  jr          $a0
    ctx->pc = 0x259600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259608u: goto label_259608;
            case 0x259630u: goto label_259630;
            case 0x259658u: goto label_259658;
            case 0x2596C4u: goto label_2596c4;
            case 0x2596ECu: goto label_2596ec;
            case 0x259714u: goto label_259714;
            case 0x25973Cu: goto label_25973c;
            case 0x259764u: goto label_259764;
            case 0x25978Cu: goto label_25978c;
            case 0x2597B4u: goto label_2597b4;
            case 0x2597DCu: goto label_2597dc;
            case 0x25981Cu: goto label_25981c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259600u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x259608u;
label_259608:
    // 0x259608: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x259608u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x25960c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x25960cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x259610: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259610u;
    {
        const bool branch_taken_0x259610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259610u;
        // 0x259614: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259610) {
            ctx->pc = 0x259624u;
            goto label_259624;
        }
    }
    ctx->pc = 0x259618u;
    // 0x259618: 0x8c430608  lw          $v1, 0x608($v0)
    ctx->pc = 0x259618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1544)));
    // 0x25961c: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x25961Cu;
    {
        const bool branch_taken_0x25961c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25961Cu;
        // 0x259620: 0x8c44060c  lw          $a0, 0x60C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25961c) {
            ctx->pc = 0x259840u;
            goto label_259840;
        }
    }
    ctx->pc = 0x259624u;
label_259624:
    // 0x259624: 0x8c430610  lw          $v1, 0x610($v0)
    ctx->pc = 0x259624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1552)));
    // 0x259628: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x259628u;
    {
        const bool branch_taken_0x259628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259628u;
        // 0x25962c: 0x8c440614  lw          $a0, 0x614($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259628) {
            ctx->pc = 0x259840u;
            goto label_259840;
        }
    }
    ctx->pc = 0x259630u;
label_259630:
    // 0x259630: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x259630u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x259634: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x259634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x259638: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259638u;
    {
        const bool branch_taken_0x259638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259638u;
        // 0x25963c: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259638) {
            ctx->pc = 0x25964Cu;
            goto label_25964c;
        }
    }
    ctx->pc = 0x259640u;
    // 0x259640: 0x8c430b1c  lw          $v1, 0xB1C($v0)
    ctx->pc = 0x259640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2844)));
    // 0x259644: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x259644u;
    {
        const bool branch_taken_0x259644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259644u;
        // 0x259648: 0x8c440b20  lw          $a0, 0xB20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259644) {
            ctx->pc = 0x259840u;
            goto label_259840;
        }
    }
    ctx->pc = 0x25964Cu;
label_25964c:
    // 0x25964c: 0x8c430b24  lw          $v1, 0xB24($v0)
    ctx->pc = 0x25964cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2852)));
    // 0x259650: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x259650u;
    {
        const bool branch_taken_0x259650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259650u;
        // 0x259654: 0x8c440b28  lw          $a0, 0xB28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259650) {
            ctx->pc = 0x259840u;
            goto label_259840;
        }
    }
    ctx->pc = 0x259658u;
label_259658:
    // 0x259658: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x259658u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x25965c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x25965cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x259660: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259660u;
    {
        const bool branch_taken_0x259660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259660u;
        // 0x259664: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259660) {
            ctx->pc = 0x259674u;
            goto label_259674;
        }
    }
    ctx->pc = 0x259668u;
    // 0x259668: 0x8c430b1c  lw          $v1, 0xB1C($v0)
    ctx->pc = 0x259668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2844)));
    // 0x25966c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25966Cu;
    {
        const bool branch_taken_0x25966c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25966Cu;
        // 0x259670: 0x8c440b20  lw          $a0, 0xB20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25966c) {
            ctx->pc = 0x25967Cu;
            goto label_25967c;
        }
    }
    ctx->pc = 0x259674u;
label_259674:
    // 0x259674: 0x8c430b24  lw          $v1, 0xB24($v0)
    ctx->pc = 0x259674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2852)));
    // 0x259678: 0x8c440b28  lw          $a0, 0xB28($v0)
    ctx->pc = 0x259678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2856)));
label_25967c:
    // 0x25967c: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x25967cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x259680: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x259680u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x259684: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x259684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259688: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x259688u;
    SET_GPR_U32(ctx, 31, 0x259690u);
    ctx->pc = 0x25968Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259688u;
    // 0x25968c: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x259688u, 0x259690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259690u;
label_259690:
    // 0x259690: 0x24420023  addiu       $v0, $v0, 0x23
    ctx->pc = 0x259690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
    // 0x259694: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x259694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x259698: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x259698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25969c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25969cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2596a0: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x2596a0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2596a4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2596a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2596a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2596a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2596ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2596acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2596b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2596b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2596b4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x2596B4u;
    SET_GPR_U32(ctx, 31, 0x2596BCu);
    ctx->pc = 0x2596B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2596B4u;
    // 0x2596b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x2596B4u, 0x2596BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2596BCu;
label_2596bc:
    // 0x2596bc: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2596BCu;
    {
        const bool branch_taken_0x2596bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2596bc) {
            ctx->pc = 0x259848u;
            goto label_259848;
        }
    }
    ctx->pc = 0x2596C4u;
label_2596c4:
    // 0x2596c4: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x2596c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x2596c8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2596c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2596cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2596CCu;
    {
        const bool branch_taken_0x2596cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2596D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2596CCu;
        // 0x2596d0: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2596cc) {
            ctx->pc = 0x2596E0u;
            goto label_2596e0;
        }
    }
    ctx->pc = 0x2596D4u;
    // 0x2596d4: 0x8c430b1c  lw          $v1, 0xB1C($v0)
    ctx->pc = 0x2596d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2844)));
    // 0x2596d8: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2596D8u;
    {
        const bool branch_taken_0x2596d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2596DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2596D8u;
        // 0x2596dc: 0x8c440b20  lw          $a0, 0xB20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2596d8) {
            ctx->pc = 0x259840u;
            goto label_259840;
        }
    }
    ctx->pc = 0x2596E0u;
label_2596e0:
    // 0x2596e0: 0x8c430b24  lw          $v1, 0xB24($v0)
    ctx->pc = 0x2596e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2852)));
    // 0x2596e4: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2596E4u;
    {
        const bool branch_taken_0x2596e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2596E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2596E4u;
        // 0x2596e8: 0x8c440b28  lw          $a0, 0xB28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2596e4) {
            ctx->pc = 0x259840u;
            goto label_259840;
        }
    }
    ctx->pc = 0x2596ECu;
label_2596ec:
    // 0x2596ec: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x2596ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x2596f0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2596f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2596f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2596F4u;
    {
        const bool branch_taken_0x2596f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2596F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2596F4u;
        // 0x2596f8: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2596f4) {
            ctx->pc = 0x259708u;
            goto label_259708;
        }
    }
    ctx->pc = 0x2596FCu;
    // 0x2596fc: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x2596fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x259700: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x259700u;
    {
        const bool branch_taken_0x259700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259700u;
        // 0x259704: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259700) {
            ctx->pc = 0x259840u;
            goto label_259840;
        }
    }
    ctx->pc = 0x259708u;
label_259708:
    // 0x259708: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x259708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x25970c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x25970Cu;
    {
        const bool branch_taken_0x25970c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25970Cu;
        // 0x259710: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25970c) {
            ctx->pc = 0x259840u;
            goto label_259840;
        }
    }
    ctx->pc = 0x259714u;
label_259714:
    // 0x259714: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x259714u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x259718: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x259718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x25971c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25971Cu;
    {
        const bool branch_taken_0x25971c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25971Cu;
        // 0x259720: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25971c) {
            ctx->pc = 0x259730u;
            goto label_259730;
        }
    }
    ctx->pc = 0x259724u;
    // 0x259724: 0x8c433818  lw          $v1, 0x3818($v0)
    ctx->pc = 0x259724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14360)));
    // 0x259728: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x259728u;
    {
        const bool branch_taken_0x259728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259728u;
        // 0x25972c: 0x8c44381c  lw          $a0, 0x381C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259728) {
            ctx->pc = 0x259840u;
            goto label_259840;
        }
    }
    ctx->pc = 0x259730u;
label_259730:
    // 0x259730: 0x8c433818  lw          $v1, 0x3818($v0)
    ctx->pc = 0x259730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14360)));
    // 0x259734: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x259734u;
    {
        const bool branch_taken_0x259734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259734u;
        // 0x259738: 0x8c44381c  lw          $a0, 0x381C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259734) {
            ctx->pc = 0x259840u;
            goto label_259840;
        }
    }
    ctx->pc = 0x25973Cu;
label_25973c:
    // 0x25973c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x25973cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x259740: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x259740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x259744: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259744u;
    {
        const bool branch_taken_0x259744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259744u;
        // 0x259748: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259744) {
            ctx->pc = 0x259758u;
            goto label_259758;
        }
    }
    ctx->pc = 0x25974Cu;
    // 0x25974c: 0x8c431798  lw          $v1, 0x1798($v0)
    ctx->pc = 0x25974cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6040)));
    // 0x259750: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x259750u;
    {
        const bool branch_taken_0x259750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259750u;
        // 0x259754: 0x8c44179c  lw          $a0, 0x179C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6044)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259750) {
            ctx->pc = 0x259840u;
            goto label_259840;
        }
    }
    ctx->pc = 0x259758u;
label_259758:
    // 0x259758: 0x8c4317a0  lw          $v1, 0x17A0($v0)
    ctx->pc = 0x259758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6048)));
    // 0x25975c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x25975Cu;
    {
        const bool branch_taken_0x25975c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25975Cu;
        // 0x259760: 0x8c4417a4  lw          $a0, 0x17A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25975c) {
            ctx->pc = 0x259840u;
            goto label_259840;
        }
    }
    ctx->pc = 0x259764u;
label_259764:
    // 0x259764: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x259764u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x259768: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x259768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x25976c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25976Cu;
    {
        const bool branch_taken_0x25976c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25976Cu;
        // 0x259770: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25976c) {
            ctx->pc = 0x259780u;
            goto label_259780;
        }
    }
    ctx->pc = 0x259774u;
    // 0x259774: 0x8c431798  lw          $v1, 0x1798($v0)
    ctx->pc = 0x259774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6040)));
    // 0x259778: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x259778u;
    {
        const bool branch_taken_0x259778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259778u;
        // 0x25977c: 0x8c44179c  lw          $a0, 0x179C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6044)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259778) {
            ctx->pc = 0x259840u;
            goto label_259840;
        }
    }
    ctx->pc = 0x259780u;
label_259780:
    // 0x259780: 0x8c4317a0  lw          $v1, 0x17A0($v0)
    ctx->pc = 0x259780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6048)));
    // 0x259784: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x259784u;
    {
        const bool branch_taken_0x259784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259784u;
        // 0x259788: 0x8c4417a4  lw          $a0, 0x17A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259784) {
            ctx->pc = 0x259840u;
            goto label_259840;
        }
    }
    ctx->pc = 0x25978Cu;
label_25978c:
    // 0x25978c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x25978cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x259790: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x259790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x259794: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259794u;
    {
        const bool branch_taken_0x259794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259794u;
        // 0x259798: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259794) {
            ctx->pc = 0x2597A8u;
            goto label_2597a8;
        }
    }
    ctx->pc = 0x25979Cu;
    // 0x25979c: 0x8c430f44  lw          $v1, 0xF44($v0)
    ctx->pc = 0x25979cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3908)));
    // 0x2597a0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2597A0u;
    {
        const bool branch_taken_0x2597a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2597A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597A0u;
        // 0x2597a4: 0x8c440f48  lw          $a0, 0xF48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2597a0) {
            ctx->pc = 0x259840u;
            goto label_259840;
        }
    }
    ctx->pc = 0x2597A8u;
label_2597a8:
    // 0x2597a8: 0x8c430f4c  lw          $v1, 0xF4C($v0)
    ctx->pc = 0x2597a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3916)));
    // 0x2597ac: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2597ACu;
    {
        const bool branch_taken_0x2597ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2597B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597ACu;
        // 0x2597b0: 0x8c440f50  lw          $a0, 0xF50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2597ac) {
            ctx->pc = 0x259840u;
            goto label_259840;
        }
    }
    ctx->pc = 0x2597B4u;
label_2597b4:
    // 0x2597b4: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x2597b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x2597b8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2597b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2597bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2597BCu;
    {
        const bool branch_taken_0x2597bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2597C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597BCu;
        // 0x2597c0: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2597bc) {
            ctx->pc = 0x2597D0u;
            goto label_2597d0;
        }
    }
    ctx->pc = 0x2597C4u;
    // 0x2597c4: 0x8c430608  lw          $v1, 0x608($v0)
    ctx->pc = 0x2597c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1544)));
    // 0x2597c8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2597C8u;
    {
        const bool branch_taken_0x2597c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2597CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597C8u;
        // 0x2597cc: 0x8c44060c  lw          $a0, 0x60C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2597c8) {
            ctx->pc = 0x259840u;
            goto label_259840;
        }
    }
    ctx->pc = 0x2597D0u;
label_2597d0:
    // 0x2597d0: 0x8c430610  lw          $v1, 0x610($v0)
    ctx->pc = 0x2597d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1552)));
    // 0x2597d4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2597D4u;
    {
        const bool branch_taken_0x2597d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2597D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597D4u;
        // 0x2597d8: 0x8c440614  lw          $a0, 0x614($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2597d4) {
            ctx->pc = 0x259840u;
            goto label_259840;
        }
    }
    ctx->pc = 0x2597DCu;
label_2597dc:
    // 0x2597dc: 0x962303ac  lhu         $v1, 0x3AC($s1)
    ctx->pc = 0x2597dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x2597e0: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2597e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2597e4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2597E4u;
    {
        const bool branch_taken_0x2597e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2597E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597E4u;
        // 0x2597e8: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2597e4) {
            ctx->pc = 0x25980Cu;
            goto label_25980c;
        }
    }
    ctx->pc = 0x2597ECu;
    // 0x2597ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2597ECu;
    {
        const bool branch_taken_0x2597ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2597F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597ECu;
        // 0x2597f0: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2597ec) {
            ctx->pc = 0x259800u;
            goto label_259800;
        }
    }
    ctx->pc = 0x2597F4u;
    // 0x2597f4: 0x8c432e74  lw          $v1, 0x2E74($v0)
    ctx->pc = 0x2597f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11892)));
    // 0x2597f8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2597F8u;
    {
        const bool branch_taken_0x2597f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2597FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597F8u;
        // 0x2597fc: 0x8c442e78  lw          $a0, 0x2E78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2597f8) {
            ctx->pc = 0x259840u;
            goto label_259840;
        }
    }
    ctx->pc = 0x259800u;
label_259800:
    // 0x259800: 0x8c432e74  lw          $v1, 0x2E74($v0)
    ctx->pc = 0x259800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11892)));
    // 0x259804: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x259804u;
    {
        const bool branch_taken_0x259804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259804u;
        // 0x259808: 0x8c442e78  lw          $a0, 0x2E78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259804) {
            ctx->pc = 0x259840u;
            goto label_259840;
        }
    }
    ctx->pc = 0x25980Cu;
label_25980c:
    // 0x25980c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x25980cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x259810: 0x8c432e6c  lw          $v1, 0x2E6C($v0)
    ctx->pc = 0x259810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11884)));
    // 0x259814: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x259814u;
    {
        const bool branch_taken_0x259814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259814u;
        // 0x259818: 0x8c442e70  lw          $a0, 0x2E70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11888)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259814) {
            ctx->pc = 0x259840u;
            goto label_259840;
        }
    }
    ctx->pc = 0x25981Cu;
label_25981c:
    // 0x25981c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x25981cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x259820: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x259820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x259824: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259824u;
    {
        const bool branch_taken_0x259824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259824u;
        // 0x259828: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259824) {
            ctx->pc = 0x259838u;
            goto label_259838;
        }
    }
    ctx->pc = 0x25982Cu;
    // 0x25982c: 0x8c431370  lw          $v1, 0x1370($v0)
    ctx->pc = 0x25982cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4976)));
    // 0x259830: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x259830u;
    {
        const bool branch_taken_0x259830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259830u;
        // 0x259834: 0x8c441374  lw          $a0, 0x1374($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4980)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259830) {
            ctx->pc = 0x259840u;
            goto label_259840;
        }
    }
    ctx->pc = 0x259838u;
label_259838:
    // 0x259838: 0x8c431378  lw          $v1, 0x1378($v0)
    ctx->pc = 0x259838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4984)));
    // 0x25983c: 0x8c44137c  lw          $a0, 0x137C($v0)
    ctx->pc = 0x25983cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4988)));
label_259840:
    // 0x259840: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x259840u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x259844: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x259844u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_259848:
    // 0x259848: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x259848u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25984c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x25984cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x259850: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x259850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259854: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x259854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259858: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x259858u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25985c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x25985cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x259860: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x259860u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259864: 0x2450ee00  addiu       $s0, $v0, -0x1200
    ctx->pc = 0x259864u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x259868: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x259868u;
    SET_GPR_U32(ctx, 31, 0x259870u);
    ctx->pc = 0x25986Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259868u;
    // 0x25986c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x259868u, 0x259870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259870u;
label_259870:
    // 0x259870: 0x92221866  lbu         $v0, 0x1866($s1)
    ctx->pc = 0x259870u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6246)));
    // 0x259874: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x259874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259878: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x259878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25987c: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x25987Cu;
    SET_GPR_U32(ctx, 31, 0x259884u);
    ctx->pc = 0x259880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25987Cu;
    // 0x259880: 0xa2221866  sb          $v0, 0x1866($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 6246), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x25987Cu, 0x259884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259884u;
label_259884:
    // 0x259884: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x259884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x259888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x259888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25988c: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x25988cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x259890: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x259890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x259894: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x259894u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259898: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x259898u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25989c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25989cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2598a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2598a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2598a4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x2598A4u;
    SET_GPR_U32(ctx, 31, 0x2598ACu);
    ctx->pc = 0x2598A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2598A4u;
    // 0x2598a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x2598A4u, 0x2598ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2598ACu;
label_2598ac:
    // 0x2598ac: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x2598acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2598b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2598b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2598b4: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x2598b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
label_2598b8:
    // 0x2598b8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2598b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2598bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2598bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2598c0: 0x24502fc0  addiu       $s0, $v0, 0x2FC0
    ctx->pc = 0x2598c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12224));
    // 0x2598c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2598c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2598c8: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x2598C8u;
    SET_GPR_U32(ctx, 31, 0x2598D0u);
    ctx->pc = 0x2598CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2598C8u;
    // 0x2598cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2598C8u, 0x2598D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2598D0u;
label_2598d0:
    // 0x2598d0: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x2598d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x2598d4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2598D4u;
    {
        const bool branch_taken_0x2598d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2598D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2598D4u;
        // 0x2598d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2598d4) {
            ctx->pc = 0x259928u;
            goto label_259928;
        }
    }
    ctx->pc = 0x2598DCu;
    // 0x2598dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2598dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2598e0: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x2598E0u;
    SET_GPR_U32(ctx, 31, 0x2598E8u);
    ctx->pc = 0x2598E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2598E0u;
    // 0x2598e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2598E0u, 0x2598E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2598E8u;
label_2598e8:
    // 0x2598e8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2598e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2598ec: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2598ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2598f0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2598f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2598f4: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2598f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2598f8: 0xc6200114  lwc1        $f0, 0x114($s1)
    ctx->pc = 0x2598f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2598fc: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x2598fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x259900: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x259900u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x259904: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x259904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x259908: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x259908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25990c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25990cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x259910: 0xae2216d0  sw          $v0, 0x16D0($s1)
    ctx->pc = 0x259910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    // 0x259914: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x259914u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x259918: 0xe621054c  swc1        $f1, 0x54C($s1)
    ctx->pc = 0x259918u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x25991c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x25991Cu;
    {
        const bool branch_taken_0x25991c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x259920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25991Cu;
        // 0x259920: 0xe6200114  swc1        $f0, 0x114($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25991c) {
            ctx->pc = 0x259928u;
            goto label_259928;
        }
    }
    ctx->pc = 0x259924u;
    // 0x259924: 0xe6220114  swc1        $f2, 0x114($s1)
    ctx->pc = 0x259924u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
label_259928:
    // 0x259928: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x259928u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x25992c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25992cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259930: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x259930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x259934: 0xc055f06  jal         func_157C18
    ctx->pc = 0x259934u;
    SET_GPR_U32(ctx, 31, 0x25993Cu);
    ctx->pc = 0x259938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259934u;
    // 0x259938: 0xa6220434  sh          $v0, 0x434($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x259934u, 0x25993Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25993Cu;
label_25993c:
    // 0x25993c: 0x5040004a  beql        $v0, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x25993Cu;
    {
        const bool branch_taken_0x25993c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25993c) {
            ctx->pc = 0x259940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25993Cu;
            // 0x259940: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259A68u;
            goto label_259a68;
        }
    }
    ctx->pc = 0x259944u;
    // 0x259944: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x259944u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x259948: 0x1c400010  bgtz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x259948u;
    {
        const bool branch_taken_0x259948 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x259948) {
            ctx->pc = 0x25998Cu;
            goto label_25998c;
        }
    }
    ctx->pc = 0x259950u;
    // 0x259950: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x259950u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x259954: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x259954u;
    {
        const bool branch_taken_0x259954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259954u;
        // 0x259958: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259954) {
            ctx->pc = 0x259964u;
            goto label_259964;
        }
    }
    ctx->pc = 0x25995Cu;
    // 0x25995c: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x25995Cu;
    {
        const bool branch_taken_0x25995c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25995Cu;
        // 0x259960: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25995c) {
            ctx->pc = 0x259A64u;
            goto label_259a64;
        }
    }
    ctx->pc = 0x259964u;
label_259964:
    // 0x259964: 0x8e221644  lw          $v0, 0x1644($s1)
    ctx->pc = 0x259964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5700)));
    // 0x259968: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x259968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x25996c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25996cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x259970: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x259970u;
    {
        const bool branch_taken_0x259970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259970u;
        // 0x259974: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259970) {
            ctx->pc = 0x259A40u;
            goto label_259a40;
        }
    }
    ctx->pc = 0x259978u;
    // 0x259978: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x259978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25997c: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x25997cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x259980: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x259980u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x259984: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x259984u;
    {
        const bool branch_taken_0x259984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259984u;
        // 0x259988: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259984) {
            ctx->pc = 0x259A60u;
            goto label_259a60;
        }
    }
    ctx->pc = 0x25998Cu;
label_25998c:
    // 0x25998c: 0xc09d3fa  jal         func_274FE8
    ctx->pc = 0x25998Cu;
    SET_GPR_U32(ctx, 31, 0x259994u);
    ctx->pc = 0x259990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25998Cu;
    // 0x259990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274FE8u, 0x25998Cu, 0x259994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259994u;
label_259994:
    // 0x259994: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x259994u;
    {
        const bool branch_taken_0x259994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259994u;
        // 0x259998: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259994) {
            ctx->pc = 0x259A68u;
            goto label_259a68;
        }
    }
    ctx->pc = 0x25999Cu;
label_25999c:
    // 0x25999c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x25999cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2599a0: 0x3c014296  lui         $at, 0x4296
    ctx->pc = 0x2599a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17046 << 16));
    // 0x2599a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2599a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2599a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2599a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2599ac: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x2599acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x2599b0: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2599b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_2599b4:
    // 0x2599b4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2599b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2599b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2599b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2599bc: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x2599bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x2599c0: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x2599C0u;
    SET_GPR_U32(ctx, 31, 0x2599C8u);
    ctx->pc = 0x2599C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2599C0u;
    // 0x2599c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2599C0u, 0x2599C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2599C8u;
label_2599c8:
    // 0x2599c8: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x2599c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x2599cc: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x2599ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x2599d0: 0x96230434  lhu         $v1, 0x434($s1)
    ctx->pc = 0x2599d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x2599d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2599d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2599d8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2599d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2599dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2599dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2599e0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2599e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2599e4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x2599e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2599e8: 0xae2216d0  sw          $v0, 0x16D0($s1)
    ctx->pc = 0x2599e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    // 0x2599ec: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x2599ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x2599f0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2599F0u;
    SET_GPR_U32(ctx, 31, 0x2599F8u);
    ctx->pc = 0x2599F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2599F0u;
    // 0x2599f4: 0xa6230434  sh          $v1, 0x434($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2599F0u, 0x2599F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2599F8u;
label_2599f8:
    // 0x2599f8: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x2599f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2599fc: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x2599fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x259a00: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x259a00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x259a04: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x259a04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x259a08: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x259a08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x259a0c: 0x0  nop
    ctx->pc = 0x259a0cu;
    // NOP
    // 0x259a10: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x259A10u;
    {
        const bool branch_taken_0x259a10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x259A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259A10u;
        // 0x259a14: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x259a10) {
            ctx->pc = 0x259A64u;
            goto label_259a64;
        }
    }
    ctx->pc = 0x259A18u;
    // 0x259a18: 0x8e221644  lw          $v0, 0x1644($s1)
    ctx->pc = 0x259a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5700)));
    // 0x259a1c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x259a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x259a20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x259a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x259a24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x259A24u;
    {
        const bool branch_taken_0x259a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259A24u;
        // 0x259a28: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259a24) {
            ctx->pc = 0x259A40u;
            goto label_259a40;
        }
    }
    ctx->pc = 0x259A2Cu;
    // 0x259a2c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x259a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x259a30: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x259a30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x259a34: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x259a34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x259a38: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x259A38u;
    {
        const bool branch_taken_0x259a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259A38u;
        // 0x259a3c: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259a38) {
            ctx->pc = 0x259A60u;
            goto label_259a60;
        }
    }
    ctx->pc = 0x259A40u;
label_259a40:
    // 0x259a40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x259a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259a44: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x259a44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x259a48: 0xc097f8c  jal         func_25FE30
    ctx->pc = 0x259A48u;
    SET_GPR_U32(ctx, 31, 0x259A50u);
    ctx->pc = 0x259A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259A48u;
    // 0x259a4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE30u, 0x259A48u, 0x259A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259A50u;
label_259a50:
    // 0x259a50: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x259a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x259a54: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x259a54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x259a58: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x259a58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x259a5c: 0xa22302f4  sb          $v1, 0x2F4($s1)
    ctx->pc = 0x259a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
label_259a60:
    // 0x259a60: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x259a60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_259a64:
    // 0x259a64: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x259a64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_259a68:
    // 0x259a68: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x259a68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_259a6c:
    // 0x259a6c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x259a6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259a70: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x259a70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259a74: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x259a74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259a78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x259A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259A7Cu;
        // 0x259a80: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259A84u;
    // 0x259a84: 0x0  nop
    ctx->pc = 0x259a84u;
    // NOP
    ctx->pc = 0x259a88u;
}
