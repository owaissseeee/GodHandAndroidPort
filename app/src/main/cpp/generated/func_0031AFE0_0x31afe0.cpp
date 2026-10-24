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

// Function: func_0031AFE0
// Address: 0x31afe0 - 0x31b2e0
void func_0031AFE0_0x31afe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031AFE0_0x31afe0");
#endif

    switch (ctx->pc) {
        case 0x31b058u: goto label_31b058;
        case 0x31b1e4u: goto label_31b1e4;
        case 0x31b208u: goto label_31b208;
        case 0x31b2d0u: goto label_31b2d0;
        default: break;
    }

    ctx->pc = 0x31afe0u;

    // 0x31afe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31afe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31afe4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x31afe4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31afe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31afe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31afec: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x31afecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x31aff0: 0xfd000040  sd          $zero, 0x40($t0)
    ctx->pc = 0x31aff0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 64), GPR_U64(ctx, 0));
    // 0x31aff4: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x31aff4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aff8: 0xdd020018  ld          $v0, 0x18($t0)
    ctx->pc = 0x31aff8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x31affc: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x31affcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b000: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x31b000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x31b004: 0xfd020020  sd          $v0, 0x20($t0)
    ctx->pc = 0x31b004u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 2));
    // 0x31b008: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x31b008u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
    // 0x31b00c: 0xfd000018  sd          $zero, 0x18($t0)
    ctx->pc = 0x31b00cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 0));
    // 0x31b010: 0xfd000038  sd          $zero, 0x38($t0)
    ctx->pc = 0x31b010u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 56), GPR_U64(ctx, 0));
    // 0x31b014: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x31b014u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x31b018: 0x8ca27a0c  lw          $v0, 0x7A0C($a1)
    ctx->pc = 0x31b018u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x31b01c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B01Cu;
    {
        const bool branch_taken_0x31b01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B01Cu;
        // 0x31b020: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b01c) {
            ctx->pc = 0x31B030u;
            goto label_31b030;
        }
    }
    ctx->pc = 0x31B024u;
    // 0x31b024: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x31b024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x31b028: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31B028u;
    {
        const bool branch_taken_0x31b028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B028u;
        // 0x31b02c: 0x24443d50  addiu       $a0, $v0, 0x3D50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b028) {
            ctx->pc = 0x31B038u;
            goto label_31b038;
        }
    }
    ctx->pc = 0x31B030u;
label_31b030:
    // 0x31b030: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x31b030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x31b034: 0x24443e50  addiu       $a0, $v0, 0x3E50
    ctx->pc = 0x31b034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15952));
label_31b038:
    // 0x31b038: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x31b038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x31b03c: 0x8c627a34  lw          $v0, 0x7A34($v1)
    ctx->pc = 0x31b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A34u));
    // 0x31b040: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x31b040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x31b044: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x31B044u;
    {
        const bool branch_taken_0x31b044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B044u;
        // 0x31b048: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b044) {
            ctx->pc = 0x31B050u;
            goto label_31b050;
        }
    }
    ctx->pc = 0x31B04Cu;
    // 0x31b04c: 0x24443e50  addiu       $a0, $v0, 0x3E50
    ctx->pc = 0x31b04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15952));
label_31b050:
    // 0x31b050: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31b050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b054: 0x3c0b0074  lui         $t3, 0x74
    ctx->pc = 0x31b054u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)116 << 16));
label_31b058:
    // 0x31b058: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x31b058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x31b05c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x31b05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31b060: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31b060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31b064: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x31B064u;
    {
        const bool branch_taken_0x31b064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b064) {
            ctx->pc = 0x31B068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B064u;
            // 0x31b068: 0x8d220018  lw          $v0, 0x18($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B080u;
            goto label_31b080;
        }
    }
    ctx->pc = 0x31B06Cu;
    // 0x31b06c: 0xdd020018  ld          $v0, 0x18($t0)
    ctx->pc = 0x31b06cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x31b070: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x31b070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x31b074: 0xfd020018  sd          $v0, 0x18($t0)
    ctx->pc = 0x31b074u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 2));
    // 0x31b078: 0x8d220018  lw          $v0, 0x18($t1)
    ctx->pc = 0x31b078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x31b07c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x31b07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31b080:
    // 0x31b080: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31b080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31b084: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B084u;
    {
        const bool branch_taken_0x31b084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b084) {
            ctx->pc = 0x31B088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B084u;
            // 0x31b088: 0x8d22001c  lw          $v0, 0x1C($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B09Cu;
            goto label_31b09c;
        }
    }
    ctx->pc = 0x31B08Cu;
    // 0x31b08c: 0xdd020040  ld          $v0, 0x40($t0)
    ctx->pc = 0x31b08cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 64)));
    // 0x31b090: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x31b090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x31b094: 0xfd020040  sd          $v0, 0x40($t0)
    ctx->pc = 0x31b094u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 64), GPR_U64(ctx, 2));
    // 0x31b098: 0x8d22001c  lw          $v0, 0x1C($t1)
    ctx->pc = 0x31b098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
label_31b09c:
    // 0x31b09c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x31b09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31b0a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31b0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31b0a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B0A4u;
    {
        const bool branch_taken_0x31b0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B0A4u;
        // 0x31b0a8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b0a4) {
            ctx->pc = 0x31B0B8u;
            goto label_31b0b8;
        }
    }
    ctx->pc = 0x31B0ACu;
    // 0x31b0ac: 0xdd020038  ld          $v0, 0x38($t0)
    ctx->pc = 0x31b0acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x31b0b0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x31b0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x31b0b4: 0xfd020038  sd          $v0, 0x38($t0)
    ctx->pc = 0x31b0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 56), GPR_U64(ctx, 2));
label_31b0b8:
    // 0x31b0b8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x31b0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x31b0bc: 0x2ca20040  sltiu       $v0, $a1, 0x40
    ctx->pc = 0x31b0bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x31b0c0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x31B0C0u;
    {
        const bool branch_taken_0x31b0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B0C0u;
        // 0x31b0c4: 0x63078  dsll        $a2, $a2, 1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b0c0) {
            ctx->pc = 0x31B058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31b058;
        }
    }
    ctx->pc = 0x31B0C8u;
    // 0x31b0c8: 0x81220070  lb          $v0, 0x70($t1)
    ctx->pc = 0x31b0c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 112)));
    // 0x31b0cc: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B0CCu;
    {
        const bool branch_taken_0x31b0cc = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x31b0cc) {
            ctx->pc = 0x31B0E4u;
            goto label_31b0e4;
        }
    }
    ctx->pc = 0x31B0D4u;
    // 0x31b0d4: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x31b0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x31b0d8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x31b0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x31b0dc: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x31b0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x31b0e0: 0x81220070  lb          $v0, 0x70($t1)
    ctx->pc = 0x31b0e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 112)));
label_31b0e4:
    // 0x31b0e4: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B0E4u;
    {
        const bool branch_taken_0x31b0e4 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x31b0e4) {
            ctx->pc = 0x31B0E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B0E4u;
            // 0x31b0e8: 0x81220071  lb          $v0, 0x71($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 113)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B0FCu;
            goto label_31b0fc;
        }
    }
    ctx->pc = 0x31B0ECu;
    // 0x31b0ec: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x31b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x31b0f0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x31b0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x31b0f4: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x31b0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x31b0f8: 0x81220071  lb          $v0, 0x71($t1)
    ctx->pc = 0x31b0f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 113)));
label_31b0fc:
    // 0x31b0fc: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B0FCu;
    {
        const bool branch_taken_0x31b0fc = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x31b0fc) {
            ctx->pc = 0x31B100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B0FCu;
            // 0x31b100: 0x81220071  lb          $v0, 0x71($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 113)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B114u;
            goto label_31b114;
        }
    }
    ctx->pc = 0x31B104u;
    // 0x31b104: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x31b104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x31b108: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x31b108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x31b10c: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x31b10cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x31b110: 0x81220071  lb          $v0, 0x71($t1)
    ctx->pc = 0x31b110u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 113)));
label_31b114:
    // 0x31b114: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B114u;
    {
        const bool branch_taken_0x31b114 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x31b114) {
            ctx->pc = 0x31B118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B114u;
            // 0x31b118: 0x81220072  lb          $v0, 0x72($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 114)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B12Cu;
            goto label_31b12c;
        }
    }
    ctx->pc = 0x31B11Cu;
    // 0x31b11c: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x31b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x31b120: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x31b120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x31b124: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x31b124u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x31b128: 0x81220072  lb          $v0, 0x72($t1)
    ctx->pc = 0x31b128u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 114)));
label_31b12c:
    // 0x31b12c: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B12Cu;
    {
        const bool branch_taken_0x31b12c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x31b12c) {
            ctx->pc = 0x31B130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B12Cu;
            // 0x31b130: 0x81220072  lb          $v0, 0x72($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 114)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B144u;
            goto label_31b144;
        }
    }
    ctx->pc = 0x31B134u;
    // 0x31b134: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x31b134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x31b138: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x31b138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x31b13c: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x31b13cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x31b140: 0x81220072  lb          $v0, 0x72($t1)
    ctx->pc = 0x31b140u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 114)));
label_31b144:
    // 0x31b144: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B144u;
    {
        const bool branch_taken_0x31b144 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x31b144) {
            ctx->pc = 0x31B148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B144u;
            // 0x31b148: 0x81220073  lb          $v0, 0x73($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 115)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B15Cu;
            goto label_31b15c;
        }
    }
    ctx->pc = 0x31B14Cu;
    // 0x31b14c: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x31b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x31b150: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x31b150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x31b154: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x31b154u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x31b158: 0x81220073  lb          $v0, 0x73($t1)
    ctx->pc = 0x31b158u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 115)));
label_31b15c:
    // 0x31b15c: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B15Cu;
    {
        const bool branch_taken_0x31b15c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x31b15c) {
            ctx->pc = 0x31B160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B15Cu;
            // 0x31b160: 0x81220073  lb          $v0, 0x73($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 115)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B174u;
            goto label_31b174;
        }
    }
    ctx->pc = 0x31B164u;
    // 0x31b164: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x31b164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x31b168: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x31b168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x31b16c: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x31b16cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x31b170: 0x81220073  lb          $v0, 0x73($t1)
    ctx->pc = 0x31b170u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 115)));
label_31b174:
    // 0x31b174: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B174u;
    {
        const bool branch_taken_0x31b174 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x31b174) {
            ctx->pc = 0x31B178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B174u;
            // 0x31b178: 0xdd060018  ld          $a2, 0x18($t0) (Delay Slot)
            SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B18Cu;
            goto label_31b18c;
        }
    }
    ctx->pc = 0x31B17Cu;
    // 0x31b17c: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x31b17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x31b180: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x31b180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x31b184: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x31b184u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x31b188: 0xdd060018  ld          $a2, 0x18($t0)
    ctx->pc = 0x31b188u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 24)));
label_31b18c:
    // 0x31b18c: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x31b18cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x31b190: 0xdd040020  ld          $a0, 0x20($t0)
    ctx->pc = 0x31b190u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x31b194: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x31b194u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x31b198: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x31b198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x31b19c: 0xc41026  xor         $v0, $a2, $a0
    ctx->pc = 0x31b19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 4));
    // 0x31b1a0: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x31b1a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x31b1a4: 0xe31826  xor         $v1, $a3, $v1
    ctx->pc = 0x31b1a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 3));
    // 0x31b1a8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x31b1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x31b1ac: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x31b1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x31b1b0: 0xfd020028  sd          $v0, 0x28($t0)
    ctx->pc = 0x31b1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 40), GPR_U64(ctx, 2));
    // 0x31b1b4: 0xfd040030  sd          $a0, 0x30($t0)
    ctx->pc = 0x31b1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 48), GPR_U64(ctx, 4));
    // 0x31b1b8: 0xad030010  sw          $v1, 0x10($t0)
    ctx->pc = 0x31b1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
    // 0x31b1bc: 0x8d627a78  lw          $v0, 0x7A78($t3)
    ctx->pc = 0x31b1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 31352)));
    // 0x31b1c0: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x31b1c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x31b1c4: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x31B1C4u;
    {
        const bool branch_taken_0x31b1c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B1C4u;
        // 0x31b1c8: 0x2117a  dsrl        $v0, $v0, 5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b1c4) {
            ctx->pc = 0x31B1ECu;
            goto label_31b1ec;
        }
    }
    ctx->pc = 0x31B1CCu;
    // 0x31b1cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31b1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31b1d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31B1D0u;
    {
        const bool branch_taken_0x31b1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B1D0u;
        // 0x31b1d4: 0x8d627a78  lw          $v0, 0x7A78($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 31352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b1d0) {
            ctx->pc = 0x31B1F0u;
            goto label_31b1f0;
        }
    }
    ctx->pc = 0x31B1D8u;
    // 0x31b1d8: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x31b1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b1dc: 0xc0c6d04  jal         func_31B410
    ctx->pc = 0x31B1DCu;
    SET_GPR_U32(ctx, 31, 0x31B1E4u);
    ctx->pc = 0x31B1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B1DCu;
    // 0x31b1e0: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B410u, 0x31B1DCu, 0x31B1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B1E4u;
label_31b1e4:
    // 0x31b1e4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x31B1E4u;
    {
        const bool branch_taken_0x31b1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B1E4u;
        // 0x31b1e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b1e4) {
            ctx->pc = 0x31B2D4u;
            goto label_31b2d4;
        }
    }
    ctx->pc = 0x31B1ECu;
label_31b1ec:
    // 0x31b1ec: 0x8d627a78  lw          $v0, 0x7A78($t3)
    ctx->pc = 0x31b1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 31352)));
label_31b1f0:
    // 0x31b1f0: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x31b1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x31b1f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31b1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31b1f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B1F8u;
    {
        const bool branch_taken_0x31b1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B1F8u;
        // 0x31b1fc: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b1f8) {
            ctx->pc = 0x31B210u;
            goto label_31b210;
        }
    }
    ctx->pc = 0x31B200u;
    // 0x31b200: 0xc0c6d2e  jal         func_31B4B8
    ctx->pc = 0x31B200u;
    SET_GPR_U32(ctx, 31, 0x31B208u);
    ctx->pc = 0x31B204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B200u;
    // 0x31b204: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B4B8u, 0x31B200u, 0x31B208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B208u;
label_31b208:
    // 0x31b208: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x31B208u;
    {
        const bool branch_taken_0x31b208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B208u;
        // 0x31b20c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b208) {
            ctx->pc = 0x31B2D4u;
            goto label_31b2d4;
        }
    }
    ctx->pc = 0x31B210u;
label_31b210:
    // 0x31b210: 0xdd030018  ld          $v1, 0x18($t0)
    ctx->pc = 0x31b210u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x31b214: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x31b214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b218: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x31b218u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x31b21c: 0x91220060  lbu         $v0, 0x60($t1)
    ctx->pc = 0x31b21cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 96)));
    // 0x31b220: 0xa1020068  sb          $v0, 0x68($t0)
    ctx->pc = 0x31b220u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 104), (uint8_t)GPR_U32(ctx, 2));
    // 0x31b224: 0x91230061  lbu         $v1, 0x61($t1)
    ctx->pc = 0x31b224u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 97)));
    // 0x31b228: 0xa1030069  sb          $v1, 0x69($t0)
    ctx->pc = 0x31b228u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 105), (uint8_t)GPR_U32(ctx, 3));
    // 0x31b22c: 0x91220062  lbu         $v0, 0x62($t1)
    ctx->pc = 0x31b22cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 98)));
    // 0x31b230: 0xa102006a  sb          $v0, 0x6A($t0)
    ctx->pc = 0x31b230u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 106), (uint8_t)GPR_U32(ctx, 2));
    // 0x31b234: 0x91230063  lbu         $v1, 0x63($t1)
    ctx->pc = 0x31b234u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 99)));
    // 0x31b238: 0xa103006b  sb          $v1, 0x6B($t0)
    ctx->pc = 0x31b238u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 107), (uint8_t)GPR_U32(ctx, 3));
    // 0x31b23c: 0x91220067  lbu         $v0, 0x67($t1)
    ctx->pc = 0x31b23cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 103)));
    // 0x31b240: 0xa102006f  sb          $v0, 0x6F($t0)
    ctx->pc = 0x31b240u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 111), (uint8_t)GPR_U32(ctx, 2));
    // 0x31b244: 0x91230066  lbu         $v1, 0x66($t1)
    ctx->pc = 0x31b244u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 102)));
    // 0x31b248: 0xa103006e  sb          $v1, 0x6E($t0)
    ctx->pc = 0x31b248u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 110), (uint8_t)GPR_U32(ctx, 3));
    // 0x31b24c: 0x91220064  lbu         $v0, 0x64($t1)
    ctx->pc = 0x31b24cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 100)));
    // 0x31b250: 0xa102006c  sb          $v0, 0x6C($t0)
    ctx->pc = 0x31b250u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 108), (uint8_t)GPR_U32(ctx, 2));
    // 0x31b254: 0x91230065  lbu         $v1, 0x65($t1)
    ctx->pc = 0x31b254u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 101)));
    // 0x31b258: 0xa103006d  sb          $v1, 0x6D($t0)
    ctx->pc = 0x31b258u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 109), (uint8_t)GPR_U32(ctx, 3));
    // 0x31b25c: 0x91220068  lbu         $v0, 0x68($t1)
    ctx->pc = 0x31b25cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 104)));
    // 0x31b260: 0xa1020070  sb          $v0, 0x70($t0)
    ctx->pc = 0x31b260u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 112), (uint8_t)GPR_U32(ctx, 2));
    // 0x31b264: 0x9123006b  lbu         $v1, 0x6B($t1)
    ctx->pc = 0x31b264u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 107)));
    // 0x31b268: 0xa1030073  sb          $v1, 0x73($t0)
    ctx->pc = 0x31b268u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 115), (uint8_t)GPR_U32(ctx, 3));
    // 0x31b26c: 0x91220069  lbu         $v0, 0x69($t1)
    ctx->pc = 0x31b26cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 105)));
    // 0x31b270: 0xa1020071  sb          $v0, 0x71($t0)
    ctx->pc = 0x31b270u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 113), (uint8_t)GPR_U32(ctx, 2));
    // 0x31b274: 0x9123006a  lbu         $v1, 0x6A($t1)
    ctx->pc = 0x31b274u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 106)));
    // 0x31b278: 0xa1030072  sb          $v1, 0x72($t0)
    ctx->pc = 0x31b278u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 114), (uint8_t)GPR_U32(ctx, 3));
    // 0x31b27c: 0x9122006c  lbu         $v0, 0x6C($t1)
    ctx->pc = 0x31b27cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 108)));
    // 0x31b280: 0xa1020074  sb          $v0, 0x74($t0)
    ctx->pc = 0x31b280u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 116), (uint8_t)GPR_U32(ctx, 2));
    // 0x31b284: 0x9123006d  lbu         $v1, 0x6D($t1)
    ctx->pc = 0x31b284u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 109)));
    // 0x31b288: 0xa1030075  sb          $v1, 0x75($t0)
    ctx->pc = 0x31b288u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 117), (uint8_t)GPR_U32(ctx, 3));
    // 0x31b28c: 0x9122006e  lbu         $v0, 0x6E($t1)
    ctx->pc = 0x31b28cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 110)));
    // 0x31b290: 0xa1020076  sb          $v0, 0x76($t0)
    ctx->pc = 0x31b290u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 118), (uint8_t)GPR_U32(ctx, 2));
    // 0x31b294: 0x9123006f  lbu         $v1, 0x6F($t1)
    ctx->pc = 0x31b294u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 111)));
    // 0x31b298: 0xa1030077  sb          $v1, 0x77($t0)
    ctx->pc = 0x31b298u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 119), (uint8_t)GPR_U32(ctx, 3));
    // 0x31b29c: 0x91220070  lbu         $v0, 0x70($t1)
    ctx->pc = 0x31b29cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 112)));
    // 0x31b2a0: 0xa1020078  sb          $v0, 0x78($t0)
    ctx->pc = 0x31b2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 120), (uint8_t)GPR_U32(ctx, 2));
    // 0x31b2a4: 0x91230071  lbu         $v1, 0x71($t1)
    ctx->pc = 0x31b2a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 113)));
    // 0x31b2a8: 0xa1030079  sb          $v1, 0x79($t0)
    ctx->pc = 0x31b2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 121), (uint8_t)GPR_U32(ctx, 3));
    // 0x31b2ac: 0x91220072  lbu         $v0, 0x72($t1)
    ctx->pc = 0x31b2acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 114)));
    // 0x31b2b0: 0xa102007a  sb          $v0, 0x7A($t0)
    ctx->pc = 0x31b2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 122), (uint8_t)GPR_U32(ctx, 2));
    // 0x31b2b4: 0x91230073  lbu         $v1, 0x73($t1)
    ctx->pc = 0x31b2b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 115)));
    // 0x31b2b8: 0xa103007b  sb          $v1, 0x7B($t0)
    ctx->pc = 0x31b2b8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 123), (uint8_t)GPR_U32(ctx, 3));
    // 0x31b2bc: 0xc5200074  lwc1        $f0, 0x74($t1)
    ctx->pc = 0x31b2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b2c0: 0xe500007c  swc1        $f0, 0x7C($t0)
    ctx->pc = 0x31b2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 124), bits); }
    // 0x31b2c4: 0xc5210078  lwc1        $f1, 0x78($t1)
    ctx->pc = 0x31b2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31b2c8: 0xc0c6cb8  jal         func_31B2E0
    ctx->pc = 0x31B2C8u;
    SET_GPR_U32(ctx, 31, 0x31B2D0u);
    ctx->pc = 0x31B2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B2C8u;
    // 0x31b2cc: 0xe5010080  swc1        $f1, 0x80($t0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B2E0u, 0x31B2C8u, 0x31B2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B2D0u;
label_31b2d0:
    // 0x31b2d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31b2d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31b2d4:
    // 0x31b2d4: 0x3e00008  jr          $ra
    ctx->pc = 0x31B2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B2D4u;
        // 0x31b2d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B2D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B2DCu;
    // 0x31b2dc: 0x0  nop
    ctx->pc = 0x31b2dcu;
    // NOP
    ctx->pc = 0x31b2e0u;
}
