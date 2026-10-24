#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: func_007A8550
// Address: 0x7a8550 - 0x7a8838
void func_007A8550_0x7a8550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007A8550_0x7a8550");
#endif

    switch (ctx->pc) {
        case 0x7a860cu: goto label_7a860c;
        case 0x7a8658u: goto label_7a8658;
        case 0x7a86a4u: goto label_7a86a4;
        case 0x7a86f0u: goto label_7a86f0;
        case 0x7a873cu: goto label_7a873c;
        case 0x7a8798u: goto label_7a8798;
        case 0x7a87ccu: goto label_7a87cc;
        default: break;
    }

    ctx->pc = 0x7a8550u;

    // 0x7a8550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7a8550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7a8554: 0x3c02007b  lui         $v0, 0x7B
    ctx->pc = 0x7a8554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
    // 0x7a8558: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7a8558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7a855c: 0x8c435280  lw          $v1, 0x5280($v0)
    ctx->pc = 0x7a855cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7B5280u));
    // 0x7a8560: 0x3410ffff  ori         $s0, $zero, 0xFFFF
    ctx->pc = 0x7a8560u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x7a8564: 0x24020603  addiu       $v0, $zero, 0x603
    ctx->pc = 0x7a8564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1539));
    // 0x7a8568: 0x1082004b  beq         $a0, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x7A8568u;
    {
        const bool branch_taken_0x7a8568 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8568u;
        // 0x7a856c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8568) {
            ctx->pc = 0x7A8698u;
            goto label_7a8698;
        }
    }
    ctx->pc = 0x7A8570u;
    // 0x7a8570: 0x28820604  slti        $v0, $a0, 0x604
    ctx->pc = 0x7a8570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1540) ? 1 : 0);
    // 0x7a8574: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x7A8574u;
    {
        const bool branch_taken_0x7a8574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8574u;
        // 0x7a8578: 0x240202a0  addiu       $v0, $zero, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8574) {
            ctx->pc = 0x7A85B8u;
            goto label_7a85b8;
        }
    }
    ctx->pc = 0x7A857Cu;
    // 0x7a857c: 0x108200a3  beq         $a0, $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x7A857Cu;
    {
        const bool branch_taken_0x7a857c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A8580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A857Cu;
        // 0x7a8580: 0x288202a1  slti        $v0, $a0, 0x2A1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)673) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a857c) {
            ctx->pc = 0x7A880Cu;
            goto label_7a880c;
        }
    }
    ctx->pc = 0x7A8584u;
    // 0x7a8584: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7A8584u;
    {
        const bool branch_taken_0x7a8584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8584u;
        // 0x7a8588: 0x24020276  addiu       $v0, $zero, 0x276 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8584) {
            ctx->pc = 0x7A859Cu;
            goto label_7a859c;
        }
    }
    ctx->pc = 0x7A858Cu;
    // 0x7a858c: 0x108200a3  beq         $a0, $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x7A858Cu;
    {
        const bool branch_taken_0x7a858c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A8590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A858Cu;
        // 0x7a8590: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a858c) {
            ctx->pc = 0x7A881Cu;
            goto label_7a881c;
        }
    }
    ctx->pc = 0x7A8594u;
    // 0x7a8594: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x7A8594u;
    {
        const bool branch_taken_0x7a8594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8594u;
        // 0x7a8598: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8594) {
            ctx->pc = 0x7A8828u;
            goto label_7a8828;
        }
    }
    ctx->pc = 0x7A859Cu;
label_7a859c:
    // 0x7a859c: 0x24020600  addiu       $v0, $zero, 0x600
    ctx->pc = 0x7a859cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x7a85a0: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x7A85A0u;
    {
        const bool branch_taken_0x7a85a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A85A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A85A0u;
        // 0x7a85a4: 0x24020602  addiu       $v0, $zero, 0x602 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1538));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a85a0) {
            ctx->pc = 0x7A8600u;
            goto label_7a8600;
        }
    }
    ctx->pc = 0x7A85A8u;
    // 0x7a85a8: 0x10820028  beq         $a0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x7A85A8u;
    {
        const bool branch_taken_0x7a85a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A85ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A85A8u;
        // 0x7a85ac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a85a8) {
            ctx->pc = 0x7A864Cu;
            goto label_7a864c;
        }
    }
    ctx->pc = 0x7A85B0u;
    // 0x7a85b0: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x7A85B0u;
    {
        const bool branch_taken_0x7a85b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A85B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A85B0u;
        // 0x7a85b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a85b0) {
            ctx->pc = 0x7A8828u;
            goto label_7a8828;
        }
    }
    ctx->pc = 0x7A85B8u;
label_7a85b8:
    // 0x7a85b8: 0x2402060a  addiu       $v0, $zero, 0x60A
    ctx->pc = 0x7a85b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1546));
    // 0x7a85bc: 0x1082006f  beq         $a0, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x7A85BCu;
    {
        const bool branch_taken_0x7a85bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A85C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A85BCu;
        // 0x7a85c0: 0x2882060b  slti        $v0, $a0, 0x60B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1547) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a85bc) {
            ctx->pc = 0x7A877Cu;
            goto label_7a877c;
        }
    }
    ctx->pc = 0x7A85C4u;
    // 0x7a85c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7A85C4u;
    {
        const bool branch_taken_0x7a85c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A85C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A85C4u;
        // 0x7a85c8: 0x24020605  addiu       $v0, $zero, 0x605 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1541));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a85c4) {
            ctx->pc = 0x7A85E4u;
            goto label_7a85e4;
        }
    }
    ctx->pc = 0x7A85CCu;
    // 0x7a85cc: 0x10820045  beq         $a0, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x7A85CCu;
    {
        const bool branch_taken_0x7a85cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A85D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A85CCu;
        // 0x7a85d0: 0x24020607  addiu       $v0, $zero, 0x607 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1543));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a85cc) {
            ctx->pc = 0x7A86E4u;
            goto label_7a86e4;
        }
    }
    ctx->pc = 0x7A85D4u;
    // 0x7a85d4: 0x10820056  beq         $a0, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x7A85D4u;
    {
        const bool branch_taken_0x7a85d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A85D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A85D4u;
        // 0x7a85d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a85d4) {
            ctx->pc = 0x7A8730u;
            goto label_7a8730;
        }
    }
    ctx->pc = 0x7A85DCu;
    // 0x7a85dc: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x7A85DCu;
    {
        const bool branch_taken_0x7a85dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A85E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A85DCu;
        // 0x7a85e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a85dc) {
            ctx->pc = 0x7A8828u;
            goto label_7a8828;
        }
    }
    ctx->pc = 0x7A85E4u;
label_7a85e4:
    // 0x7a85e4: 0x24020625  addiu       $v0, $zero, 0x625
    ctx->pc = 0x7a85e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1573));
    // 0x7a85e8: 0x10820071  beq         $a0, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x7A85E8u;
    {
        const bool branch_taken_0x7a85e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A85ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A85E8u;
        // 0x7a85ec: 0x24020652  addiu       $v0, $zero, 0x652 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1618));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a85e8) {
            ctx->pc = 0x7A87B0u;
            goto label_7a87b0;
        }
    }
    ctx->pc = 0x7A85F0u;
    // 0x7a85f0: 0x10820073  beq         $a0, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x7A85F0u;
    {
        const bool branch_taken_0x7a85f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A85F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A85F0u;
        // 0x7a85f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a85f0) {
            ctx->pc = 0x7A87C0u;
            goto label_7a87c0;
        }
    }
    ctx->pc = 0x7A85F8u;
    // 0x7a85f8: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x7A85F8u;
    {
        const bool branch_taken_0x7a85f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A85FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A85F8u;
        // 0x7a85fc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a85f8) {
            ctx->pc = 0x7A8828u;
            goto label_7a8828;
        }
    }
    ctx->pc = 0x7A8600u;
label_7a8600:
    // 0x7a8600: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x7a8600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x7a8604: 0xc07f02a  jal         func_1FC0A8
    ctx->pc = 0x7A8604u;
    SET_GPR_U32(ctx, 31, 0x7A860Cu);
    ctx->pc = 0x7A8608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A8604u;
    // 0x7a8608: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x7A8604u, 0x7A860Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A860Cu;
label_7a860c:
    // 0x7a860c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7a860cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a8610: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x7a8610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x7a8614: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x7A8614u;
    {
        const bool branch_taken_0x7a8614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8614u;
        // 0x7a8618: 0x3c02007b  lui         $v0, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8614) {
            ctx->pc = 0x7A8820u;
            goto label_7a8820;
        }
    }
    ctx->pc = 0x7A861Cu;
    // 0x7a861c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7a861cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7a8620: 0x24424b90  addiu       $v0, $v0, 0x4B90
    ctx->pc = 0x7a8620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19344));
    // 0x7a8624: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7a8624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7a8628: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7a8628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7a862c: 0x800008  jr          $a0
    ctx->pc = 0x7A862Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7A8634u: goto label_7a8634;
            case 0x7A863Cu: goto label_7a863c;
            case 0x7A8644u: goto label_7a8644;
            case 0x7A8820u: goto label_7a8820;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A862Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7A8634u;
label_7a8634:
    // 0x7a8634: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x7A8634u;
    {
        const bool branch_taken_0x7a8634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8634u;
        // 0x7a8638: 0x241006f0  addiu       $s0, $zero, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8634) {
            ctx->pc = 0x7A8820u;
            goto label_7a8820;
        }
    }
    ctx->pc = 0x7A863Cu;
label_7a863c:
    // 0x7a863c: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x7A863Cu;
    {
        const bool branch_taken_0x7a863c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A863Cu;
        // 0x7a8640: 0x241006f2  addiu       $s0, $zero, 0x6F2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1778));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a863c) {
            ctx->pc = 0x7A8820u;
            goto label_7a8820;
        }
    }
    ctx->pc = 0x7A8644u;
label_7a8644:
    // 0x7a8644: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x7A8644u;
    {
        const bool branch_taken_0x7a8644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8644u;
        // 0x7a8648: 0x241006f6  addiu       $s0, $zero, 0x6F6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1782));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8644) {
            ctx->pc = 0x7A8820u;
            goto label_7a8820;
        }
    }
    ctx->pc = 0x7A864Cu;
label_7a864c:
    // 0x7a864c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x7a864cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x7a8650: 0xc07f02a  jal         func_1FC0A8
    ctx->pc = 0x7A8650u;
    SET_GPR_U32(ctx, 31, 0x7A8658u);
    ctx->pc = 0x7A8654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A8650u;
    // 0x7a8654: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x7A8650u, 0x7A8658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A8658u;
label_7a8658:
    // 0x7a8658: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7a8658u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a865c: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x7a865cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x7a8660: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x7A8660u;
    {
        const bool branch_taken_0x7a8660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8660u;
        // 0x7a8664: 0x3c02007b  lui         $v0, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8660) {
            ctx->pc = 0x7A8820u;
            goto label_7a8820;
        }
    }
    ctx->pc = 0x7A8668u;
    // 0x7a8668: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7a8668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7a866c: 0x24424bb0  addiu       $v0, $v0, 0x4BB0
    ctx->pc = 0x7a866cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19376));
    // 0x7a8670: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7a8670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7a8674: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7a8674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7a8678: 0x800008  jr          $a0
    ctx->pc = 0x7A8678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7A8680u: goto label_7a8680;
            case 0x7A8688u: goto label_7a8688;
            case 0x7A8690u: goto label_7a8690;
            case 0x7A8820u: goto label_7a8820;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A8678u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7A8680u;
label_7a8680:
    // 0x7a8680: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x7A8680u;
    {
        const bool branch_taken_0x7a8680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8680u;
        // 0x7a8684: 0x241006f1  addiu       $s0, $zero, 0x6F1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1777));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8680) {
            ctx->pc = 0x7A8820u;
            goto label_7a8820;
        }
    }
    ctx->pc = 0x7A8688u;
label_7a8688:
    // 0x7a8688: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x7A8688u;
    {
        const bool branch_taken_0x7a8688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8688u;
        // 0x7a868c: 0x241006f3  addiu       $s0, $zero, 0x6F3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1779));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8688) {
            ctx->pc = 0x7A8820u;
            goto label_7a8820;
        }
    }
    ctx->pc = 0x7A8690u;
label_7a8690:
    // 0x7a8690: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x7A8690u;
    {
        const bool branch_taken_0x7a8690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8690u;
        // 0x7a8694: 0x241006f7  addiu       $s0, $zero, 0x6F7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1783));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8690) {
            ctx->pc = 0x7A8820u;
            goto label_7a8820;
        }
    }
    ctx->pc = 0x7A8698u;
label_7a8698:
    // 0x7a8698: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x7a8698u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x7a869c: 0xc07f02a  jal         func_1FC0A8
    ctx->pc = 0x7A869Cu;
    SET_GPR_U32(ctx, 31, 0x7A86A4u);
    ctx->pc = 0x7A86A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A869Cu;
    // 0x7a86a0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x7A869Cu, 0x7A86A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A86A4u;
label_7a86a4:
    // 0x7a86a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7a86a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a86a8: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x7a86a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x7a86ac: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x7A86ACu;
    {
        const bool branch_taken_0x7a86ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A86B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A86ACu;
        // 0x7a86b0: 0x3c02007b  lui         $v0, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a86ac) {
            ctx->pc = 0x7A8820u;
            goto label_7a8820;
        }
    }
    ctx->pc = 0x7A86B4u;
    // 0x7a86b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7a86b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7a86b8: 0x24424bd0  addiu       $v0, $v0, 0x4BD0
    ctx->pc = 0x7a86b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19408));
    // 0x7a86bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7a86bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7a86c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7a86c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7a86c4: 0x800008  jr          $a0
    ctx->pc = 0x7A86C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7A86CCu: goto label_7a86cc;
            case 0x7A86D4u: goto label_7a86d4;
            case 0x7A86DCu: goto label_7a86dc;
            case 0x7A8820u: goto label_7a8820;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A86C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7A86CCu;
label_7a86cc:
    // 0x7a86cc: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x7A86CCu;
    {
        const bool branch_taken_0x7a86cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A86D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A86CCu;
        // 0x7a86d0: 0x2410069a  addiu       $s0, $zero, 0x69A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1690));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a86cc) {
            ctx->pc = 0x7A8820u;
            goto label_7a8820;
        }
    }
    ctx->pc = 0x7A86D4u;
label_7a86d4:
    // 0x7a86d4: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x7A86D4u;
    {
        const bool branch_taken_0x7a86d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A86D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A86D4u;
        // 0x7a86d8: 0x2410069b  addiu       $s0, $zero, 0x69B (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1691));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a86d4) {
            ctx->pc = 0x7A8820u;
            goto label_7a8820;
        }
    }
    ctx->pc = 0x7A86DCu;
label_7a86dc:
    // 0x7a86dc: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x7A86DCu;
    {
        const bool branch_taken_0x7a86dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A86E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A86DCu;
        // 0x7a86e0: 0x2410069c  addiu       $s0, $zero, 0x69C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1692));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a86dc) {
            ctx->pc = 0x7A8820u;
            goto label_7a8820;
        }
    }
    ctx->pc = 0x7A86E4u;
label_7a86e4:
    // 0x7a86e4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x7a86e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x7a86e8: 0xc07f02a  jal         func_1FC0A8
    ctx->pc = 0x7A86E8u;
    SET_GPR_U32(ctx, 31, 0x7A86F0u);
    ctx->pc = 0x7A86ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A86E8u;
    // 0x7a86ec: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x7A86E8u, 0x7A86F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A86F0u;
label_7a86f0:
    // 0x7a86f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7a86f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a86f4: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x7a86f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x7a86f8: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x7A86F8u;
    {
        const bool branch_taken_0x7a86f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A86FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A86F8u;
        // 0x7a86fc: 0x3c02007b  lui         $v0, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a86f8) {
            ctx->pc = 0x7A8820u;
            goto label_7a8820;
        }
    }
    ctx->pc = 0x7A8700u;
    // 0x7a8700: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7a8700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7a8704: 0x24424bf0  addiu       $v0, $v0, 0x4BF0
    ctx->pc = 0x7a8704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19440));
    // 0x7a8708: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7a8708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7a870c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7a870cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7a8710: 0x800008  jr          $a0
    ctx->pc = 0x7A8710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7A8718u: goto label_7a8718;
            case 0x7A8720u: goto label_7a8720;
            case 0x7A8728u: goto label_7a8728;
            case 0x7A8820u: goto label_7a8820;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A8710u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7A8718u;
label_7a8718:
    // 0x7a8718: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x7A8718u;
    {
        const bool branch_taken_0x7a8718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8718u;
        // 0x7a871c: 0x24100690  addiu       $s0, $zero, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8718) {
            ctx->pc = 0x7A8820u;
            goto label_7a8820;
        }
    }
    ctx->pc = 0x7A8720u;
label_7a8720:
    // 0x7a8720: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x7A8720u;
    {
        const bool branch_taken_0x7a8720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8720u;
        // 0x7a8724: 0x24100693  addiu       $s0, $zero, 0x693 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1683));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8720) {
            ctx->pc = 0x7A8820u;
            goto label_7a8820;
        }
    }
    ctx->pc = 0x7A8728u;
label_7a8728:
    // 0x7a8728: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x7A8728u;
    {
        const bool branch_taken_0x7a8728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8728u;
        // 0x7a872c: 0x24100696  addiu       $s0, $zero, 0x696 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1686));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8728) {
            ctx->pc = 0x7A8820u;
            goto label_7a8820;
        }
    }
    ctx->pc = 0x7A8730u;
label_7a8730:
    // 0x7a8730: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x7a8730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x7a8734: 0xc07f02a  jal         func_1FC0A8
    ctx->pc = 0x7A8734u;
    SET_GPR_U32(ctx, 31, 0x7A873Cu);
    ctx->pc = 0x7A8738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A8734u;
    // 0x7a8738: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x7A8734u, 0x7A873Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A873Cu;
label_7a873c:
    // 0x7a873c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7a873cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a8740: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x7a8740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x7a8744: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x7A8744u;
    {
        const bool branch_taken_0x7a8744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8744u;
        // 0x7a8748: 0x3c02007b  lui         $v0, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8744) {
            ctx->pc = 0x7A8820u;
            goto label_7a8820;
        }
    }
    ctx->pc = 0x7A874Cu;
    // 0x7a874c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7a874cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7a8750: 0x24424c10  addiu       $v0, $v0, 0x4C10
    ctx->pc = 0x7a8750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19472));
    // 0x7a8754: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7a8754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7a8758: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7a8758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7a875c: 0x800008  jr          $a0
    ctx->pc = 0x7A875Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7A8764u: goto label_7a8764;
            case 0x7A876Cu: goto label_7a876c;
            case 0x7A8774u: goto label_7a8774;
            case 0x7A8820u: goto label_7a8820;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A875Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7A8764u;
label_7a8764:
    // 0x7a8764: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x7A8764u;
    {
        const bool branch_taken_0x7a8764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8764u;
        // 0x7a8768: 0x24100691  addiu       $s0, $zero, 0x691 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1681));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8764) {
            ctx->pc = 0x7A8820u;
            goto label_7a8820;
        }
    }
    ctx->pc = 0x7A876Cu;
label_7a876c:
    // 0x7a876c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x7A876Cu;
    {
        const bool branch_taken_0x7a876c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A876Cu;
        // 0x7a8770: 0x24100694  addiu       $s0, $zero, 0x694 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1684));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a876c) {
            ctx->pc = 0x7A8820u;
            goto label_7a8820;
        }
    }
    ctx->pc = 0x7A8774u;
label_7a8774:
    // 0x7a8774: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x7A8774u;
    {
        const bool branch_taken_0x7a8774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8774u;
        // 0x7a8778: 0x24100697  addiu       $s0, $zero, 0x697 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1687));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8774) {
            ctx->pc = 0x7A8820u;
            goto label_7a8820;
        }
    }
    ctx->pc = 0x7A877Cu;
label_7a877c:
    // 0x7a877c: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x7a877cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x7a8780: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7A8780u;
    {
        const bool branch_taken_0x7a8780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x7A8784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8780u;
        // 0x7a8784: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8780) {
            ctx->pc = 0x7A8790u;
            goto label_7a8790;
        }
    }
    ctx->pc = 0x7A8788u;
    // 0x7a8788: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x7A8788u;
    {
        const bool branch_taken_0x7a8788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8788u;
        // 0x7a878c: 0x24100609  addiu       $s0, $zero, 0x609 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1545));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8788) {
            ctx->pc = 0x7A8820u;
            goto label_7a8820;
        }
    }
    ctx->pc = 0x7A8790u;
label_7a8790:
    // 0x7a8790: 0xc07f1d0  jal         func_1FC740
    ctx->pc = 0x7A8790u;
    SET_GPR_U32(ctx, 31, 0x7A8798u);
    ctx->pc = 0x7A8794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A8790u;
    // 0x7a8794: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC740u, 0x7A8790u, 0x7A8798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A8798u;
label_7a8798:
    // 0x7a8798: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x7a8798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x7a879c: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x7A879Cu;
    {
        const bool branch_taken_0x7a879c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A87A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A879Cu;
        // 0x7a87a0: 0x38630001  xori        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a879c) {
            ctx->pc = 0x7A8820u;
            goto label_7a8820;
        }
    }
    ctx->pc = 0x7A87A4u;
    // 0x7a87a4: 0x240206f4  addiu       $v0, $zero, 0x6F4
    ctx->pc = 0x7a87a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1780));
    // 0x7a87a8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x7A87A8u;
    {
        const bool branch_taken_0x7a87a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A87ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A87A8u;
        // 0x7a87ac: 0x43800a  movz        $s0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a87a8) {
            ctx->pc = 0x7A8820u;
            goto label_7a8820;
        }
    }
    ctx->pc = 0x7A87B0u;
label_7a87b0:
    // 0x7a87b0: 0x38630034  xori        $v1, $v1, 0x34
    ctx->pc = 0x7a87b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)52);
    // 0x7a87b4: 0x2402062b  addiu       $v0, $zero, 0x62B
    ctx->pc = 0x7a87b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1579));
    // 0x7a87b8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x7A87B8u;
    {
        const bool branch_taken_0x7a87b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A87BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A87B8u;
        // 0x7a87bc: 0x43800a  movz        $s0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a87b8) {
            ctx->pc = 0x7A8820u;
            goto label_7a8820;
        }
    }
    ctx->pc = 0x7A87C0u;
label_7a87c0:
    // 0x7a87c0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x7a87c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x7a87c4: 0xc07f02a  jal         func_1FC0A8
    ctx->pc = 0x7A87C4u;
    SET_GPR_U32(ctx, 31, 0x7A87CCu);
    ctx->pc = 0x7A87C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A87C4u;
    // 0x7a87c8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x7A87C4u, 0x7A87CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A87CCu;
label_7a87cc:
    // 0x7a87cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7a87ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a87d0: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x7a87d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x7a87d4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x7A87D4u;
    {
        const bool branch_taken_0x7a87d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A87D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A87D4u;
        // 0x7a87d8: 0x3c02007b  lui         $v0, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a87d4) {
            ctx->pc = 0x7A8820u;
            goto label_7a8820;
        }
    }
    ctx->pc = 0x7A87DCu;
    // 0x7a87dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7a87dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7a87e0: 0x24424c30  addiu       $v0, $v0, 0x4C30
    ctx->pc = 0x7a87e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19504));
    // 0x7a87e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7a87e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7a87e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7a87e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7a87ec: 0x800008  jr          $a0
    ctx->pc = 0x7A87ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7A87F4u: goto label_7a87f4;
            case 0x7A87FCu: goto label_7a87fc;
            case 0x7A8804u: goto label_7a8804;
            case 0x7A8820u: goto label_7a8820;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A87ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7A87F4u;
label_7a87f4:
    // 0x7a87f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x7A87F4u;
    {
        const bool branch_taken_0x7a87f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A87F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A87F4u;
        // 0x7a87f8: 0x24100692  addiu       $s0, $zero, 0x692 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1682));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a87f4) {
            ctx->pc = 0x7A8820u;
            goto label_7a8820;
        }
    }
    ctx->pc = 0x7A87FCu;
label_7a87fc:
    // 0x7a87fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x7A87FCu;
    {
        const bool branch_taken_0x7a87fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A87FCu;
        // 0x7a8800: 0x24100695  addiu       $s0, $zero, 0x695 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1685));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a87fc) {
            ctx->pc = 0x7A8820u;
            goto label_7a8820;
        }
    }
    ctx->pc = 0x7A8804u;
label_7a8804:
    // 0x7a8804: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x7A8804u;
    {
        const bool branch_taken_0x7a8804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8804u;
        // 0x7a8808: 0x24100698  addiu       $s0, $zero, 0x698 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8804) {
            ctx->pc = 0x7A8820u;
            goto label_7a8820;
        }
    }
    ctx->pc = 0x7A880Cu;
label_7a880c:
    // 0x7a880c: 0x38630024  xori        $v1, $v1, 0x24
    ctx->pc = 0x7a880cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)36);
    // 0x7a8810: 0x240202a1  addiu       $v0, $zero, 0x2A1
    ctx->pc = 0x7a8810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
    // 0x7a8814: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7A8814u;
    {
        const bool branch_taken_0x7a8814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8814u;
        // 0x7a8818: 0x43800a  movz        $s0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8814) {
            ctx->pc = 0x7A8820u;
            goto label_7a8820;
        }
    }
    ctx->pc = 0x7A881Cu;
label_7a881c:
    // 0x7a881c: 0x2410064d  addiu       $s0, $zero, 0x64D
    ctx->pc = 0x7a881cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1613));
label_7a8820:
    // 0x7a8820: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x7a8820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a8824: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7a8824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7a8828:
    // 0x7a8828: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7a8828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7a882c: 0x3e00008  jr          $ra
    ctx->pc = 0x7A882Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A8830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A882Cu;
        // 0x7a8830: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A882Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A8834u;
    // 0x7a8834: 0x0  nop
    ctx->pc = 0x7a8834u;
    // NOP
    ctx->pc = 0x7a8838u;
}
} // namespace gh_event
