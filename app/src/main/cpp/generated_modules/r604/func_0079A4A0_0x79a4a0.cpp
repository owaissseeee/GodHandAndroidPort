#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r604_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r604
{
// Function: func_0079A4A0
// Address: 0x79a4a0 - 0x79a660
void func_0079A4A0_0x79a4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A4A0_0x79a4a0");
#endif

    switch (ctx->pc) {
        case 0x79a4e0u: goto label_79a4e0;
        case 0x79a514u: goto label_79a514;
        case 0x79a558u: goto label_79a558;
        case 0x79a560u: goto label_79a560;
        case 0x79a580u: goto label_79a580;
        case 0x79a588u: goto label_79a588;
        case 0x79a5a8u: goto label_79a5a8;
        case 0x79a5b0u: goto label_79a5b0;
        case 0x79a5d0u: goto label_79a5d0;
        case 0x79a5d8u: goto label_79a5d8;
        case 0x79a5f8u: goto label_79a5f8;
        case 0x79a600u: goto label_79a600;
        case 0x79a620u: goto label_79a620;
        case 0x79a628u: goto label_79a628;
        case 0x79a638u: goto label_79a638;
        case 0x79a648u: goto label_79a648;
        default: break;
    }

    ctx->pc = 0x79a4a0u;

    // 0x79a4a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79a4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79a4a4: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a4a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79a4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79a4ac: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79a4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79a4b0: 0x8045b498  lb          $a1, -0x4B68($v0)
    ctx->pc = 0x79a4b0u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x79B498u));
    // 0x79a4b4: 0x2448b498  addiu       $t0, $v0, -0x4B68
    ctx->pc = 0x79a4b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947992));
    // 0x79a4b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79a4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79a4bc: 0x24694c58  addiu       $t1, $v1, 0x4C58
    ctx->pc = 0x79a4bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x79a4c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a4c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x79a4c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a4c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4cc: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x79A4CCu;
    {
        const bool branch_taken_0x79a4cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4CCu;
        // 0x79a4d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4cc) {
            ctx->pc = 0x79A508u;
            goto label_79a508;
        }
    }
    ctx->pc = 0x79A4D4u;
    // 0x79a4d4: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x79a4d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4d8: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x79a4d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x79a4dc: 0x0  nop
    ctx->pc = 0x79a4dcu;
    // NOP
label_79a4e0:
    // 0x79a4e0: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x79a4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x79a4e4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a4e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79a4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x79a4ec: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a4f0: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x79a4f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a4f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A4F4u;
    {
        const bool branch_taken_0x79a4f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4F4u;
        // 0x79a4f8: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4f4) {
            ctx->pc = 0x79A508u;
            goto label_79a508;
        }
    }
    ctx->pc = 0x79A4FCu;
    // 0x79a4fc: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x79a4fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x79a500: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A500u;
    {
        const bool branch_taken_0x79a500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a500) {
            ctx->pc = 0x79A504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A500u;
            // 0x79a504: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A4E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a4e0;
        }
    }
    ctx->pc = 0x79A508u;
label_79a508:
    // 0x79a508: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x79a508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a50c: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A50Cu;
    SET_GPR_U32(ctx, 31, 0x79A514u);
    ctx->pc = 0x79A510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A50Cu;
    // 0x79a510: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A50Cu, 0x79A514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A514u;
label_79a514:
    // 0x79a514: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a518: 0x1200004b  beqz        $s0, . + 4 + (0x4B << 2)
    ctx->pc = 0x79A518u;
    {
        const bool branch_taken_0x79a518 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A518u;
        // 0x79a51c: 0x2e22000c  sltiu       $v0, $s1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a518) {
            ctx->pc = 0x79A648u;
            goto label_79a648;
        }
    }
    ctx->pc = 0x79A520u;
    // 0x79a520: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x79A520u;
    {
        const bool branch_taken_0x79a520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A520u;
        // 0x79a524: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a520) {
            ctx->pc = 0x79A648u;
            goto label_79a648;
        }
    }
    ctx->pc = 0x79A528u;
    // 0x79a528: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79a528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x79a52c: 0x2442b4b0  addiu       $v0, $v0, -0x4B50
    ctx->pc = 0x79a52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948016));
    // 0x79a530: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79a534: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79a534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79a538: 0x800008  jr          $a0
    ctx->pc = 0x79A538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79A540u: goto label_79a540;
            case 0x79A568u: goto label_79a568;
            case 0x79A590u: goto label_79a590;
            case 0x79A5B8u: goto label_79a5b8;
            case 0x79A5E0u: goto label_79a5e0;
            case 0x79A608u: goto label_79a608;
            case 0x79A630u: goto label_79a630;
            case 0x79A640u: goto label_79a640;
            case 0x79A648u: goto label_79a648;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A538u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79A540u;
label_79a540:
    // 0x79a540: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x79a540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x79a544: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a548: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x79a548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x79a54c: 0x24a5b4a0  addiu       $a1, $a1, -0x4B60
    ctx->pc = 0x79a54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948000));
    // 0x79a550: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x79A550u;
    SET_GPR_U32(ctx, 31, 0x79A558u);
    ctx->pc = 0x79A554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A550u;
    // 0x79a554: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x79A550u, 0x79A558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A558u;
label_79a558:
    // 0x79a558: 0xc0600d8  jal         func_180360
    ctx->pc = 0x79A558u;
    SET_GPR_U32(ctx, 31, 0x79A560u);
    ctx->pc = 0x79A55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A558u;
    // 0x79a55c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180360u, 0x79A558u, 0x79A560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A560u;
label_79a560:
    // 0x79a560: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x79A560u;
    {
        const bool branch_taken_0x79a560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A560u;
        // 0x79a564: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a560) {
            ctx->pc = 0x79A64Cu;
            goto label_79a64c;
        }
    }
    ctx->pc = 0x79A568u;
label_79a568:
    // 0x79a568: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x79a568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x79a56c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a56cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a570: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x79a570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x79a574: 0x24a5b4a0  addiu       $a1, $a1, -0x4B60
    ctx->pc = 0x79a574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948000));
    // 0x79a578: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x79A578u;
    SET_GPR_U32(ctx, 31, 0x79A580u);
    ctx->pc = 0x79A57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A578u;
    // 0x79a57c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x79A578u, 0x79A580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A580u;
label_79a580:
    // 0x79a580: 0xc06013e  jal         func_1804F8
    ctx->pc = 0x79A580u;
    SET_GPR_U32(ctx, 31, 0x79A588u);
    ctx->pc = 0x79A584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A580u;
    // 0x79a584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1804F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1804F8u, 0x79A580u, 0x79A588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A588u;
label_79a588:
    // 0x79a588: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x79A588u;
    {
        const bool branch_taken_0x79a588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A588u;
        // 0x79a58c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a588) {
            ctx->pc = 0x79A64Cu;
            goto label_79a64c;
        }
    }
    ctx->pc = 0x79A590u;
label_79a590:
    // 0x79a590: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x79a590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x79a594: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a594u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a598: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x79a598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x79a59c: 0x24a5b4a0  addiu       $a1, $a1, -0x4B60
    ctx->pc = 0x79a59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948000));
    // 0x79a5a0: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x79A5A0u;
    SET_GPR_U32(ctx, 31, 0x79A5A8u);
    ctx->pc = 0x79A5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5A0u;
    // 0x79a5a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x79A5A0u, 0x79A5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5A8u;
label_79a5a8:
    // 0x79a5a8: 0xc0600c4  jal         func_180310
    ctx->pc = 0x79A5A8u;
    SET_GPR_U32(ctx, 31, 0x79A5B0u);
    ctx->pc = 0x79A5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5A8u;
    // 0x79a5ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180310u, 0x79A5A8u, 0x79A5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5B0u;
label_79a5b0:
    // 0x79a5b0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x79A5B0u;
    {
        const bool branch_taken_0x79a5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5B0u;
        // 0x79a5b4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5b0) {
            ctx->pc = 0x79A64Cu;
            goto label_79a64c;
        }
    }
    ctx->pc = 0x79A5B8u;
label_79a5b8:
    // 0x79a5b8: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x79a5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x79a5bc: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a5c0: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x79a5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x79a5c4: 0x24a5b4a0  addiu       $a1, $a1, -0x4B60
    ctx->pc = 0x79a5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948000));
    // 0x79a5c8: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x79A5C8u;
    SET_GPR_U32(ctx, 31, 0x79A5D0u);
    ctx->pc = 0x79A5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5C8u;
    // 0x79a5cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x79A5C8u, 0x79A5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5D0u;
label_79a5d0:
    // 0x79a5d0: 0xc0600e2  jal         func_180388
    ctx->pc = 0x79A5D0u;
    SET_GPR_U32(ctx, 31, 0x79A5D8u);
    ctx->pc = 0x79A5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5D0u;
    // 0x79a5d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180388u, 0x79A5D0u, 0x79A5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5D8u;
label_79a5d8:
    // 0x79a5d8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x79A5D8u;
    {
        const bool branch_taken_0x79a5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5D8u;
        // 0x79a5dc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5d8) {
            ctx->pc = 0x79A64Cu;
            goto label_79a64c;
        }
    }
    ctx->pc = 0x79A5E0u;
label_79a5e0:
    // 0x79a5e0: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x79a5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x79a5e4: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a5e8: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x79a5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x79a5ec: 0x24a5b4a0  addiu       $a1, $a1, -0x4B60
    ctx->pc = 0x79a5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948000));
    // 0x79a5f0: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x79A5F0u;
    SET_GPR_U32(ctx, 31, 0x79A5F8u);
    ctx->pc = 0x79A5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5F0u;
    // 0x79a5f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x79A5F0u, 0x79A5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5F8u;
label_79a5f8:
    // 0x79a5f8: 0xc0600ce  jal         func_180338
    ctx->pc = 0x79A5F8u;
    SET_GPR_U32(ctx, 31, 0x79A600u);
    ctx->pc = 0x79A5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5F8u;
    // 0x79a5fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180338u, 0x79A5F8u, 0x79A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A600u;
label_79a600:
    // 0x79a600: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x79A600u;
    {
        const bool branch_taken_0x79a600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A600u;
        // 0x79a604: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a600) {
            ctx->pc = 0x79A64Cu;
            goto label_79a64c;
        }
    }
    ctx->pc = 0x79A608u;
label_79a608:
    // 0x79a608: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x79a608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x79a60c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a60cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a610: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x79a610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x79a614: 0x24a5b4a0  addiu       $a1, $a1, -0x4B60
    ctx->pc = 0x79a614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948000));
    // 0x79a618: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x79A618u;
    SET_GPR_U32(ctx, 31, 0x79A620u);
    ctx->pc = 0x79A61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A618u;
    // 0x79a61c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x79A618u, 0x79A620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A620u;
label_79a620:
    // 0x79a620: 0xc060110  jal         func_180440
    ctx->pc = 0x79A620u;
    SET_GPR_U32(ctx, 31, 0x79A628u);
    ctx->pc = 0x79A624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A620u;
    // 0x79a624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180440u, 0x79A620u, 0x79A628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A628u;
label_79a628:
    // 0x79a628: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x79A628u;
    {
        const bool branch_taken_0x79a628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A628u;
        // 0x79a62c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a628) {
            ctx->pc = 0x79A64Cu;
            goto label_79a64c;
        }
    }
    ctx->pc = 0x79A630u;
label_79a630:
    // 0x79a630: 0xc06016a  jal         func_1805A8
    ctx->pc = 0x79A630u;
    SET_GPR_U32(ctx, 31, 0x79A638u);
    ctx->pc = 0x79A634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A630u;
    // 0x79a634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1805A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1805A8u, 0x79A630u, 0x79A638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A638u;
label_79a638:
    // 0x79a638: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79A638u;
    {
        const bool branch_taken_0x79a638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A638u;
        // 0x79a63c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a638) {
            ctx->pc = 0x79A64Cu;
            goto label_79a64c;
        }
    }
    ctx->pc = 0x79A640u;
label_79a640:
    // 0x79a640: 0xc060192  jal         func_180648
    ctx->pc = 0x79A640u;
    SET_GPR_U32(ctx, 31, 0x79A648u);
    ctx->pc = 0x79A644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A640u;
    // 0x79a644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180648u, 0x79A640u, 0x79A648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A648u;
label_79a648:
    // 0x79a648: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79a648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_79a64c:
    // 0x79a64c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79a64cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a654: 0x3e00008  jr          $ra
    ctx->pc = 0x79A654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A654u;
        // 0x79a658: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A65Cu;
    // 0x79a65c: 0x0  nop
    ctx->pc = 0x79a65cu;
    // NOP
    ctx->pc = 0x79a660u;
}
} // namespace gh_r604
