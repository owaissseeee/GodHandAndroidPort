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

// Function: func_0023AFD8
// Address: 0x23afd8 - 0x23b678
void func_0023AFD8_0x23afd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0023AFD8_0x23afd8");
#endif

    switch (ctx->pc) {
        case 0x23b0ecu: goto label_23b0ec;
        case 0x23b170u: goto label_23b170;
        case 0x23b19cu: goto label_23b19c;
        case 0x23b224u: goto label_23b224;
        case 0x23b244u: goto label_23b244;
        case 0x23b24cu: goto label_23b24c;
        case 0x23b288u: goto label_23b288;
        case 0x23b2ccu: goto label_23b2cc;
        case 0x23b2e0u: goto label_23b2e0;
        case 0x23b320u: goto label_23b320;
        case 0x23b340u: goto label_23b340;
        case 0x23b350u: goto label_23b350;
        case 0x23b390u: goto label_23b390;
        case 0x23b39cu: goto label_23b39c;
        case 0x23b3d8u: goto label_23b3d8;
        case 0x23b3f0u: goto label_23b3f0;
        case 0x23b5a0u: goto label_23b5a0;
        case 0x23b5c0u: goto label_23b5c0;
        case 0x23b614u: goto label_23b614;
        case 0x23b628u: goto label_23b628;
        case 0x23b630u: goto label_23b630;
        case 0x23b648u: goto label_23b648;
        case 0x23b654u: goto label_23b654;
        default: break;
    }

    ctx->pc = 0x23afd8u;

    // 0x23afd8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23afd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x23afdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23afdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23afe0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x23afe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x23afe4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x23afe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x23afe8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23afe8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23afec: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x23afecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x23aff0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23aff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23aff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23aff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23aff8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x23aff8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x23affc: 0x8e6216d0  lw          $v0, 0x16D0($s3)
    ctx->pc = 0x23affcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5840)));
    // 0x23b000: 0x926402f6  lbu         $a0, 0x2F6($s3)
    ctx->pc = 0x23b000u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
    // 0x23b004: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x23b004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x23b008: 0x108300bd  beq         $a0, $v1, . + 4 + (0xBD << 2)
    ctx->pc = 0x23B008u;
    {
        const bool branch_taken_0x23b008 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x23B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B008u;
        // 0x23b00c: 0xae6216d0  sw          $v0, 0x16D0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b008) {
            ctx->pc = 0x23B300u;
            goto label_23b300;
        }
    }
    ctx->pc = 0x23B010u;
    // 0x23b010: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x23b010u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23b014: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23B014u;
    {
        const bool branch_taken_0x23b014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b014) {
            ctx->pc = 0x23B018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B014u;
            // 0x23b018: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B02Cu;
            goto label_23b02c;
        }
    }
    ctx->pc = 0x23B01Cu;
    // 0x23b01c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23B01Cu;
    {
        const bool branch_taken_0x23b01c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B01Cu;
        // 0x23b020: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b01c) {
            ctx->pc = 0x23B044u;
            goto label_23b044;
        }
    }
    ctx->pc = 0x23B024u;
    // 0x23b024: 0x1000018d  b           . + 4 + (0x18D << 2)
    ctx->pc = 0x23B024u;
    {
        const bool branch_taken_0x23b024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B024u;
        // 0x23b028: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b024) {
            ctx->pc = 0x23B65Cu;
            goto label_23b65c;
        }
    }
    ctx->pc = 0x23B02Cu;
label_23b02c:
    // 0x23b02c: 0x108200fe  beq         $a0, $v0, . + 4 + (0xFE << 2)
    ctx->pc = 0x23B02Cu;
    {
        const bool branch_taken_0x23b02c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x23B030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B02Cu;
        // 0x23b030: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b02c) {
            ctx->pc = 0x23B428u;
            goto label_23b428;
        }
    }
    ctx->pc = 0x23B034u;
    // 0x23b034: 0x10820168  beq         $a0, $v0, . + 4 + (0x168 << 2)
    ctx->pc = 0x23B034u;
    {
        const bool branch_taken_0x23b034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x23B038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B034u;
        // 0x23b038: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b034) {
            ctx->pc = 0x23B5D8u;
            goto label_23b5d8;
        }
    }
    ctx->pc = 0x23B03Cu;
    // 0x23b03c: 0x10000187  b           . + 4 + (0x187 << 2)
    ctx->pc = 0x23B03Cu;
    {
        const bool branch_taken_0x23b03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B03Cu;
        // 0x23b040: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b03c) {
            ctx->pc = 0x23B65Cu;
            goto label_23b65c;
        }
    }
    ctx->pc = 0x23B044u;
label_23b044:
    // 0x23b044: 0x8e630564  lw          $v1, 0x564($s3)
    ctx->pc = 0x23b044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
    // 0x23b048: 0x2463fdfe  addiu       $v1, $v1, -0x202
    ctx->pc = 0x23b048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966782));
    // 0x23b04c: 0x2c62007d  sltiu       $v0, $v1, 0x7D
    ctx->pc = 0x23b04cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x23b050: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23B050u;
    {
        const bool branch_taken_0x23b050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B050u;
        // 0x23b054: 0xa2601864  sb          $zero, 0x1864($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 6244), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b050) {
            ctx->pc = 0x23B074u;
            goto label_23b074;
        }
    }
    ctx->pc = 0x23B058u;
    // 0x23b058: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x23b058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x23b05c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23b05cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23b060: 0x2442a640  addiu       $v0, $v0, -0x59C0
    ctx->pc = 0x23b060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944320));
    // 0x23b064: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23b064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23b068: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23b068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23b06c: 0x800008  jr          $a0
    ctx->pc = 0x23B06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B074u: goto label_23b074;
            case 0x23B084u: goto label_23b084;
            case 0x23B094u: goto label_23b094;
            case 0x23B0A4u: goto label_23b0a4;
            case 0x23B0B4u: goto label_23b0b4;
            case 0x23B0C4u: goto label_23b0c4;
            case 0x23B0D4u: goto label_23b0d4;
            case 0x23B0E4u: goto label_23b0e4;
            case 0x23B0FCu: goto label_23b0fc;
            case 0x23B10Cu: goto label_23b10c;
            case 0x23B11Cu: goto label_23b11c;
            case 0x23B12Cu: goto label_23b12c;
            case 0x23B13Cu: goto label_23b13c;
            case 0x23B14Cu: goto label_23b14c;
            case 0x23B1A4u: goto label_23b1a4;
            case 0x23B1B4u: goto label_23b1b4;
            case 0x23B1C4u: goto label_23b1c4;
            case 0x23B1D4u: goto label_23b1d4;
            case 0x23B1E4u: goto label_23b1e4;
            case 0x23B1F4u: goto label_23b1f4;
            case 0x23B204u: goto label_23b204;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B06Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23B074u;
label_23b074:
    // 0x23b074: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b078: 0x8c43039c  lw          $v1, 0x39C($v0)
    ctx->pc = 0x23b078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 924)));
    // 0x23b07c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x23B07Cu;
    {
        const bool branch_taken_0x23b07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B07Cu;
        // 0x23b080: 0x8c4403a0  lw          $a0, 0x3A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b07c) {
            ctx->pc = 0x23B210u;
            goto label_23b210;
        }
    }
    ctx->pc = 0x23B084u;
label_23b084:
    // 0x23b084: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b088: 0x8c431b80  lw          $v1, 0x1B80($v0)
    ctx->pc = 0x23b088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7040)));
    // 0x23b08c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x23B08Cu;
    {
        const bool branch_taken_0x23b08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B08Cu;
        // 0x23b090: 0x8c441b84  lw          $a0, 0x1B84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7044)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b08c) {
            ctx->pc = 0x23B210u;
            goto label_23b210;
        }
    }
    ctx->pc = 0x23B094u;
label_23b094:
    // 0x23b094: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b098: 0x8c4307c4  lw          $v1, 0x7C4($v0)
    ctx->pc = 0x23b098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1988)));
    // 0x23b09c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x23B09Cu;
    {
        const bool branch_taken_0x23b09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B09Cu;
        // 0x23b0a0: 0x8c4407c8  lw          $a0, 0x7C8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b09c) {
            ctx->pc = 0x23B210u;
            goto label_23b210;
        }
    }
    ctx->pc = 0x23B0A4u;
label_23b0a4:
    // 0x23b0a4: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b0a8: 0x8c432ba8  lw          $v1, 0x2BA8($v0)
    ctx->pc = 0x23b0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11176)));
    // 0x23b0ac: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x23B0ACu;
    {
        const bool branch_taken_0x23b0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0ACu;
        // 0x23b0b0: 0x8c442bac  lw          $a0, 0x2BAC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b0ac) {
            ctx->pc = 0x23B210u;
            goto label_23b210;
        }
    }
    ctx->pc = 0x23B0B4u;
label_23b0b4:
    // 0x23b0b4: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b0b8: 0x8c433698  lw          $v1, 0x3698($v0)
    ctx->pc = 0x23b0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13976)));
    // 0x23b0bc: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x23B0BCu;
    {
        const bool branch_taken_0x23b0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0BCu;
        // 0x23b0c0: 0x8c44369c  lw          $a0, 0x369C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13980)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b0bc) {
            ctx->pc = 0x23B210u;
            goto label_23b210;
        }
    }
    ctx->pc = 0x23B0C4u;
label_23b0c4:
    // 0x23b0c4: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b0c8: 0x8c430b74  lw          $v1, 0xB74($v0)
    ctx->pc = 0x23b0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2932)));
    // 0x23b0cc: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x23B0CCu;
    {
        const bool branch_taken_0x23b0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0CCu;
        // 0x23b0d0: 0x8c440b78  lw          $a0, 0xB78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b0cc) {
            ctx->pc = 0x23B210u;
            goto label_23b210;
        }
    }
    ctx->pc = 0x23B0D4u;
label_23b0d4:
    // 0x23b0d4: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b0d8: 0x8c433c0c  lw          $v1, 0x3C0C($v0)
    ctx->pc = 0x23b0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15372)));
    // 0x23b0dc: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x23B0DCu;
    {
        const bool branch_taken_0x23b0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0DCu;
        // 0x23b0e0: 0x8c443c10  lw          $a0, 0x3C10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b0dc) {
            ctx->pc = 0x23B210u;
            goto label_23b210;
        }
    }
    ctx->pc = 0x23B0E4u;
label_23b0e4:
    // 0x23b0e4: 0xc09ac7a  jal         func_26B1E8
    ctx->pc = 0x23B0E4u;
    SET_GPR_U32(ctx, 31, 0x23B0ECu);
    ctx->pc = 0x23B0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B0E4u;
    // 0x23b0e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x23B0E4u, 0x23B0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B0ECu;
label_23b0ec:
    // 0x23b0ec: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b0f0: 0x8c433c1c  lw          $v1, 0x3C1C($v0)
    ctx->pc = 0x23b0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15388)));
    // 0x23b0f4: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x23B0F4u;
    {
        const bool branch_taken_0x23b0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0F4u;
        // 0x23b0f8: 0x8c443c20  lw          $a0, 0x3C20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b0f4) {
            ctx->pc = 0x23B210u;
            goto label_23b210;
        }
    }
    ctx->pc = 0x23B0FCu;
label_23b0fc:
    // 0x23b0fc: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b100: 0x8c431e34  lw          $v1, 0x1E34($v0)
    ctx->pc = 0x23b100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7732)));
    // 0x23b104: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x23B104u;
    {
        const bool branch_taken_0x23b104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B104u;
        // 0x23b108: 0x8c441e38  lw          $a0, 0x1E38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b104) {
            ctx->pc = 0x23B210u;
            goto label_23b210;
        }
    }
    ctx->pc = 0x23B10Cu;
label_23b10c:
    // 0x23b10c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b110: 0x8c431f80  lw          $v1, 0x1F80($v0)
    ctx->pc = 0x23b110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8064)));
    // 0x23b114: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x23B114u;
    {
        const bool branch_taken_0x23b114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B114u;
        // 0x23b118: 0x8c441f84  lw          $a0, 0x1F84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8068)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b114) {
            ctx->pc = 0x23B210u;
            goto label_23b210;
        }
    }
    ctx->pc = 0x23B11Cu;
label_23b11c:
    // 0x23b11c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b120: 0x8c4317d8  lw          $v1, 0x17D8($v0)
    ctx->pc = 0x23b120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6104)));
    // 0x23b124: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x23B124u;
    {
        const bool branch_taken_0x23b124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B124u;
        // 0x23b128: 0x8c4417dc  lw          $a0, 0x17DC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b124) {
            ctx->pc = 0x23B210u;
            goto label_23b210;
        }
    }
    ctx->pc = 0x23B12Cu;
label_23b12c:
    // 0x23b12c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b130: 0x8c433afc  lw          $v1, 0x3AFC($v0)
    ctx->pc = 0x23b130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15100)));
    // 0x23b134: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x23B134u;
    {
        const bool branch_taken_0x23b134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B134u;
        // 0x23b138: 0x8c443b00  lw          $a0, 0x3B00($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b134) {
            ctx->pc = 0x23B210u;
            goto label_23b210;
        }
    }
    ctx->pc = 0x23B13Cu;
label_23b13c:
    // 0x23b13c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b140: 0x8c43345c  lw          $v1, 0x345C($v0)
    ctx->pc = 0x23b140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13404)));
    // 0x23b144: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x23B144u;
    {
        const bool branch_taken_0x23b144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B144u;
        // 0x23b148: 0x8c443460  lw          $a0, 0x3460($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b144) {
            ctx->pc = 0x23B210u;
            goto label_23b210;
        }
    }
    ctx->pc = 0x23B14Cu;
label_23b14c:
    // 0x23b14c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b150: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x23b150u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x23b154: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x23b154u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x23b158: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23b158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b15c: 0x8c451a1c  lw          $a1, 0x1A1C($v0)
    ctx->pc = 0x23b15cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6684)));
    // 0x23b160: 0x8c431a18  lw          $v1, 0x1A18($v0)
    ctx->pc = 0x23b160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6680)));
    // 0x23b164: 0xa28821  addu        $s1, $a1, $v0
    ctx->pc = 0x23b164u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x23b168: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x23B168u;
    SET_GPR_U32(ctx, 31, 0x23B170u);
    ctx->pc = 0x23B16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B168u;
    // 0x23b16c: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x23B168u, 0x23B170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B170u;
label_23b170:
    // 0x23b170: 0x24420023  addiu       $v0, $v0, 0x23
    ctx->pc = 0x23b170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
    // 0x23b174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23b174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b178: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x23b178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x23b17c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23b17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b180: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x23b180u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x23b184: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23b184u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b188: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23b188u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b18c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23b18cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b190: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x23b190u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b194: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x23B194u;
    SET_GPR_U32(ctx, 31, 0x23B19Cu);
    ctx->pc = 0x23B198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B194u;
    // 0x23b198: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x23B194u, 0x23B19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B19Cu;
label_23b19c:
    // 0x23b19c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x23B19Cu;
    {
        const bool branch_taken_0x23b19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b19c) {
            ctx->pc = 0x23B218u;
            goto label_23b218;
        }
    }
    ctx->pc = 0x23B1A4u;
label_23b1a4:
    // 0x23b1a4: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b1a8: 0x8c431a18  lw          $v1, 0x1A18($v0)
    ctx->pc = 0x23b1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6680)));
    // 0x23b1ac: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x23B1ACu;
    {
        const bool branch_taken_0x23b1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1ACu;
        // 0x23b1b0: 0x8c441a1c  lw          $a0, 0x1A1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1ac) {
            ctx->pc = 0x23B210u;
            goto label_23b210;
        }
    }
    ctx->pc = 0x23B1B4u;
label_23b1b4:
    // 0x23b1b4: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b1b8: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x23b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x23b1bc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x23B1BCu;
    {
        const bool branch_taken_0x23b1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1BCu;
        // 0x23b1c0: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1bc) {
            ctx->pc = 0x23B210u;
            goto label_23b210;
        }
    }
    ctx->pc = 0x23B1C4u;
label_23b1c4:
    // 0x23b1c4: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b1c8: 0x8c433724  lw          $v1, 0x3724($v0)
    ctx->pc = 0x23b1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14116)));
    // 0x23b1cc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x23B1CCu;
    {
        const bool branch_taken_0x23b1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1CCu;
        // 0x23b1d0: 0x8c443728  lw          $a0, 0x3728($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1cc) {
            ctx->pc = 0x23B210u;
            goto label_23b210;
        }
    }
    ctx->pc = 0x23B1D4u;
label_23b1d4:
    // 0x23b1d4: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b1d8: 0x8c431d50  lw          $v1, 0x1D50($v0)
    ctx->pc = 0x23b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7504)));
    // 0x23b1dc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x23B1DCu;
    {
        const bool branch_taken_0x23b1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1DCu;
        // 0x23b1e0: 0x8c441d54  lw          $a0, 0x1D54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1dc) {
            ctx->pc = 0x23B210u;
            goto label_23b210;
        }
    }
    ctx->pc = 0x23B1E4u;
label_23b1e4:
    // 0x23b1e4: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b1e8: 0x8c432ecc  lw          $v1, 0x2ECC($v0)
    ctx->pc = 0x23b1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11980)));
    // 0x23b1ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23B1ECu;
    {
        const bool branch_taken_0x23b1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1ECu;
        // 0x23b1f0: 0x8c442ed0  lw          $a0, 0x2ED0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11984)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1ec) {
            ctx->pc = 0x23B210u;
            goto label_23b210;
        }
    }
    ctx->pc = 0x23B1F4u;
label_23b1f4:
    // 0x23b1f4: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b1f8: 0x8c4323a8  lw          $v1, 0x23A8($v0)
    ctx->pc = 0x23b1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9128)));
    // 0x23b1fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23B1FCu;
    {
        const bool branch_taken_0x23b1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1FCu;
        // 0x23b200: 0x8c4423ac  lw          $a0, 0x23AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1fc) {
            ctx->pc = 0x23B210u;
            goto label_23b210;
        }
    }
    ctx->pc = 0x23B204u;
label_23b204:
    // 0x23b204: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b208: 0x8c4313b8  lw          $v1, 0x13B8($v0)
    ctx->pc = 0x23b208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5048)));
    // 0x23b20c: 0x8c4413bc  lw          $a0, 0x13BC($v0)
    ctx->pc = 0x23b20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5052)));
label_23b210:
    // 0x23b210: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23b210u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23b214: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x23b214u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_23b218:
    // 0x23b218: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x23b218u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23b21c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x23B21Cu;
    SET_GPR_U32(ctx, 31, 0x23B224u);
    ctx->pc = 0x23B220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B21Cu;
    // 0x23b220: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x23B21Cu, 0x23B224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B224u;
label_23b224:
    // 0x23b224: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23b224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b228: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23b228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b22c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23b22cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b230: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x23b230u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23b234: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x23b234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23b238: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23b238u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23b23c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23B23Cu;
    SET_GPR_U32(ctx, 31, 0x23B244u);
    ctx->pc = 0x23B240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B23Cu;
    // 0x23b240: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23B23Cu, 0x23B244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B244u;
label_23b244:
    // 0x23b244: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23B244u;
    SET_GPR_U32(ctx, 31, 0x23B24Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23B244u, 0x23B24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B24Cu;
label_23b24c:
    // 0x23b24c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x23b24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x23b250: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23b250u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23b254: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23B254u;
    {
        const bool branch_taken_0x23b254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b254) {
            ctx->pc = 0x23B258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B254u;
            // 0x23b258: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B25Cu;
            goto label_23b25c;
        }
    }
    ctx->pc = 0x23B25Cu;
label_23b25c:
    // 0x23b25c: 0x8e620564  lw          $v0, 0x564($s3)
    ctx->pc = 0x23b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
    // 0x23b260: 0x2442fdb0  addiu       $v0, $v0, -0x250
    ctx->pc = 0x23b260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966704));
    // 0x23b264: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x23b264u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x23b268: 0x2010  mfhi        $a0
    ctx->pc = 0x23b268u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x23b26c: 0x2484001e  addiu       $a0, $a0, 0x1E
    ctx->pc = 0x23b26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30));
    // 0x23b270: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B270u;
    {
        const bool branch_taken_0x23b270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B270u;
        // 0x23b274: 0xae6405f0  sw          $a0, 0x5F0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1520), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b270) {
            ctx->pc = 0x23B280u;
            goto label_23b280;
        }
    }
    ctx->pc = 0x23B278u;
    // 0x23b278: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x23b278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x23b27c: 0xae6205f0  sw          $v0, 0x5F0($s3)
    ctx->pc = 0x23b27cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1520), GPR_U32(ctx, 2));
label_23b280:
    // 0x23b280: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23B280u;
    SET_GPR_U32(ctx, 31, 0x23B288u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23B280u, 0x23B288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B288u;
label_23b288:
    // 0x23b288: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x23b288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x23b28c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23B28Cu;
    {
        const bool branch_taken_0x23b28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B28Cu;
        // 0x23b290: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b28c) {
            ctx->pc = 0x23B298u;
            goto label_23b298;
        }
    }
    ctx->pc = 0x23B294u;
    // 0x23b294: 0xae6205f0  sw          $v0, 0x5F0($s3)
    ctx->pc = 0x23b294u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1520), GPR_U32(ctx, 2));
label_23b298:
    // 0x23b298: 0x926202f7  lbu         $v0, 0x2F7($s3)
    ctx->pc = 0x23b298u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 759)));
    // 0x23b29c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23B29Cu;
    {
        const bool branch_taken_0x23b29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B29Cu;
        // 0x23b2a0: 0xe6740604  swc1        $f20, 0x604($s3) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b29c) {
            ctx->pc = 0x23B2B8u;
            goto label_23b2b8;
        }
    }
    ctx->pc = 0x23B2A4u;
    // 0x23b2a4: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x23b2a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x23b2a8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x23b2a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x23b2ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23b2acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b2b0: 0x0  nop
    ctx->pc = 0x23b2b0u;
    // NOP
    // 0x23b2b4: 0xe6600604  swc1        $f0, 0x604($s3)
    ctx->pc = 0x23b2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1540), bits); }
label_23b2b8:
    // 0x23b2b8: 0x8e6406f0  lw          $a0, 0x6F0($s3)
    ctx->pc = 0x23b2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1776)));
    // 0x23b2bc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23B2BCu;
    {
        const bool branch_taken_0x23b2bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b2bc) {
            ctx->pc = 0x23B2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B2BCu;
            // 0x23b2c0: 0x8e640708  lw          $a0, 0x708($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1800)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B2D0u;
            goto label_23b2d0;
        }
    }
    ctx->pc = 0x23B2C4u;
    // 0x23b2c4: 0xc074134  jal         func_1D04D0
    ctx->pc = 0x23B2C4u;
    SET_GPR_U32(ctx, 31, 0x23B2CCu);
    ctx->pc = 0x1D04D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04D0u, 0x23B2C4u, 0x23B2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B2CCu;
label_23b2cc:
    // 0x23b2cc: 0x8e640708  lw          $a0, 0x708($s3)
    ctx->pc = 0x23b2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1800)));
label_23b2d0:
    // 0x23b2d0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23B2D0u;
    {
        const bool branch_taken_0x23b2d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b2d0) {
            ctx->pc = 0x23B2D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B2D0u;
            // 0x23b2d4: 0x926202f6  lbu         $v0, 0x2F6($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B2E4u;
            goto label_23b2e4;
        }
    }
    ctx->pc = 0x23B2D8u;
    // 0x23b2d8: 0xc074170  jal         func_1D05C0
    ctx->pc = 0x23B2D8u;
    SET_GPR_U32(ctx, 31, 0x23B2E0u);
    ctx->pc = 0x1D05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D05C0u, 0x23B2D8u, 0x23B2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B2E0u;
label_23b2e0:
    // 0x23b2e0: 0x926202f6  lbu         $v0, 0x2F6($s3)
    ctx->pc = 0x23b2e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
label_23b2e4:
    // 0x23b2e4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x23b2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23b2e8: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x23b2e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x23b2ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23b2ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b2f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23b2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23b2f4: 0xae6305f0  sw          $v1, 0x5F0($s3)
    ctx->pc = 0x23b2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1520), GPR_U32(ctx, 3));
    // 0x23b2f8: 0xe6600600  swc1        $f0, 0x600($s3)
    ctx->pc = 0x23b2f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1536), bits); }
    // 0x23b2fc: 0xa26202f6  sb          $v0, 0x2F6($s3)
    ctx->pc = 0x23b2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 2));
label_23b300:
    // 0x23b300: 0x8e6216d0  lw          $v0, 0x16D0($s3)
    ctx->pc = 0x23b300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5840)));
    // 0x23b304: 0x8e6305f0  lw          $v1, 0x5F0($s3)
    ctx->pc = 0x23b304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1520)));
    // 0x23b308: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x23b308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x23b30c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x23B30Cu;
    {
        const bool branch_taken_0x23b30c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B30Cu;
        // 0x23b310: 0xae6216d0  sw          $v0, 0x16D0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b30c) {
            ctx->pc = 0x23B340u;
            goto label_23b340;
        }
    }
    ctx->pc = 0x23B314u;
    // 0x23b314: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x23b314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x23b318: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x23B318u;
    SET_GPR_U32(ctx, 31, 0x23B320u);
    ctx->pc = 0x23B31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B318u;
    // 0x23b31c: 0xae6205f0  sw          $v0, 0x5F0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x23B318u, 0x23B320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B320u;
label_23b320:
    // 0x23b320: 0xc66005a8  lwc1        $f0, 0x5A8($s3)
    ctx->pc = 0x23b320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b324: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23b324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b328: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x23b328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x23b32c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x23b32cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x23b330: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23b330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23b334: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x23b334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x23b338: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x23B338u;
    SET_GPR_U32(ctx, 31, 0x23B340u);
    ctx->pc = 0x23B33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B338u;
    // 0x23b33c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x23B338u, 0x23B340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B340u;
label_23b340:
    // 0x23b340: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23b340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23b344: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23b344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23b348: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23B348u;
    SET_GPR_U32(ctx, 31, 0x23B350u);
    ctx->pc = 0x23B34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B348u;
    // 0x23b34c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23B348u, 0x23B350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B350u;
label_23b350:
    // 0x23b350: 0xc66305a8  lwc1        $f3, 0x5A8($s3)
    ctx->pc = 0x23b350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23b354: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23b354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b358: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x23b358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x23b35c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x23b35cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x23b360: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23b360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23b364: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23b364u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23b368: 0xc6620604  lwc1        $f2, 0x604($s3)
    ctx->pc = 0x23b368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23b36c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x23b36cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x23b370: 0xc6600338  lwc1        $f0, 0x338($s3)
    ctx->pc = 0x23b370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b374: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x23b374u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x23b378: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x23b378u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x23b37c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x23b37cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x23b380: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x23b380u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x23b384: 0xe6600338  swc1        $f0, 0x338($s3)
    ctx->pc = 0x23b384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 824), bits); }
    // 0x23b388: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x23B388u;
    SET_GPR_U32(ctx, 31, 0x23B390u);
    ctx->pc = 0x23B38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B388u;
    // 0x23b38c: 0xe6620604  swc1        $f2, 0x604($s3) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1540), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x23B388u, 0x23B390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B390u;
label_23b390:
    // 0x23b390: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23b390u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23b394: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x23B394u;
    SET_GPR_U32(ctx, 31, 0x23B39Cu);
    ctx->pc = 0x23B398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B394u;
    // 0x23b398: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23B394u, 0x23B39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B39Cu;
label_23b39c:
    // 0x23b39c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x23b39cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23b3a0: 0xc660173c  lwc1        $f0, 0x173C($s3)
    ctx->pc = 0x23b3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 5948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b3a4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x23b3a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b3a8: 0x0  nop
    ctx->pc = 0x23b3a8u;
    // NOP
    // 0x23b3ac: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x23B3ACu;
    {
        const bool branch_taken_0x23b3ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23b3ac) {
            ctx->pc = 0x23B3E8u;
            goto label_23b3e8;
        }
    }
    ctx->pc = 0x23B3B4u;
    // 0x23b3b4: 0xc6600600  lwc1        $f0, 0x600($s3)
    ctx->pc = 0x23b3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b3b8: 0xc66105a8  lwc1        $f1, 0x5A8($s3)
    ctx->pc = 0x23b3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b3bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x23b3bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23b3c0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x23b3c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b3c4: 0x0  nop
    ctx->pc = 0x23b3c4u;
    // NOP
    // 0x23b3c8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x23B3C8u;
    {
        const bool branch_taken_0x23b3c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23B3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3C8u;
        // 0x23b3cc: 0xe6600600  swc1        $f0, 0x600($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b3c8) {
            ctx->pc = 0x23B3E8u;
            goto label_23b3e8;
        }
    }
    ctx->pc = 0x23B3D0u;
    // 0x23b3d0: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x23B3D0u;
    SET_GPR_U32(ctx, 31, 0x23B3D8u);
    ctx->pc = 0x23B3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B3D0u;
    // 0x23b3d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x23B3D0u, 0x23B3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B3D8u;
label_23b3d8:
    // 0x23b3d8: 0x1440009f  bnez        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x23B3D8u;
    {
        const bool branch_taken_0x23b3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3D8u;
        // 0x23b3dc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b3d8) {
            ctx->pc = 0x23B658u;
            goto label_23b658;
        }
    }
    ctx->pc = 0x23B3E0u;
    // 0x23b3e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23b3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23b3e4: 0xa26202f6  sb          $v0, 0x2F6($s3)
    ctx->pc = 0x23b3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 2));
label_23b3e8:
    // 0x23b3e8: 0xc09d054  jal         func_274150
    ctx->pc = 0x23B3E8u;
    SET_GPR_U32(ctx, 31, 0x23B3F0u);
    ctx->pc = 0x23B3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B3E8u;
    // 0x23b3ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274150u, 0x23B3E8u, 0x23B3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B3F0u;
label_23b3f0:
    // 0x23b3f0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23B3F0u;
    {
        const bool branch_taken_0x23b3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3F0u;
        // 0x23b3f4: 0x24020089  addiu       $v0, $zero, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b3f0) {
            ctx->pc = 0x23B414u;
            goto label_23b414;
        }
    }
    ctx->pc = 0x23B3F8u;
    // 0x23b3f8: 0xc6611734  lwc1        $f1, 0x1734($s3)
    ctx->pc = 0x23b3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 5940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b3fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b3fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b400: 0x0  nop
    ctx->pc = 0x23b400u;
    // NOP
    // 0x23b404: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x23b404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b408: 0x0  nop
    ctx->pc = 0x23b408u;
    // NOP
    // 0x23b40c: 0x45000092  bc1f        . + 4 + (0x92 << 2)
    ctx->pc = 0x23B40Cu;
    {
        const bool branch_taken_0x23b40c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23B410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B40Cu;
        // 0x23b410: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b40c) {
            ctx->pc = 0x23B658u;
            goto label_23b658;
        }
    }
    ctx->pc = 0x23B414u;
label_23b414:
    // 0x23b414: 0xa26002f7  sb          $zero, 0x2F7($s3)
    ctx->pc = 0x23b414u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x23b418: 0xa26202f5  sb          $v0, 0x2F5($s3)
    ctx->pc = 0x23b418u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x23b41c: 0xa26002f4  sb          $zero, 0x2F4($s3)
    ctx->pc = 0x23b41cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x23b420: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x23B420u;
    {
        const bool branch_taken_0x23b420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B420u;
        // 0x23b424: 0xa26002f6  sb          $zero, 0x2F6($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b420) {
            ctx->pc = 0x23B654u;
            goto label_23b654;
        }
    }
    ctx->pc = 0x23B428u;
label_23b428:
    // 0x23b428: 0x8e620564  lw          $v0, 0x564($s3)
    ctx->pc = 0x23b428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
    // 0x23b42c: 0x2444fdfb  addiu       $a0, $v0, -0x205
    ctx->pc = 0x23b42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966779));
    // 0x23b430: 0x2c83007a  sltiu       $v1, $a0, 0x7A
    ctx->pc = 0x23b430u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)122) ? 1 : 0);
    // 0x23b434: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23B434u;
    {
        const bool branch_taken_0x23b434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B434u;
        // 0x23b438: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b434) {
            ctx->pc = 0x23B454u;
            goto label_23b454;
        }
    }
    ctx->pc = 0x23B43Cu;
    // 0x23b43c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x23b43cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23b440: 0x2442a840  addiu       $v0, $v0, -0x57C0
    ctx->pc = 0x23b440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944832));
    // 0x23b444: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23b444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23b448: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23b448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23b44c: 0x800008  jr          $a0
    ctx->pc = 0x23B44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B454u: goto label_23b454;
            case 0x23B464u: goto label_23b464;
            case 0x23B474u: goto label_23b474;
            case 0x23B484u: goto label_23b484;
            case 0x23B494u: goto label_23b494;
            case 0x23B4A4u: goto label_23b4a4;
            case 0x23B4B4u: goto label_23b4b4;
            case 0x23B4C4u: goto label_23b4c4;
            case 0x23B4D4u: goto label_23b4d4;
            case 0x23B4E4u: goto label_23b4e4;
            case 0x23B4F4u: goto label_23b4f4;
            case 0x23B504u: goto label_23b504;
            case 0x23B514u: goto label_23b514;
            case 0x23B524u: goto label_23b524;
            case 0x23B534u: goto label_23b534;
            case 0x23B544u: goto label_23b544;
            case 0x23B554u: goto label_23b554;
            case 0x23B564u: goto label_23b564;
            case 0x23B574u: goto label_23b574;
            case 0x23B584u: goto label_23b584;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B44Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23B454u;
label_23b454:
    // 0x23b454: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b458: 0x8c4303a4  lw          $v1, 0x3A4($v0)
    ctx->pc = 0x23b458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 932)));
    // 0x23b45c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x23B45Cu;
    {
        const bool branch_taken_0x23b45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B45Cu;
        // 0x23b460: 0x8c4403a8  lw          $a0, 0x3A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b45c) {
            ctx->pc = 0x23B590u;
            goto label_23b590;
        }
    }
    ctx->pc = 0x23B464u;
label_23b464:
    // 0x23b464: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b468: 0x8c431b88  lw          $v1, 0x1B88($v0)
    ctx->pc = 0x23b468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7048)));
    // 0x23b46c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x23B46Cu;
    {
        const bool branch_taken_0x23b46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B46Cu;
        // 0x23b470: 0x8c441b8c  lw          $a0, 0x1B8C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b46c) {
            ctx->pc = 0x23B590u;
            goto label_23b590;
        }
    }
    ctx->pc = 0x23B474u;
label_23b474:
    // 0x23b474: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b478: 0x8c432bb8  lw          $v1, 0x2BB8($v0)
    ctx->pc = 0x23b478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11192)));
    // 0x23b47c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x23B47Cu;
    {
        const bool branch_taken_0x23b47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B47Cu;
        // 0x23b480: 0x8c442bbc  lw          $a0, 0x2BBC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b47c) {
            ctx->pc = 0x23B590u;
            goto label_23b590;
        }
    }
    ctx->pc = 0x23B484u;
label_23b484:
    // 0x23b484: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b488: 0x8c4336a0  lw          $v1, 0x36A0($v0)
    ctx->pc = 0x23b488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13984)));
    // 0x23b48c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x23B48Cu;
    {
        const bool branch_taken_0x23b48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B48Cu;
        // 0x23b490: 0x8c4436a4  lw          $a0, 0x36A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13988)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b48c) {
            ctx->pc = 0x23B590u;
            goto label_23b590;
        }
    }
    ctx->pc = 0x23B494u;
label_23b494:
    // 0x23b494: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b498: 0x8c430b7c  lw          $v1, 0xB7C($v0)
    ctx->pc = 0x23b498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2940)));
    // 0x23b49c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x23B49Cu;
    {
        const bool branch_taken_0x23b49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B49Cu;
        // 0x23b4a0: 0x8c440b80  lw          $a0, 0xB80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2944)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b49c) {
            ctx->pc = 0x23B590u;
            goto label_23b590;
        }
    }
    ctx->pc = 0x23B4A4u;
label_23b4a4:
    // 0x23b4a4: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b4a8: 0x8c433c14  lw          $v1, 0x3C14($v0)
    ctx->pc = 0x23b4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15380)));
    // 0x23b4ac: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x23B4ACu;
    {
        const bool branch_taken_0x23b4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B4ACu;
        // 0x23b4b0: 0x8c443c18  lw          $a0, 0x3C18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b4ac) {
            ctx->pc = 0x23B590u;
            goto label_23b590;
        }
    }
    ctx->pc = 0x23B4B4u;
label_23b4b4:
    // 0x23b4b4: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b4b8: 0x8c433c24  lw          $v1, 0x3C24($v0)
    ctx->pc = 0x23b4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15396)));
    // 0x23b4bc: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x23B4BCu;
    {
        const bool branch_taken_0x23b4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B4BCu;
        // 0x23b4c0: 0x8c443c28  lw          $a0, 0x3C28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b4bc) {
            ctx->pc = 0x23B590u;
            goto label_23b590;
        }
    }
    ctx->pc = 0x23B4C4u;
label_23b4c4:
    // 0x23b4c4: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b4c8: 0x8c431a20  lw          $v1, 0x1A20($v0)
    ctx->pc = 0x23b4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6688)));
    // 0x23b4cc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x23B4CCu;
    {
        const bool branch_taken_0x23b4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B4CCu;
        // 0x23b4d0: 0x8c441a24  lw          $a0, 0x1A24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b4cc) {
            ctx->pc = 0x23B590u;
            goto label_23b590;
        }
    }
    ctx->pc = 0x23B4D4u;
label_23b4d4:
    // 0x23b4d4: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b4d8: 0x8c431a20  lw          $v1, 0x1A20($v0)
    ctx->pc = 0x23b4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6688)));
    // 0x23b4dc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x23B4DCu;
    {
        const bool branch_taken_0x23b4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B4DCu;
        // 0x23b4e0: 0x8c441a24  lw          $a0, 0x1A24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b4dc) {
            ctx->pc = 0x23B590u;
            goto label_23b590;
        }
    }
    ctx->pc = 0x23B4E4u;
label_23b4e4:
    // 0x23b4e4: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b4e8: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x23b4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x23b4ec: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x23B4ECu;
    {
        const bool branch_taken_0x23b4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B4ECu;
        // 0x23b4f0: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b4ec) {
            ctx->pc = 0x23B590u;
            goto label_23b590;
        }
    }
    ctx->pc = 0x23B4F4u;
label_23b4f4:
    // 0x23b4f4: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b4f8: 0x8c433724  lw          $v1, 0x3724($v0)
    ctx->pc = 0x23b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14116)));
    // 0x23b4fc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x23B4FCu;
    {
        const bool branch_taken_0x23b4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B4FCu;
        // 0x23b500: 0x8c443728  lw          $a0, 0x3728($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b4fc) {
            ctx->pc = 0x23B590u;
            goto label_23b590;
        }
    }
    ctx->pc = 0x23B504u;
label_23b504:
    // 0x23b504: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b508: 0x8c431e3c  lw          $v1, 0x1E3C($v0)
    ctx->pc = 0x23b508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7740)));
    // 0x23b50c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x23B50Cu;
    {
        const bool branch_taken_0x23b50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B50Cu;
        // 0x23b510: 0x8c441e40  lw          $a0, 0x1E40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b50c) {
            ctx->pc = 0x23B590u;
            goto label_23b590;
        }
    }
    ctx->pc = 0x23B514u;
label_23b514:
    // 0x23b514: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b518: 0x8c431f88  lw          $v1, 0x1F88($v0)
    ctx->pc = 0x23b518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8072)));
    // 0x23b51c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x23B51Cu;
    {
        const bool branch_taken_0x23b51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B51Cu;
        // 0x23b520: 0x8c441f8c  lw          $a0, 0x1F8C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b51c) {
            ctx->pc = 0x23B590u;
            goto label_23b590;
        }
    }
    ctx->pc = 0x23B524u;
label_23b524:
    // 0x23b524: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b528: 0x8c4317e8  lw          $v1, 0x17E8($v0)
    ctx->pc = 0x23b528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6120)));
    // 0x23b52c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x23B52Cu;
    {
        const bool branch_taken_0x23b52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B52Cu;
        // 0x23b530: 0x8c4417ec  lw          $a0, 0x17EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b52c) {
            ctx->pc = 0x23B590u;
            goto label_23b590;
        }
    }
    ctx->pc = 0x23B534u;
label_23b534:
    // 0x23b534: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b538: 0x8c433b0c  lw          $v1, 0x3B0C($v0)
    ctx->pc = 0x23b538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15116)));
    // 0x23b53c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x23B53Cu;
    {
        const bool branch_taken_0x23b53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B53Cu;
        // 0x23b540: 0x8c443b10  lw          $a0, 0x3B10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b53c) {
            ctx->pc = 0x23B590u;
            goto label_23b590;
        }
    }
    ctx->pc = 0x23B544u;
label_23b544:
    // 0x23b544: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b548: 0x8c43346c  lw          $v1, 0x346C($v0)
    ctx->pc = 0x23b548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13420)));
    // 0x23b54c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x23B54Cu;
    {
        const bool branch_taken_0x23b54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B54Cu;
        // 0x23b550: 0x8c443470  lw          $a0, 0x3470($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b54c) {
            ctx->pc = 0x23B590u;
            goto label_23b590;
        }
    }
    ctx->pc = 0x23B554u;
label_23b554:
    // 0x23b554: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b558: 0x8c431d58  lw          $v1, 0x1D58($v0)
    ctx->pc = 0x23b558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7512)));
    // 0x23b55c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x23B55Cu;
    {
        const bool branch_taken_0x23b55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B55Cu;
        // 0x23b560: 0x8c441d5c  lw          $a0, 0x1D5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b55c) {
            ctx->pc = 0x23B590u;
            goto label_23b590;
        }
    }
    ctx->pc = 0x23B564u;
label_23b564:
    // 0x23b564: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b568: 0x8c432ed4  lw          $v1, 0x2ED4($v0)
    ctx->pc = 0x23b568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11988)));
    // 0x23b56c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23B56Cu;
    {
        const bool branch_taken_0x23b56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B56Cu;
        // 0x23b570: 0x8c442ed8  lw          $a0, 0x2ED8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b56c) {
            ctx->pc = 0x23B590u;
            goto label_23b590;
        }
    }
    ctx->pc = 0x23B574u;
label_23b574:
    // 0x23b574: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b578: 0x8c4323b0  lw          $v1, 0x23B0($v0)
    ctx->pc = 0x23b578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9136)));
    // 0x23b57c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23B57Cu;
    {
        const bool branch_taken_0x23b57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B57Cu;
        // 0x23b580: 0x8c4423b4  lw          $a0, 0x23B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b57c) {
            ctx->pc = 0x23B590u;
            goto label_23b590;
        }
    }
    ctx->pc = 0x23B584u;
label_23b584:
    // 0x23b584: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23b584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23b588: 0x8c4313c0  lw          $v1, 0x13C0($v0)
    ctx->pc = 0x23b588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5056)));
    // 0x23b58c: 0x8c4413c4  lw          $a0, 0x13C4($v0)
    ctx->pc = 0x23b58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5060)));
label_23b590:
    // 0x23b590: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23b590u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23b594: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x23b594u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23b598: 0xc09d91a  jal         func_276468
    ctx->pc = 0x23B598u;
    SET_GPR_U32(ctx, 31, 0x23B5A0u);
    ctx->pc = 0x23B59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B598u;
    // 0x23b59c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x23B598u, 0x23B5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B5A0u;
label_23b5a0:
    // 0x23b5a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23b5a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23b5a4: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x23b5a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23b5a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23b5a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b5ac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23b5acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b5b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23b5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b5b4: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x23b5b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23b5b8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23B5B8u;
    SET_GPR_U32(ctx, 31, 0x23B5C0u);
    ctx->pc = 0x23B5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B5B8u;
    // 0x23b5bc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23B5B8u, 0x23B5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B5C0u;
label_23b5c0:
    // 0x23b5c0: 0x926202f6  lbu         $v0, 0x2F6($s3)
    ctx->pc = 0x23b5c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
    // 0x23b5c4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x23b5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x23b5c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23b5c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b5cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23b5d0: 0xe6600600  swc1        $f0, 0x600($s3)
    ctx->pc = 0x23b5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1536), bits); }
    // 0x23b5d4: 0xa26202f6  sb          $v0, 0x2F6($s3)
    ctx->pc = 0x23b5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 2));
label_23b5d8:
    // 0x23b5d8: 0xc6610600  lwc1        $f1, 0x600($s3)
    ctx->pc = 0x23b5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b5dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b5dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b5e0: 0x0  nop
    ctx->pc = 0x23b5e0u;
    // NOP
    // 0x23b5e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x23b5e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b5e8: 0x0  nop
    ctx->pc = 0x23b5e8u;
    // NOP
    // 0x23b5ec: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x23B5ECu;
    {
        const bool branch_taken_0x23b5ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23b5ec) {
            ctx->pc = 0x23B60Cu;
            goto label_23b60c;
        }
    }
    ctx->pc = 0x23B5F4u;
    // 0x23b5f4: 0xc66005a8  lwc1        $f0, 0x5A8($s3)
    ctx->pc = 0x23b5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b5f8: 0x8e6216d0  lw          $v0, 0x16D0($s3)
    ctx->pc = 0x23b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5840)));
    // 0x23b5fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23b5fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23b600: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x23b600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x23b604: 0xae6216d0  sw          $v0, 0x16D0($s3)
    ctx->pc = 0x23b604u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5840), GPR_U32(ctx, 2));
    // 0x23b608: 0xe6600600  swc1        $f0, 0x600($s3)
    ctx->pc = 0x23b608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1536), bits); }
label_23b60c:
    // 0x23b60c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23B60Cu;
    SET_GPR_U32(ctx, 31, 0x23B614u);
    ctx->pc = 0x23B610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B60Cu;
    // 0x23b610: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23B60Cu, 0x23B614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B614u;
label_23b614:
    // 0x23b614: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23B614u;
    {
        const bool branch_taken_0x23b614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B614u;
        // 0x23b618: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b614) {
            ctx->pc = 0x23B638u;
            goto label_23b638;
        }
    }
    ctx->pc = 0x23B61Cu;
    // 0x23b61c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23b61cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b620: 0xc09bb90  jal         func_26EE40
    ctx->pc = 0x23B620u;
    SET_GPR_U32(ctx, 31, 0x23B628u);
    ctx->pc = 0x23B624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B620u;
    // 0x23b624: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EE40u, 0x23B620u, 0x23B628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B628u;
label_23b628:
    // 0x23b628: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x23B628u;
    SET_GPR_U32(ctx, 31, 0x23B630u);
    ctx->pc = 0x23B62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B628u;
    // 0x23b62c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x23B628u, 0x23B630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B630u;
label_23b630:
    // 0x23b630: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23B630u;
    {
        const bool branch_taken_0x23b630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B630u;
        // 0x23b634: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b630) {
            ctx->pc = 0x23B658u;
            goto label_23b658;
        }
    }
    ctx->pc = 0x23B638u;
label_23b638:
    // 0x23b638: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23b638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23b63c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23b63cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23b640: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x23B640u;
    SET_GPR_U32(ctx, 31, 0x23B648u);
    ctx->pc = 0x23B644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B640u;
    // 0x23b644: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x23B640u, 0x23B648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B648u;
label_23b648:
    // 0x23b648: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23b648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b64c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x23B64Cu;
    SET_GPR_U32(ctx, 31, 0x23B654u);
    ctx->pc = 0x23B650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B64Cu;
    // 0x23b650: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23B64Cu, 0x23B654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B654u;
label_23b654:
    // 0x23b654: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x23b654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23b658:
    // 0x23b658: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x23b658u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23b65c:
    // 0x23b65c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23b65cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b660: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x23b660u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b668: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x23b668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23b66c: 0x3e00008  jr          $ra
    ctx->pc = 0x23B66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B66Cu;
        // 0x23b670: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B674u;
    // 0x23b674: 0x0  nop
    ctx->pc = 0x23b674u;
    // NOP
    ctx->pc = 0x23b678u;
}
