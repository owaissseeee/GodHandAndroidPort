#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: dpmul
// Address: 0x79cfd8 - 0x79d280
void dpmul_0x79cfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpmul_0x79cfd8");
#endif

    switch (ctx->pc) {
        case 0x79d014u: goto label_79d014;
        case 0x79d024u: goto label_79d024;
        case 0x79d0f0u: goto label_79d0f0;
        case 0x79d100u: goto label_79d100;
        case 0x79d110u: goto label_79d110;
        case 0x79d120u: goto label_79d120;
        case 0x79d198u: goto label_79d198;
        case 0x79d1f0u: goto label_79d1f0;
        case 0x79d254u: goto label_79d254;
        default: break;
    }

    ctx->pc = 0x79cfd8u;

    // 0x79cfd8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x79cfd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x79cfdc: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x79cfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x79cfe0: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x79cfe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x79cfe4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x79cfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x79cfe8: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x79cfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x79cfec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79cfecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79cff0: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x79cff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x79cff4: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x79cff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x79cff8: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x79cff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x79cffc: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x79cffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x79d000: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x79d000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x79d004: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x79d004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x79d008: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x79d008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x79d00c: 0xc1e730e  jal         func_79CC38
    ctx->pc = 0x79D00Cu;
    SET_GPR_U32(ctx, 31, 0x79D014u);
    ctx->pc = 0x79D010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D00Cu;
    // 0x79d010: 0xffb10080  sd          $s1, 0x80($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CC38u, 0x79D00Cu, 0x79D014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D014u;
label_79d014:
    // 0x79d014: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x79d014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79d018: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x79d018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x79d01c: 0xc1e730e  jal         func_79CC38
    ctx->pc = 0x79D01Cu;
    SET_GPR_U32(ctx, 31, 0x79D024u);
    ctx->pc = 0x79D020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D01Cu;
    // 0x79d020: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CC38u, 0x79D01Cu, 0x79D024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D024u;
label_79d024:
    // 0x79d024: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x79d024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79d028: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x79d028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79d02c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x79D02Cu;
    {
        const bool branch_taken_0x79d02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79D030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D02Cu;
        // 0x79d030: 0x27b70040  addiu       $s7, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d02c) {
            ctx->pc = 0x79D088u;
            goto label_79d088;
        }
    }
    ctx->pc = 0x79D034u;
    // 0x79d034: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x79d034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79d038: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x79d038u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79d03c: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x79D03Cu;
    {
        const bool branch_taken_0x79d03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79d03c) {
            ctx->pc = 0x79D040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79D03Cu;
            // 0x79d040: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79D0B0u;
            goto label_79d0b0;
        }
    }
    ctx->pc = 0x79D044u;
    // 0x79d044: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x79d044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
    // 0x79d048: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79D048u;
    {
        const bool branch_taken_0x79d048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79D04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D048u;
        // 0x79d04c: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d048) {
            ctx->pc = 0x79D064u;
            goto label_79d064;
        }
    }
    ctx->pc = 0x79D050u;
    // 0x79d050: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x79d050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x79d054: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79D054u;
    {
        const bool branch_taken_0x79d054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D054u;
        // 0x79d058: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d054) {
            ctx->pc = 0x79D074u;
            goto label_79d074;
        }
    }
    ctx->pc = 0x79D05Cu;
    // 0x79d05c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x79D05Cu;
    {
        const bool branch_taken_0x79d05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D05Cu;
        // 0x79d060: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d05c) {
            ctx->pc = 0x79D090u;
            goto label_79d090;
        }
    }
    ctx->pc = 0x79D064u;
label_79d064:
    // 0x79d064: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79D064u;
    {
        const bool branch_taken_0x79d064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D064u;
        // 0x79d068: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d064) {
            ctx->pc = 0x79D080u;
            goto label_79d080;
        }
    }
    ctx->pc = 0x79D06Cu;
    // 0x79d06c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x79D06Cu;
    {
        const bool branch_taken_0x79d06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D06Cu;
        // 0x79d070: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d06c) {
            ctx->pc = 0x79D0B0u;
            goto label_79d0b0;
        }
    }
    ctx->pc = 0x79D074u;
label_79d074:
    // 0x79d074: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79d074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79d078: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x79D078u;
    {
        const bool branch_taken_0x79d078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D078u;
        // 0x79d07c: 0x244409f8  addiu       $a0, $v0, 0x9F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d078) {
            ctx->pc = 0x79D24Cu;
            goto label_79d24c;
        }
    }
    ctx->pc = 0x79D080u;
label_79d080:
    // 0x79d080: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79D080u;
    {
        const bool branch_taken_0x79d080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79D084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D080u;
        // 0x79d084: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d080) {
            ctx->pc = 0x79D0A4u;
            goto label_79d0a4;
        }
    }
    ctx->pc = 0x79D088u;
label_79d088:
    // 0x79d088: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x79d088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79d08c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79d08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79d090:
    // 0x79d090: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x79d090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x79d094: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x79d094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x79d098: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79d098u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x79d09c: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x79D09Cu;
    {
        const bool branch_taken_0x79d09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D09Cu;
        // 0x79d0a0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d09c) {
            ctx->pc = 0x79D24Cu;
            goto label_79d24c;
        }
    }
    ctx->pc = 0x79D0A4u;
label_79d0a4:
    // 0x79d0a4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79D0A4u;
    {
        const bool branch_taken_0x79d0a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79D0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D0A4u;
        // 0x79d0a8: 0xdfb30010  ld          $s3, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d0a4) {
            ctx->pc = 0x79D0C8u;
            goto label_79d0c8;
        }
    }
    ctx->pc = 0x79D0ACu;
    // 0x79d0ac: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x79d0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_79d0b0:
    // 0x79d0b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79d0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d0b4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x79d0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79d0b8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x79d0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x79d0bc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79d0bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x79d0c0: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x79D0C0u;
    {
        const bool branch_taken_0x79d0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D0C0u;
        // 0x79d0c4: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d0c0) {
            ctx->pc = 0x79D24Cu;
            goto label_79d24c;
        }
    }
    ctx->pc = 0x79D0C8u;
label_79d0c8:
    // 0x79d0c8: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x79d0c8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
    // 0x79d0cc: 0x16b03e  dsrl32      $s6, $s6, 0
    ctx->pc = 0x79d0ccu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 0));
    // 0x79d0d0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x79d0d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79d0d4: 0x2768024  and         $s0, $s3, $s6
    ctx->pc = 0x79d0d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & GPR_U64(ctx, 22));
    // 0x79d0d8: 0x256a824  and         $s5, $s2, $s6
    ctx->pc = 0x79d0d8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) & GPR_U64(ctx, 22));
    // 0x79d0dc: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x79d0dcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x79d0e0: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x79d0e0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x79d0e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79d0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d0e8: 0xc1e7600  jal         func_79D800
    ctx->pc = 0x79D0E8u;
    SET_GPR_U32(ctx, 31, 0x79D0F0u);
    ctx->pc = 0x79D0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D0E8u;
    // 0x79d0ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79D800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79D800u, 0x79D0E8u, 0x79D0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D0F0u;
label_79d0f0:
    // 0x79d0f0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x79d0f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d0f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79d0f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d0f8: 0xc1e7600  jal         func_79D800
    ctx->pc = 0x79D0F8u;
    SET_GPR_U32(ctx, 31, 0x79D100u);
    ctx->pc = 0x79D0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D0F8u;
    // 0x79d0fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79D800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79D800u, 0x79D0F8u, 0x79D100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D100u;
label_79d100:
    // 0x79d100: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79d100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d104: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x79d104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d108: 0xc1e7600  jal         func_79D800
    ctx->pc = 0x79D108u;
    SET_GPR_U32(ctx, 31, 0x79D110u);
    ctx->pc = 0x79D10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D108u;
    // 0x79d10c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79D800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79D800u, 0x79D108u, 0x79D110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D110u;
label_79d110:
    // 0x79d110: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79d110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d114: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79d114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d118: 0xc1e7600  jal         func_79D800
    ctx->pc = 0x79D118u;
    SET_GPR_U32(ctx, 31, 0x79D120u);
    ctx->pc = 0x79D11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D118u;
    // 0x79d11c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79D800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79D800u, 0x79D118u, 0x79D120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D120u;
label_79d120:
    // 0x79d120: 0x230802d  daddu       $s0, $s1, $s0
    ctx->pc = 0x79d120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x79d124: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x79d124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x79d128: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x79d128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x79d12c: 0x211882b  sltu        $s1, $s0, $s1
    ctx->pc = 0x79d12cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x79d130: 0x284202d  daddu       $a0, $s4, $a0
    ctx->pc = 0x79d130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 4));
    // 0x79d134: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x79d134u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x79d138: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x79d138u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x79d13c: 0x2168024  and         $s0, $s0, $s6
    ctx->pc = 0x79d13cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 22));
    // 0x79d140: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x79d140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79d144: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x79d144u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x79d148: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x79d148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x79d14c: 0x94a02b  sltu        $s4, $a0, $s4
    ctx->pc = 0x79d14cu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x79d150: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x79d150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x79d154: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x79d154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x79d158: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x79d158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x79d15c: 0x2348825  or          $s1, $s1, $s4
    ctx->pc = 0x79d15cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 20));
    // 0x79d160: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x79d160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x79d164: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x79d164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x79d168: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x79d168u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x79d16c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79d16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79d170: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x79d170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x79d174: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x79d174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x79d178: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x79d178u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x79d17c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x79D17Cu;
    {
        const bool branch_taken_0x79d17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D17Cu;
        // 0x79d180: 0xafa50048  sw          $a1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d17c) {
            ctx->pc = 0x79D1C4u;
            goto label_79d1c4;
        }
    }
    ctx->pc = 0x79D184u;
    // 0x79d184: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x79d184u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x79d188: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x79d188u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x79d18c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x79d18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79d190: 0x318fa  dsrl        $v1, $v1, 3
    ctx->pc = 0x79d190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 3);
    // 0x79d194: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x79d194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_79d198:
    // 0x79d198: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x79d198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x79d19c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79d19cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x79d1a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79D1A0u;
    {
        const bool branch_taken_0x79d1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D1A0u;
        // 0x79d1a4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d1a0) {
            ctx->pc = 0x79D1B0u;
            goto label_79d1b0;
        }
    }
    ctx->pc = 0x79D1A8u;
    // 0x79d1a8: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x79d1a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x79d1ac: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x79d1acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_79d1b0:
    // 0x79d1b0: 0x11887a  dsrl        $s1, $s1, 1
    ctx->pc = 0x79d1b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 1);
    // 0x79d1b4: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x79d1b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x79d1b8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79D1B8u;
    {
        const bool branch_taken_0x79d1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79D1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D1B8u;
        // 0x79d1bc: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d1b8) {
            ctx->pc = 0x79D198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79d198;
        }
    }
    ctx->pc = 0x79D1C0u;
    // 0x79d1c0: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x79d1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_79d1c4:
    // 0x79d1c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79d1c8: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x79d1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x79d1cc: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x79d1ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x79d1d0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x79D1D0u;
    {
        const bool branch_taken_0x79d1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79D1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D1D0u;
        // 0x79d1d4: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d1d0) {
            ctx->pc = 0x79D218u;
            goto label_79d218;
        }
    }
    ctx->pc = 0x79D1D8u;
    // 0x79d1d8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x79d1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x79d1dc: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x79d1dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x79d1e0: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x79d1e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x79d1e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x79d1e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79d1e8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79d1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79d1ec: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x79d1ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
label_79d1f0:
    // 0x79d1f0: 0x118878  dsll        $s1, $s1, 1
    ctx->pc = 0x79d1f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 1);
    // 0x79d1f4: 0x881824  and         $v1, $a0, $t0
    ctx->pc = 0x79d1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x79d1f8: 0x2271025  or          $v0, $s1, $a3
    ctx->pc = 0x79d1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 7));
    // 0x79d1fc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x79d1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x79d200: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x79d200u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x79d204: 0xd1102b  sltu        $v0, $a2, $s1
    ctx->pc = 0x79d204u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x79d208: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79D208u;
    {
        const bool branch_taken_0x79d208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D208u;
        // 0x79d20c: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d208) {
            ctx->pc = 0x79D1F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79d1f0;
        }
    }
    ctx->pc = 0x79D210u;
    // 0x79d210: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x79d210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x79d214: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x79d214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_79d218:
    // 0x79d218: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x79d218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x79d21c: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79D21Cu;
    {
        const bool branch_taken_0x79d21c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x79d21c) {
            ctx->pc = 0x79D220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79D21Cu;
            // 0x79d220: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79D240u;
            goto label_79d240;
        }
    }
    ctx->pc = 0x79D224u;
    // 0x79d224: 0x32220100  andi        $v0, $s1, 0x100
    ctx->pc = 0x79d224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
    // 0x79d228: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79D228u;
    {
        const bool branch_taken_0x79d228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D228u;
        // 0x79d22c: 0x66220080  daddiu      $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d228) {
            ctx->pc = 0x79D238u;
            goto label_79d238;
        }
    }
    ctx->pc = 0x79D230u;
    // 0x79d230: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79D230u;
    {
        const bool branch_taken_0x79d230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D230u;
        // 0x79d234: 0x66310080  daddiu      $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d230) {
            ctx->pc = 0x79D23Cu;
            goto label_79d23c;
        }
    }
    ctx->pc = 0x79D238u;
label_79d238:
    // 0x79d238: 0x44880b  movn        $s1, $v0, $a0
    ctx->pc = 0x79d238u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_79d23c:
    // 0x79d23c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x79d23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_79d240:
    // 0x79d240: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79d240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79d244: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x79d244u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x79d248: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x79d248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_79d24c:
    // 0x79d24c: 0xc1e72c2  jal         func_79CB08
    ctx->pc = 0x79D24Cu;
    SET_GPR_U32(ctx, 31, 0x79D254u);
    ctx->pc = 0x79CB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CB08u, 0x79D24Cu, 0x79D254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D254u;
label_79d254:
    // 0x79d254: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x79d254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x79d258: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x79d258u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x79d25c: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x79d25cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x79d260: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x79d260u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79d264: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x79d264u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79d268: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x79d268u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79d26c: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x79d26cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79d270: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x79d270u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79d274: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x79d274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79d278: 0x3e00008  jr          $ra
    ctx->pc = 0x79D278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79D27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D278u;
        // 0x79d27c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79D280u;
}
} // namespace gh_r501
