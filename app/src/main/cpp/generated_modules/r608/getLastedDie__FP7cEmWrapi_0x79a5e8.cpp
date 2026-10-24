#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r608_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r608
{
// Function: getLastedDie__FP7cEmWrapi
// Address: 0x79a5e8 - 0x79a718
void getLastedDie__FP7cEmWrapi_0x79a5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getLastedDie__FP7cEmWrapi_0x79a5e8");
#endif

    switch (ctx->pc) {
        case 0x79a650u: goto label_79a650;
        case 0x79a668u: goto label_79a668;
        case 0x79a680u: goto label_79a680;
        case 0x79a694u: goto label_79a694;
        case 0x79a6d8u: goto label_79a6d8;
        default: break;
    }

    ctx->pc = 0x79a5e8u;

    // 0x79a5e8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x79a5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x79a5ec: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x79a5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x79a5f0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x79a5f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a5f4: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x79a5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x79a5f8: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x79a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x79a5fc: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x79a5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x79a600: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x79a600u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x79a604: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x79a604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x79a608: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x79a608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x79a60c: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x79a60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x79a610: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x79a610u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x79a614: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x79a614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x79a618: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x79a618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x79a61c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x79a61cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a620: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x79a620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x79a624: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x79a624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x79a628: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x79a628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x79a62c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x79a62cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a630: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x79a630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x79a634: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x79a634u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a638: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x79a638u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x79a63c: 0x3a2e823  subu        $sp, $sp, $v0
    ctx->pc = 0x79a63cu;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x79a640: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x79a640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a644: 0x1a600008  blez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x79A644u;
    {
        const bool branch_taken_0x79a644 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x79A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A644u;
        // 0x79a648: 0x3a0b02d  daddu       $s6, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a644) {
            ctx->pc = 0x79A668u;
            goto label_79a668;
        }
    }
    ctx->pc = 0x79A64Cu;
    // 0x79a64c: 0x0  nop
    ctx->pc = 0x79a64cu;
    // NOP
label_79a650:
    // 0x79a650: 0x2c41821  addu        $v1, $s6, $a0
    ctx->pc = 0x79a650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x79a654: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x79a654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x79a658: 0x93102a  slt         $v0, $a0, $s3
    ctx->pc = 0x79a658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x79a65c: 0x0  nop
    ctx->pc = 0x79a65cu;
    // NOP
    // 0x79a660: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79A660u;
    {
        const bool branch_taken_0x79a660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A660u;
        // 0x79a664: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a660) {
            ctx->pc = 0x79A650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a650;
        }
    }
    ctx->pc = 0x79A668u;
label_79a668:
    // 0x79a668: 0x1a600014  blez        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x79A668u;
    {
        const bool branch_taken_0x79a668 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x79A66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A668u;
        // 0x79a66c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a668) {
            ctx->pc = 0x79A6BCu;
            goto label_79a6bc;
        }
    }
    ctx->pc = 0x79A670u;
    // 0x79a670: 0x8fd20000  lw          $s2, 0x0($fp)
    ctx->pc = 0x79a670u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x79a674: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x79a674u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a678: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x79a678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a67c: 0x0  nop
    ctx->pc = 0x79a67cu;
    // NOP
label_79a680:
    // 0x79a680: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x79a680u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79a684: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x79A684u;
    {
        const bool branch_taken_0x79a684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a684) {
            ctx->pc = 0x79A688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A684u;
            // 0x79a688: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A6ACu;
            goto label_79a6ac;
        }
    }
    ctx->pc = 0x79A68Cu;
    // 0x79a68c: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79A68Cu;
    SET_GPR_U32(ctx, 31, 0x79A694u);
    ctx->pc = 0x79A690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A68Cu;
    // 0x79a690: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A68Cu, 0x79A694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A694u;
label_79a694:
    // 0x79a694: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A694u;
    {
        const bool branch_taken_0x79a694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a694) {
            ctx->pc = 0x79A698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A694u;
            // 0x79a698: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A6ACu;
            goto label_79a6ac;
        }
    }
    ctx->pc = 0x79A69Cu;
    // 0x79a69c: 0xa2150000  sb          $s5, 0x0($s0)
    ctx->pc = 0x79a69cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x79a6a0: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x79a6a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a6a4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x79a6a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x79a6a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x79a6a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_79a6ac:
    // 0x79a6ac: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x79a6acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x79a6b0: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x79a6b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x79a6b4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x79A6B4u;
    {
        const bool branch_taken_0x79a6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6B4u;
        // 0x79a6b8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6b4) {
            ctx->pc = 0x79A680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a680;
        }
    }
    ctx->pc = 0x79A6BCu;
label_79a6bc:
    // 0x79a6bc: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x79a6bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x79a6c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79A6C0u;
    {
        const bool branch_taken_0x79a6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6C0u;
        // 0x79a6c4: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6c0) {
            ctx->pc = 0x79A6E0u;
            goto label_79a6e0;
        }
    }
    ctx->pc = 0x79A6C8u;
    // 0x79a6c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a6cc: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    // 0x79a6d0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A6D0u;
    SET_GPR_U32(ctx, 31, 0x79A6D8u);
    ctx->pc = 0x79A6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6D0u;
    // 0x79a6d4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A6D0u, 0x79A6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6D8u;
label_79a6d8:
    // 0x79a6d8: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x79A6D8u;
    {
        const bool branch_taken_0x79a6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a6d8) {
            ctx->pc = 0x79A668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a668;
        }
    }
    ctx->pc = 0x79A6E0u;
label_79a6e0:
    // 0x79a6e0: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x79a6e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a6e4: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x79a6e4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a6e8: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x79a6e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79a6ec: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x79a6ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79a6f0: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x79a6f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79a6f4: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x79a6f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79a6f8: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x79a6f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79a6fc: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x79a6fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79a700: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x79a700u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79a704: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x79a704u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a708: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x79a708u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a70c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x79a70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a710: 0x3e00008  jr          $ra
    ctx->pc = 0x79A710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A710u;
        // 0x79a714: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A718u;
}
} // namespace gh_r608
