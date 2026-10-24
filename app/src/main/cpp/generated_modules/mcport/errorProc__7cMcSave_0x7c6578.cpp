#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: errorProc__7cMcSave
// Address: 0x7c6578 - 0x7c67d8
void errorProc__7cMcSave_0x7c6578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("errorProc__7cMcSave_0x7c6578");
#endif

    switch (ctx->pc) {
        case 0x7c65e8u: goto label_7c65e8;
        case 0x7c65f8u: goto label_7c65f8;
        case 0x7c666cu: goto label_7c666c;
        case 0x7c66dcu: goto label_7c66dc;
        case 0x7c671cu: goto label_7c671c;
        case 0x7c6770u: goto label_7c6770;
        case 0x7c6798u: goto label_7c6798;
        case 0x7c67b0u: goto label_7c67b0;
        default: break;
    }

    ctx->pc = 0x7c6578u;

    // 0x7c6578: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7c6578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7c657c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7c657cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7c6580: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7c6580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7c6584: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x7c6584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c6588: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7c6588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7c658c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c658cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6590: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x7c6590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x7c6594: 0x10700039  beq         $v1, $s0, . + 4 + (0x39 << 2)
    ctx->pc = 0x7C6594u;
    {
        const bool branch_taken_0x7c6594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x7C6598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6594u;
        // 0x7c6598: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6594) {
            ctx->pc = 0x7C667Cu;
            goto label_7c667c;
        }
    }
    ctx->pc = 0x7C659Cu;
    // 0x7c659c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C659Cu;
    {
        const bool branch_taken_0x7c659c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c659c) {
            ctx->pc = 0x7C65A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C659Cu;
            // 0x7c65a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C65B4u;
            goto label_7c65b4;
        }
    }
    ctx->pc = 0x7C65A4u;
    // 0x7c65a4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x7C65A4u;
    {
        const bool branch_taken_0x7c65a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C65A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C65A4u;
        // 0x7c65a8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c65a4) {
            ctx->pc = 0x7C65CCu;
            goto label_7c65cc;
        }
    }
    ctx->pc = 0x7C65ACu;
    // 0x7c65ac: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x7C65ACu;
    {
        const bool branch_taken_0x7c65ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C65B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C65ACu;
        // 0x7c65b0: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c65ac) {
            ctx->pc = 0x7C67CCu;
            goto label_7c67cc;
        }
    }
    ctx->pc = 0x7C65B4u;
label_7c65b4:
    // 0x7c65b4: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x7C65B4u;
    {
        const bool branch_taken_0x7c65b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C65B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C65B4u;
        // 0x7c65b8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c65b4) {
            ctx->pc = 0x7C66BCu;
            goto label_7c66bc;
        }
    }
    ctx->pc = 0x7C65BCu;
    // 0x7c65bc: 0x10620079  beq         $v1, $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x7C65BCu;
    {
        const bool branch_taken_0x7c65bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C65C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C65BCu;
        // 0x7c65c0: 0x3c04007d  lui         $a0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c65bc) {
            ctx->pc = 0x7C67A4u;
            goto label_7c67a4;
        }
    }
    ctx->pc = 0x7C65C4u;
    // 0x7c65c4: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x7C65C4u;
    {
        const bool branch_taken_0x7c65c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C65C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C65C4u;
        // 0x7c65c8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c65c4) {
            ctx->pc = 0x7C67C8u;
            goto label_7c67c8;
        }
    }
    ctx->pc = 0x7C65CCu;
label_7c65cc:
    // 0x7c65cc: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x7c65ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x7c65d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7c65d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c65d4: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7C65D4u;
    {
        const bool branch_taken_0x7c65d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C65D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C65D4u;
        // 0x7c65d8: 0xa220000c  sb          $zero, 0xC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c65d4) {
            ctx->pc = 0x7C6604u;
            goto label_7c6604;
        }
    }
    ctx->pc = 0x7C65DCu;
    // 0x7c65dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x7c65dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c65e0: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x7c65e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x7c65e4: 0x0  nop
    ctx->pc = 0x7c65e4u;
    // NOP
label_7c65e8:
    // 0x7c65e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c65e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c65ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7c65ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c65f0: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C65F0u;
    SET_GPR_U32(ctx, 31, 0x7C65F8u);
    ctx->pc = 0x7C65F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C65F0u;
    // 0x7c65f4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C65F0u, 0x7C65F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C65F8u;
label_7c65f8:
    // 0x7c65f8: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x7c65f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x7c65fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7C65FCu;
    {
        const bool branch_taken_0x7c65fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C6600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C65FCu;
        // 0x7c6600: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c65fc) {
            ctx->pc = 0x7C65E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c65e8;
        }
    }
    ctx->pc = 0x7C6604u;
label_7c6604:
    // 0x7c6604: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x7c6604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x7c6608: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7c6608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c660c: 0xae2300f4  sw          $v1, 0xF4($s1)
    ctx->pc = 0x7c660cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 3));
    // 0x7c6610: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x7c6610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x7c6614: 0x2c830007  sltiu       $v1, $a0, 0x7
    ctx->pc = 0x7c6614u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x7c6618: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x7C6618u;
    {
        const bool branch_taken_0x7c6618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6618u;
        // 0x7c661c: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6618) {
            ctx->pc = 0x7C6674u;
            goto label_7c6674;
        }
    }
    ctx->pc = 0x7C6620u;
    // 0x7c6620: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x7c6620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x7c6624: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x7c6624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
    // 0x7c6628: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7c6628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7c662c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7c662cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c6630: 0x800008  jr          $a0
    ctx->pc = 0x7C6630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7C6638u: goto label_7c6638;
            case 0x7C6644u: goto label_7c6644;
            case 0x7C6650u: goto label_7c6650;
            case 0x7C665Cu: goto label_7c665c;
            case 0x7C6674u: goto label_7c6674;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C6630u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7C6638u;
label_7c6638:
    // 0x7c6638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c6638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c663c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x7C663Cu;
    {
        const bool branch_taken_0x7c663c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C6640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C663Cu;
        // 0x7c6640: 0x24100013  addiu       $s0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c663c) {
            ctx->pc = 0x7C6664u;
            goto label_7c6664;
        }
    }
    ctx->pc = 0x7C6644u;
label_7c6644:
    // 0x7c6644: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c6644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6648: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x7C6648u;
    {
        const bool branch_taken_0x7c6648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6648u;
        // 0x7c664c: 0x2410000f  addiu       $s0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6648) {
            ctx->pc = 0x7C6664u;
            goto label_7c6664;
        }
    }
    ctx->pc = 0x7C6650u;
label_7c6650:
    // 0x7c6650: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c6650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6654: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7C6654u;
    {
        const bool branch_taken_0x7c6654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C6658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6654u;
        // 0x7c6658: 0x2410000e  addiu       $s0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6654) {
            ctx->pc = 0x7C6664u;
            goto label_7c6664;
        }
    }
    ctx->pc = 0x7C665Cu;
label_7c665c:
    // 0x7c665c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c665cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6660: 0x2410000d  addiu       $s0, $zero, 0xD
    ctx->pc = 0x7c6660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_7c6664:
    // 0x7c6664: 0xc1f1eb8  jal         func_7C7AE0
    ctx->pc = 0x7C6664u;
    SET_GPR_U32(ctx, 31, 0x7C666Cu);
    ctx->pc = 0x7C7AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7AE0u, 0x7C6664u, 0x7C666Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C666Cu;
label_7c666c:
    // 0x7c666c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7C666Cu;
    {
        const bool branch_taken_0x7c666c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C6670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C666Cu;
        // 0x7c6670: 0xae300078  sw          $s0, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c666c) {
            ctx->pc = 0x7C667Cu;
            goto label_7c667c;
        }
    }
    ctx->pc = 0x7C6674u;
label_7c6674:
    // 0x7c6674: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x7c6674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7c6678: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x7c6678u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
label_7c667c:
    // 0x7c667c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7c667cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x7c6680: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x7c6680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x7c6684: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x7c6684u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x747640u));
    // 0x7c6688: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x7c6688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x7c668c: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x7C668Cu;
    {
        const bool branch_taken_0x7c668c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C6690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C668Cu;
        // 0x7c6690: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c668c) {
            ctx->pc = 0x7C67C8u;
            goto label_7c67c8;
        }
    }
    ctx->pc = 0x7C6694u;
    // 0x7c6694: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x7c6694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x7c6698: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x7c6698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x7c669c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7C669Cu;
    {
        const bool branch_taken_0x7c669c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C66A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C669Cu;
        // 0x7c66a0: 0xa220000c  sb          $zero, 0xC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c669c) {
            ctx->pc = 0x7C66B0u;
            goto label_7c66b0;
        }
    }
    ctx->pc = 0x7C66A4u;
    // 0x7c66a4: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x7c66a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x7c66a8: 0x50400044  beql        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x7C66A8u;
    {
        const bool branch_taken_0x7c66a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c66a8) {
            ctx->pc = 0x7C66ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C66A8u;
            // 0x7c66ac: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C67BCu;
            goto label_7c67bc;
        }
    }
    ctx->pc = 0x7C66B0u;
label_7c66b0:
    // 0x7c66b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x7c66b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7c66b4: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x7C66B4u;
    {
        const bool branch_taken_0x7c66b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C66B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C66B4u;
        // 0x7c66b8: 0xae2200f4  sw          $v0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c66b4) {
            ctx->pc = 0x7C67C4u;
            goto label_7c67c4;
        }
    }
    ctx->pc = 0x7C66BCu;
label_7c66bc:
    // 0x7c66bc: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x7c66bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x7c66c0: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C66C0u;
    {
        const bool branch_taken_0x7c66c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x7C66C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C66C0u;
        // 0x7c66c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c66c0) {
            ctx->pc = 0x7C66D0u;
            goto label_7c66d0;
        }
    }
    ctx->pc = 0x7C66C8u;
    // 0x7c66c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7C66C8u;
    {
        const bool branch_taken_0x7c66c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C66CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C66C8u;
        // 0x7c66cc: 0x24100010  addiu       $s0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c66c8) {
            ctx->pc = 0x7C66D4u;
            goto label_7c66d4;
        }
    }
    ctx->pc = 0x7C66D0u;
label_7c66d0:
    // 0x7c66d0: 0x24100015  addiu       $s0, $zero, 0x15
    ctx->pc = 0x7c66d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_7c66d4:
    // 0x7c66d4: 0xc1f1eb8  jal         func_7C7AE0
    ctx->pc = 0x7C66D4u;
    SET_GPR_U32(ctx, 31, 0x7C66DCu);
    ctx->pc = 0x7C7AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7AE0u, 0x7C66D4u, 0x7C66DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C66DCu;
label_7c66dc:
    // 0x7c66dc: 0xae300078  sw          $s0, 0x78($s1)
    ctx->pc = 0x7c66dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 16));
    // 0x7c66e0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7c66e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x7c66e4: 0x3c040c00  lui         $a0, 0xC00
    ctx->pc = 0x7c66e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3072 << 16));
    // 0x7c66e8: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x7c66e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x7c66ec: 0xdc4301b0  ld          $v1, 0x1B0($v0)
    ctx->pc = 0x7c66ecu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x747650u));
    // 0x7c66f0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x7c66f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x7c66f4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x7C66F4u;
    {
        const bool branch_taken_0x7c66f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C66F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C66F4u;
        // 0x7c66f8: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c66f4) {
            ctx->pc = 0x7C6730u;
            goto label_7c6730;
        }
    }
    ctx->pc = 0x7C66FCu;
    // 0x7c66fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c66fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6700: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7c6700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c6704: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x7c6704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x7c6708: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c6708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c670c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7c670cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c6710: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c6710u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6714: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7C6714u;
    SET_GPR_U32(ctx, 31, 0x7C671Cu);
    ctx->pc = 0x7C6718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C6714u;
    // 0x7c6718: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7C6714u, 0x7C671Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C671Cu;
label_7c671c:
    // 0x7c671c: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x7c671cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x7c6720: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x7c6720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x7c6724: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x7c6724u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x7c6728: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x7C6728u;
    {
        const bool branch_taken_0x7c6728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6728u;
        // 0x7c672c: 0xa223000c  sb          $v1, 0xC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6728) {
            ctx->pc = 0x7C67C4u;
            goto label_7c67c4;
        }
    }
    ctx->pc = 0x7C6730u;
label_7c6730:
    // 0x7c6730: 0xdc4201a0  ld          $v0, 0x1A0($v0)
    ctx->pc = 0x7c6730u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x7c6734: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x7c6734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x7c6738: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7c6738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7c673c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x7C673Cu;
    {
        const bool branch_taken_0x7c673c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C6740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C673Cu;
        // 0x7c6740: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c673c) {
            ctx->pc = 0x7C67C4u;
            goto label_7c67c4;
        }
    }
    ctx->pc = 0x7C6744u;
    // 0x7c6744: 0x9230000c  lbu         $s0, 0xC($s1)
    ctx->pc = 0x7c6744u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x7c6748: 0x1602000b  bne         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7C6748u;
    {
        const bool branch_taken_0x7c6748 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6748u;
        // 0x7c674c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6748) {
            ctx->pc = 0x7C6778u;
            goto label_7c6778;
        }
    }
    ctx->pc = 0x7C6750u;
    // 0x7c6750: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c6750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6754: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7c6754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c6758: 0x24060160  addiu       $a2, $zero, 0x160
    ctx->pc = 0x7c6758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x7c675c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c675cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c6760: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7c6760u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c6764: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c6764u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6768: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7C6768u;
    SET_GPR_U32(ctx, 31, 0x7C6770u);
    ctx->pc = 0x7C676Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C6768u;
    // 0x7c676c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7C6768u, 0x7C6770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C6770u;
label_7c6770:
    // 0x7c6770: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x7C6770u;
    {
        const bool branch_taken_0x7c6770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C6774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6770u;
        // 0x7c6774: 0xa2300000  sb          $s0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6770) {
            ctx->pc = 0x7C67C4u;
            goto label_7c67c4;
        }
    }
    ctx->pc = 0x7C6778u;
label_7c6778:
    // 0x7c6778: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c6778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c677c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7c677cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c6780: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x7c6780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x7c6784: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c6784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c6788: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7c6788u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c678c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c678cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6790: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7C6790u;
    SET_GPR_U32(ctx, 31, 0x7C6798u);
    ctx->pc = 0x7C6794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C6790u;
    // 0x7c6794: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7C6790u, 0x7C6798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C6798u;
label_7c6798:
    // 0x7c6798: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x7c6798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7c679c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x7C679Cu;
    {
        const bool branch_taken_0x7c679c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C67A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C679Cu;
        // 0x7c67a0: 0xae2300f4  sw          $v1, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c679c) {
            ctx->pc = 0x7C67C4u;
            goto label_7c67c4;
        }
    }
    ctx->pc = 0x7C67A4u;
label_7c67a4:
    // 0x7c67a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c67a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c67a8: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C67A8u;
    SET_GPR_U32(ctx, 31, 0x7C67B0u);
    ctx->pc = 0x7C67ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C67A8u;
    // 0x7c67ac: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C67A8u, 0x7C67B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C67B0u;
label_7c67b0:
    // 0x7c67b0: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C67B0u;
    {
        const bool branch_taken_0x7c67b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x7C67B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C67B0u;
        // 0x7c67b4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c67b0) {
            ctx->pc = 0x7C67C8u;
            goto label_7c67c8;
        }
    }
    ctx->pc = 0x7C67B8u;
    // 0x7c67b8: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c67b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
label_7c67bc:
    // 0x7c67bc: 0xae2000f0  sw          $zero, 0xF0($s1)
    ctx->pc = 0x7c67bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
    // 0x7c67c0: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x7c67c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
label_7c67c4:
    // 0x7c67c4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7c67c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_7c67c8:
    // 0x7c67c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7c67c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7c67cc:
    // 0x7c67cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c67ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c67d0: 0x3e00008  jr          $ra
    ctx->pc = 0x7C67D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C67D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C67D0u;
        // 0x7c67d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C67D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C67D8u;
}
} // namespace gh_mcport
