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

// Function: func_0014BFE0
// Address: 0x14bfe0 - 0x14c328
void func_0014BFE0_0x14bfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0014BFE0_0x14bfe0");
#endif

    switch (ctx->pc) {
        case 0x14c064u: goto label_14c064;
        case 0x14c070u: goto label_14c070;
        case 0x14c0e0u: goto label_14c0e0;
        case 0x14c158u: goto label_14c158;
        case 0x14c29cu: goto label_14c29c;
        case 0x14c2a8u: goto label_14c2a8;
        case 0x14c2b8u: goto label_14c2b8;
        case 0x14c2ccu: goto label_14c2cc;
        default: break;
    }

    ctx->pc = 0x14bfe0u;

    // 0x14bfe0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x14bfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x14bfe4: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x14bfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x14bfe8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x14bfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x14bfec: 0x240300a9  addiu       $v1, $zero, 0xA9
    ctx->pc = 0x14bfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
    // 0x14bff0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x14bff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x14bff4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x14bff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x14bff8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14bff8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bffc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x14bffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x14c000: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x14c000u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c004: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x14c004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x14c008: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14c008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14c00c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x14c00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x14c010: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x14c010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x14c014: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x14c014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x14c018: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14c018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14c01c: 0x924402b4  lbu         $a0, 0x2B4($s2)
    ctx->pc = 0x14c01cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x14c020: 0x8e4602c8  lw          $a2, 0x2C8($s2)
    ctx->pc = 0x14c020u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 712)));
    // 0x14c024: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14c024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c028: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x14c028u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14c02c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x14c02cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14c030: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14c030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14c034: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x14c034u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14c038: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x14c038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x14c03c: 0x246303a0  addiu       $v1, $v1, 0x3A0
    ctx->pc = 0x14c03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 928));
    // 0x14c040: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C040u;
    {
        const bool branch_taken_0x14c040 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C040u;
        // 0x14c044: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c040) {
            ctx->pc = 0x14C050u;
            goto label_14c050;
        }
    }
    ctx->pc = 0x14C048u;
    // 0x14c048: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14C048u;
    {
        const bool branch_taken_0x14c048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C048u;
        // 0x14c04c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c048) {
            ctx->pc = 0x14C05Cu;
            goto label_14c05c;
        }
    }
    ctx->pc = 0x14C050u;
label_14c050:
    // 0x14c050: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x14c050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x14c054: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x14c054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c058: 0x8c463cf0  lw          $a2, 0x3CF0($v0)
    ctx->pc = 0x14c058u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C3CF0u));
label_14c05c:
    // 0x14c05c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x14C05Cu;
    SET_GPR_U32(ctx, 31, 0x14C064u);
    ctx->pc = 0x14C060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C05Cu;
    // 0x14c060: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x14C05Cu, 0x14C064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C064u;
label_14c064:
    // 0x14c064: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14c064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c068: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C068u;
    {
        const bool branch_taken_0x14c068 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c068) {
            ctx->pc = 0x14C06Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C068u;
            // 0x14c06c: 0xae440238  sw          $a0, 0x238($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 568), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C078u;
            goto label_14c078;
        }
    }
    ctx->pc = 0x14C070u;
label_14c070:
    // 0x14c070: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x14C070u;
    {
        const bool branch_taken_0x14c070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C070u;
        // 0x14c074: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c070) {
            ctx->pc = 0x14C2F4u;
            goto label_14c2f4;
        }
    }
    ctx->pc = 0x14C078u;
label_14c078:
    // 0x14c078: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x14c078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x14c07c: 0xae440220  sw          $a0, 0x220($s2)
    ctx->pc = 0x14c07cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 544), GPR_U32(ctx, 4));
    // 0x14c080: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x14c080u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14c084: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x14c084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x14c088: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14c088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14c08c: 0xae440224  sw          $a0, 0x224($s2)
    ctx->pc = 0x14c08cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 548), GPR_U32(ctx, 4));
    // 0x14c090: 0x240300a9  addiu       $v1, $zero, 0xA9
    ctx->pc = 0x14c090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
    // 0x14c094: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x14c094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x14c098: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x14c098u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14c09c: 0xae440228  sw          $a0, 0x228($s2)
    ctx->pc = 0x14c09cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 552), GPR_U32(ctx, 4));
    // 0x14c0a0: 0x26420220  addiu       $v0, $s2, 0x220
    ctx->pc = 0x14c0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
    // 0x14c0a4: 0x24840150  addiu       $a0, $a0, 0x150
    ctx->pc = 0x14c0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x14c0a8: 0x8e450144  lw          $a1, 0x144($s2)
    ctx->pc = 0x14c0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 324)));
    // 0x14c0ac: 0xae44022c  sw          $a0, 0x22C($s2)
    ctx->pc = 0x14c0acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 556), GPR_U32(ctx, 4));
    // 0x14c0b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14c0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14c0b4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x14c0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x14c0b8: 0x24840150  addiu       $a0, $a0, 0x150
    ctx->pc = 0x14c0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x14c0bc: 0xae440230  sw          $a0, 0x230($s2)
    ctx->pc = 0x14c0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 560), GPR_U32(ctx, 4));
    // 0x14c0c0: 0x26420228  addiu       $v0, $s2, 0x228
    ctx->pc = 0x14c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 552));
    // 0x14c0c4: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x14c0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x14c0c8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x14c0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14c0cc: 0xae440234  sw          $a0, 0x234($s2)
    ctx->pc = 0x14c0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 564), GPR_U32(ctx, 4));
    // 0x14c0d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14c0d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c0d4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x14c0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14c0d8: 0xae440278  sw          $a0, 0x278($s2)
    ctx->pc = 0x14c0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 632), GPR_U32(ctx, 4));
    // 0x14c0dc: 0x0  nop
    ctx->pc = 0x14c0dcu;
    // NOP
label_14c0e0:
    // 0x14c0e0: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x14c0e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x14c0e4: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x14c0e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14c0e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14C0E8u;
    {
        const bool branch_taken_0x14c0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C0E8u;
        // 0x14c0ec: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c0e8) {
            ctx->pc = 0x14C108u;
            goto label_14c108;
        }
    }
    ctx->pc = 0x14C0F0u;
    // 0x14c0f0: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x14c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x14c0f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14c0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14c0f8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x14c0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x14c0fc: 0x8ca50144  lw          $a1, 0x144($a1)
    ctx->pc = 0x14c0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 324)));
    // 0x14c100: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14C100u;
    {
        const bool branch_taken_0x14c100 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C100u;
        // 0x14c104: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c100) {
            ctx->pc = 0x14C0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c0e0;
        }
    }
    ctx->pc = 0x14C108u;
label_14c108:
    // 0x14c108: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x14c108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x14c10c: 0x240300a9  addiu       $v1, $zero, 0xA9
    ctx->pc = 0x14c10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
    // 0x14c110: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x14c110u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14c114: 0x240400a8  addiu       $a0, $zero, 0xA8
    ctx->pc = 0x14c114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x14c118: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14c118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14c11c: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x14c11cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x14c120: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x14c120u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14c124: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x14c124u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14c128: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x14c128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x14c12c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x14c12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x14c130: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x14c130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x14c134: 0x24554700  addiu       $s5, $v0, 0x4700
    ctx->pc = 0x14c134u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 18176));
    // 0x14c138: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x14c138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x14c13c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x14c13cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x14c140: 0x3c026c00  lui         $v0, 0x6C00
    ctx->pc = 0x14c140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27648 << 16));
    // 0x14c144: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x14c144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x14c148: 0x3c171100  lui         $s7, 0x1100
    ctx->pc = 0x14c148u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)4352 << 16));
    // 0x14c14c: 0x82f025  or          $fp, $a0, $v0
    ctx->pc = 0x14c14cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x14c150: 0x3c161000  lui         $s6, 0x1000
    ctx->pc = 0x14c150u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)4096 << 16));
    // 0x14c154: 0x0  nop
    ctx->pc = 0x14c154u;
    // NOP
label_14c158:
    // 0x14c158: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x14c158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14c15c: 0x143880  sll         $a3, $s4, 2
    ctx->pc = 0x14c15cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x14c160: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x14c160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x14c164: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x14c164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x14c168: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x14c168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x14c16c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x14c16cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14c170: 0x1220ffbf  beqz        $s1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x14C170u;
    {
        const bool branch_taken_0x14c170 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C170u;
        // 0x14c174: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c170) {
            ctx->pc = 0x14C070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c070;
        }
    }
    ctx->pc = 0x14C178u;
    // 0x14c178: 0x10a0ffbd  beqz        $a1, . + 4 + (-0x43 << 2)
    ctx->pc = 0x14C178u;
    {
        const bool branch_taken_0x14c178 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C178u;
        // 0x14c17c: 0x3c090fff  lui         $t1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c178) {
            ctx->pc = 0x14C070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c070;
        }
    }
    ctx->pc = 0x14C180u;
    // 0x14c180: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x14c180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x14c184: 0x34840015  ori         $a0, $a0, 0x15
    ctx->pc = 0x14c184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)21);
    // 0x14c188: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x14c188u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x14c18c: 0x3c080100  lui         $t0, 0x100
    ctx->pc = 0x14c18cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)256 << 16));
    // 0x14c190: 0xa91024  and         $v0, $a1, $t1
    ctx->pc = 0x14c190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x14c194: 0x3c036c14  lui         $v1, 0x6C14
    ctx->pc = 0x14c194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27668 << 16));
    // 0x14c198: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14c198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14c19c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x14c19cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x14c1a0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x14c1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x14c1a4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x14c1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x14c1a8: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x14c1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x14c1ac: 0x346300c0  ori         $v1, $v1, 0xC0
    ctx->pc = 0x14c1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)192);
    // 0x14c1b0: 0x35080404  ori         $t0, $t0, 0x404
    ctx->pc = 0x14c1b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1028);
    // 0x14c1b4: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x14c1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x14c1b8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x14c1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x14c1bc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x14c1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x14c1c0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x14c1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x14c1c4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x14c1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x14c1c8: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x14c1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x14c1cc: 0xaca80008  sw          $t0, 0x8($a1)
    ctx->pc = 0x14c1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
    // 0x14c1d0: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x14c1d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x14c1d4: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x14c1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
    // 0x14c1d8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x14c1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x14c1dc: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x14c1dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x14c1e0: 0x34638001  ori         $v1, $v1, 0x8001
    ctx->pc = 0x14c1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32769);
    // 0x14c1e4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x14c1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x14c1e8: 0xae24001c  sw          $a0, 0x1C($s1)
    ctx->pc = 0x14c1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 4));
    // 0x14c1ec: 0xfe230020  sd          $v1, 0x20($s1)
    ctx->pc = 0x14c1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 3));
    // 0x14c1f0: 0x26420230  addiu       $v0, $s2, 0x230
    ctx->pc = 0x14c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 560));
    // 0x14c1f4: 0xae250028  sw          $a1, 0x28($s1)
    ctx->pc = 0x14c1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 5));
    // 0x14c1f8: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x14c1f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x14c1fc: 0xae370018  sw          $s7, 0x18($s1)
    ctx->pc = 0x14c1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 23));
    // 0x14c200: 0x2406003d  addiu       $a2, $zero, 0x3D
    ctx->pc = 0x14c200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x14c204: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x14c204u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x14c208: 0x92a20005  lbu         $v0, 0x5($s5)
    ctx->pc = 0x14c208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
    // 0x14c20c: 0x92a30004  lbu         $v1, 0x4($s5)
    ctx->pc = 0x14c20cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14c210: 0x92a40006  lbu         $a0, 0x6($s5)
    ctx->pc = 0x14c210u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x14c214: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x14c214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x14c218: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14c218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14c21c: 0xfe260038  sd          $a2, 0x38($s1)
    ctx->pc = 0x14c21cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 6));
    // 0x14c220: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x14c220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x14c224: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x14c224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x14c228: 0xfe230030  sd          $v1, 0x30($s1)
    ctx->pc = 0x14c228u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 3));
    // 0x14c22c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x14c22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14c230: 0x1040ff8f  beqz        $v0, . + 4 + (-0x71 << 2)
    ctx->pc = 0x14C230u;
    {
        const bool branch_taken_0x14c230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C230u;
        // 0x14c234: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c230) {
            ctx->pc = 0x14C070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c070;
        }
    }
    ctx->pc = 0x14C238u;
    // 0x14c238: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14c238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14c23c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14c23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14c240: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x14c240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c244: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x14c244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14c248: 0x26930001  addiu       $s3, $s4, 0x1
    ctx->pc = 0x14c248u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x14c24c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x14c24cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x14c250: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x14c250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14c254: 0xac480008  sw          $t0, 0x8($v0)
    ctx->pc = 0x14c254u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
    // 0x14c258: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x14c258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14c25c: 0xac7e000c  sw          $fp, 0xC($v1)
    ctx->pc = 0x14c25cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 30));
    // 0x14c260: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x14c260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14c264: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x14c264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x14c268: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x14c268u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x14c26c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x14c26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x14c270: 0xfe360050  sd          $s6, 0x50($s1)
    ctx->pc = 0x14c270u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 80), GPR_U64(ctx, 22));
    // 0x14c274: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14c274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14c278: 0xdfa30000  ld          $v1, 0x0($sp)
    ctx->pc = 0x14c278u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c27c: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x14c27cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x14c280: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14c280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14c284: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x14c284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x14c288: 0xfe360060  sd          $s6, 0x60($s1)
    ctx->pc = 0x14c288u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 96), GPR_U64(ctx, 22));
    // 0x14c28c: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x14c28cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    // 0x14c290: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x14c290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
    // 0x14c294: 0xc0556fa  jal         func_155BE8
    ctx->pc = 0x14C294u;
    SET_GPR_U32(ctx, 31, 0x14C29Cu);
    ctx->pc = 0x14C298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C294u;
    // 0x14c298: 0xfe220040  sd          $v0, 0x40($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155BE8u, 0x14C294u, 0x14C29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C29Cu;
label_14c29c:
    // 0x14c29c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14c29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c2a0: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x14C2A0u;
    SET_GPR_U32(ctx, 31, 0x14C2A8u);
    ctx->pc = 0x14C2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C2A0u;
    // 0x14c2a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x14C2A0u, 0x14C2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C2A8u;
label_14c2a8:
    // 0x14c2a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14c2a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c2ac: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x14C2ACu;
    {
        const bool branch_taken_0x14c2ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C2ACu;
        // 0x14c2b0: 0x3c027000  lui         $v0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c2ac) {
            ctx->pc = 0x14C2D8u;
            goto label_14c2d8;
        }
    }
    ctx->pc = 0x14C2B4u;
    // 0x14c2b4: 0x0  nop
    ctx->pc = 0x14c2b4u;
    // NOP
label_14c2b8:
    // 0x14c2b8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x14c2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x14c2bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c2c0: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x14c2c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x14c2c4: 0xc0556ba  jal         func_155AE8
    ctx->pc = 0x14C2C4u;
    SET_GPR_U32(ctx, 31, 0x14C2CCu);
    ctx->pc = 0x14C2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C2C4u;
    // 0x14c2c8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155AE8u, 0x14C2C4u, 0x14C2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C2CCu;
label_14c2cc:
    // 0x14c2cc: 0x8e100404  lw          $s0, 0x404($s0)
    ctx->pc = 0x14c2ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
    // 0x14c2d0: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14C2D0u;
    {
        const bool branch_taken_0x14c2d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C2D0u;
        // 0x14c2d4: 0x3c027000  lui         $v0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c2d0) {
            ctx->pc = 0x14C2B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c2b8;
        }
    }
    ctx->pc = 0x14C2D8u;
label_14c2d8:
    // 0x14c2d8: 0xae37007c  sw          $s7, 0x7C($s1)
    ctx->pc = 0x14c2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 23));
    // 0x14c2dc: 0xfe220070  sd          $v0, 0x70($s1)
    ctx->pc = 0x14c2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 2));
    // 0x14c2e0: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x14c2e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c2e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14c2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14c2e8: 0x1682ff9b  bne         $s4, $v0, . + 4 + (-0x65 << 2)
    ctx->pc = 0x14C2E8u;
    {
        const bool branch_taken_0x14c2e8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x14C2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C2E8u;
        // 0x14c2ec: 0xae200078  sw          $zero, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c2e8) {
            ctx->pc = 0x14C158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c158;
        }
    }
    ctx->pc = 0x14C2F0u;
    // 0x14c2f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14c2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c2f4:
    // 0x14c2f4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x14c2f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14c2f8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x14c2f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14c2fc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x14c2fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14c300: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x14c300u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14c304: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x14c304u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14c308: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14c308u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14c30c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x14c30cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14c310: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x14c310u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14c314: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x14c314u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14c318: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14c318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c31c: 0x3e00008  jr          $ra
    ctx->pc = 0x14C31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C31Cu;
        // 0x14c320: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C324u;
    // 0x14c324: 0x0  nop
    ctx->pc = 0x14c324u;
    // NOP
    ctx->pc = 0x14c328u;
}
