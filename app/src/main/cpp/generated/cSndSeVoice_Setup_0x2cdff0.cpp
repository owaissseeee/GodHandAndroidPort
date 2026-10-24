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

// Function: cSndSeVoice_Setup
// Address: 0x2cdff0 - 0x2ce3c0
void cSndSeVoice_Setup_0x2cdff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndSeVoice_Setup_0x2cdff0");
#endif

    switch (ctx->pc) {
        case 0x2ce0c4u: goto label_2ce0c4;
        case 0x2ce0e4u: goto label_2ce0e4;
        case 0x2ce118u: goto label_2ce118;
        case 0x2ce128u: goto label_2ce128;
        case 0x2ce13cu: goto label_2ce13c;
        case 0x2ce168u: goto label_2ce168;
        case 0x2ce18cu: goto label_2ce18c;
        case 0x2ce1e0u: goto label_2ce1e0;
        case 0x2ce21cu: goto label_2ce21c;
        case 0x2ce22cu: goto label_2ce22c;
        case 0x2ce244u: goto label_2ce244;
        case 0x2ce290u: goto label_2ce290;
        case 0x2ce378u: goto label_2ce378;
        case 0x2ce384u: goto label_2ce384;
        default: break;
    }

    ctx->pc = 0x2cdff0u;

    // 0x2cdff0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2cdff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2cdff4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2cdff4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2cdff8: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x2cdff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x2cdffc: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2cdffcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2ce000: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x2ce000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x2ce004: 0x68c03  sra         $s1, $a2, 16
    ctx->pc = 0x2ce004u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2ce008: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x2ce008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x2ce00c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ce00cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce010: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x2ce010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x2ce014: 0x5f403  sra         $fp, $a1, 16
    ctx->pc = 0x2ce014u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2ce018: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x2ce018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x2ce01c: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x2ce01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x2ce020: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x2ce020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x2ce024: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2ce024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2ce028: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x2ce028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x2ce02c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ce02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ce030: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x2ce030u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2ce034: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x2ce034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x2ce038: 0x17c0001d  bnez        $fp, . + 4 + (0x1D << 2)
    ctx->pc = 0x2CE038u;
    {
        const bool branch_taken_0x2ce038 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE038u;
        // 0x2ce03c: 0xafa80034  sw          $t0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce038) {
            ctx->pc = 0x2CE0B0u;
            goto label_2ce0b0;
        }
    }
    ctx->pc = 0x2CE040u;
    // 0x2ce040: 0x2622ff38  addiu       $v0, $s1, -0xC8
    ctx->pc = 0x2ce040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967096));
    // 0x2ce044: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ce044u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce048: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2ce048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ce04c: 0x2c420021  sltiu       $v0, $v0, 0x21
    ctx->pc = 0x2ce04cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x2ce050: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CE050u;
    {
        const bool branch_taken_0x2ce050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE050u;
        // 0x2ce054: 0x31400  sll         $v0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce050) {
            ctx->pc = 0x2CE0A8u;
            goto label_2ce0a8;
        }
    }
    ctx->pc = 0x2CE058u;
    // 0x2ce058: 0x2622ff12  addiu       $v0, $s1, -0xEE
    ctx->pc = 0x2ce058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967058));
    // 0x2ce05c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2ce05cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ce060: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CE060u;
    {
        const bool branch_taken_0x2ce060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE060u;
        // 0x2ce064: 0x31400  sll         $v0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce060) {
            ctx->pc = 0x2CE0A8u;
            goto label_2ce0a8;
        }
    }
    ctx->pc = 0x2CE068u;
    // 0x2ce068: 0x2622ff0e  addiu       $v0, $s1, -0xF2
    ctx->pc = 0x2ce068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967054));
    // 0x2ce06c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2ce06cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ce070: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CE070u;
    {
        const bool branch_taken_0x2ce070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE070u;
        // 0x2ce074: 0x31400  sll         $v0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce070) {
            ctx->pc = 0x2CE0A8u;
            goto label_2ce0a8;
        }
    }
    ctx->pc = 0x2CE078u;
    // 0x2ce078: 0x2622ff08  addiu       $v0, $s1, -0xF8
    ctx->pc = 0x2ce078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967048));
    // 0x2ce07c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2ce07cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ce080: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CE080u;
    {
        const bool branch_taken_0x2ce080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE080u;
        // 0x2ce084: 0x31400  sll         $v0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce080) {
            ctx->pc = 0x2CE0A8u;
            goto label_2ce0a8;
        }
    }
    ctx->pc = 0x2CE088u;
    // 0x2ce088: 0x240200ea  addiu       $v0, $zero, 0xEA
    ctx->pc = 0x2ce088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
    // 0x2ce08c: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CE08Cu;
    {
        const bool branch_taken_0x2ce08c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE08Cu;
        // 0x2ce090: 0x24020109  addiu       $v0, $zero, 0x109 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce08c) {
            ctx->pc = 0x2CE0A4u;
            goto label_2ce0a4;
        }
    }
    ctx->pc = 0x2CE094u;
    // 0x2ce094: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE094u;
    {
        const bool branch_taken_0x2ce094 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CE098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE094u;
        // 0x2ce098: 0x2402010b  addiu       $v0, $zero, 0x10B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 267));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce094) {
            ctx->pc = 0x2CE0A4u;
            goto label_2ce0a4;
        }
    }
    ctx->pc = 0x2CE09Cu;
    // 0x2ce09c: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CE09Cu;
    {
        const bool branch_taken_0x2ce09c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CE0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE09Cu;
        // 0x2ce0a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce09c) {
            ctx->pc = 0x2CE0B4u;
            goto label_2ce0b4;
        }
    }
    ctx->pc = 0x2CE0A4u;
label_2ce0a4:
    // 0x2ce0a4: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x2ce0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_2ce0a8:
    // 0x2ce0a8: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x2ce0a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ce0ac: 0x28c03  sra         $s1, $v0, 16
    ctx->pc = 0x2ce0acu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 16));
label_2ce0b0:
    // 0x2ce0b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ce0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ce0b4:
    // 0x2ce0b4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2ce0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce0b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ce0b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce0bc: 0xc0b3c86  jal         func_2CF218
    ctx->pc = 0x2CE0BCu;
    SET_GPR_U32(ctx, 31, 0x2CE0C4u);
    ctx->pc = 0x2CE0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE0BCu;
    // 0x2ce0c0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF218u, 0x2CE0BCu, 0x2CE0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE0C4u;
label_2ce0c4:
    // 0x2ce0c4: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2ce0c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ce0c8: 0x10500063  beq         $v0, $s0, . + 4 + (0x63 << 2)
    ctx->pc = 0x2CE0C8u;
    {
        const bool branch_taken_0x2ce0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2CE0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE0C8u;
        // 0x2ce0cc: 0x93b40021  lbu         $s4, 0x21($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 33)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce0c8) {
            ctx->pc = 0x2CE258u;
            goto label_2ce258;
        }
    }
    ctx->pc = 0x2CE0D0u;
    // 0x2ce0d0: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x2ce0d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce0d4: 0x1280001b  beqz        $s4, . + 4 + (0x1B << 2)
    ctx->pc = 0x2CE0D4u;
    {
        const bool branch_taken_0x2ce0d4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE0D4u;
        // 0x2ce0d8: 0x93b60023  lbu         $s6, 0x23($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce0d4) {
            ctx->pc = 0x2CE144u;
            goto label_2ce144;
        }
    }
    ctx->pc = 0x2CE0DCu;
    // 0x2ce0dc: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2CE0DCu;
    SET_GPR_U32(ctx, 31, 0x2CE0E4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2CE0DCu, 0x2CE0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE0E4u;
label_2ce0e4:
    // 0x2ce0e4: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x2ce0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2ce0e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ce0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce0ec: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2ce0ecu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2ce0f0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CE0F0u;
    {
        const bool branch_taken_0x2ce0f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce0f0) {
            ctx->pc = 0x2CE0F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE0F0u;
            // 0x2ce0f4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE0F8u;
            goto label_2ce0f8;
        }
    }
    ctx->pc = 0x2CE0F8u;
label_2ce0f8:
    // 0x2ce0f8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2ce0f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce0fc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2ce0fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce100: 0x3010  mfhi        $a2
    ctx->pc = 0x2ce100u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x2ce104: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x2ce104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2ce108: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2ce108u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2ce10c: 0x68c03  sra         $s1, $a2, 16
    ctx->pc = 0x2ce10cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2ce110: 0xc0b3c86  jal         func_2CF218
    ctx->pc = 0x2CE110u;
    SET_GPR_U32(ctx, 31, 0x2CE118u);
    ctx->pc = 0x2CE114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE110u;
    // 0x2ce114: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF218u, 0x2CE110u, 0x2CE118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE118u;
label_2ce118:
    // 0x2ce118: 0x1450000a  bne         $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CE118u;
    {
        const bool branch_taken_0x2ce118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2ce118) {
            ctx->pc = 0x2CE144u;
            goto label_2ce144;
        }
    }
    ctx->pc = 0x2CE120u;
    // 0x2ce120: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2CE120u;
    {
        const bool branch_taken_0x2ce120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE120u;
        // 0x2ce124: 0xae600014  sw          $zero, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce120) {
            ctx->pc = 0x2CE25Cu;
            goto label_2ce25c;
        }
    }
    ctx->pc = 0x2CE128u;
label_2ce128:
    // 0x2ce128: 0x8e670038  lw          $a3, 0x38($s3)
    ctx->pc = 0x2ce128u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2ce12c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2ce12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce130: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2ce130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce134: 0xc0b2f70  jal         func_2CBDC0
    ctx->pc = 0x2CE134u;
    SET_GPR_U32(ctx, 31, 0x2CE13Cu);
    ctx->pc = 0x2CE138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE134u;
    // 0x2ce138: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBDC0u, 0x2CE134u, 0x2CE13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE13Cu;
label_2ce13c:
    // 0x2ce13c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2CE13Cu;
    {
        const bool branch_taken_0x2ce13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE13Cu;
        // 0x2ce140: 0x83a20022  lb          $v0, 0x22($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 34)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce13c) {
            ctx->pc = 0x2CE1B8u;
            goto label_2ce1b8;
        }
    }
    ctx->pc = 0x2CE144u;
label_2ce144:
    // 0x2ce144: 0x12c0001c  beqz        $s6, . + 4 + (0x1C << 2)
    ctx->pc = 0x2CE144u;
    {
        const bool branch_taken_0x2ce144 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE144u;
        // 0x2ce148: 0x83a20022  lb          $v0, 0x22($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 34)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce144) {
            ctx->pc = 0x2CE1B8u;
            goto label_2ce1b8;
        }
    }
    ctx->pc = 0x2CE14Cu;
    // 0x2ce14c: 0x1280001a  beqz        $s4, . + 4 + (0x1A << 2)
    ctx->pc = 0x2CE14Cu;
    {
        const bool branch_taken_0x2ce14c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE14Cu;
        // 0x2ce150: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce14c) {
            ctx->pc = 0x2CE1B8u;
            goto label_2ce1b8;
        }
    }
    ctx->pc = 0x2CE154u;
    // 0x2ce154: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2ce154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2ce158: 0x2b49021  addu        $s2, $s5, $s4
    ctx->pc = 0x2ce158u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x2ce15c: 0x2457ee00  addiu       $s7, $v0, -0x1200
    ctx->pc = 0x2ce15cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x2ce160: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x2ce160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x2ce164: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x2ce164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_2ce168:
    // 0x2ce168: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2ce168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ce16c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2ce16cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce170: 0x8e670038  lw          $a3, 0x38($s3)
    ctx->pc = 0x2ce170u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2ce174: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2ce174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce178: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ce178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce17c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2ce17cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce180: 0x34c03  sra         $t1, $v1, 16
    ctx->pc = 0x2ce180u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2ce184: 0xc0b2f44  jal         func_2CBD10
    ctx->pc = 0x2CE184u;
    SET_GPR_U32(ctx, 31, 0x2CE18Cu);
    ctx->pc = 0x2CE188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE184u;
    // 0x2ce188: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBD10u, 0x2CE184u, 0x2CE18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE18Cu;
label_2ce18c:
    // 0x2ce18c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ce18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce190: 0x1445ffe5  bne         $v0, $a1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2CE190u;
    {
        const bool branch_taken_0x2ce190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2CE194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE190u;
        // 0x2ce194: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce190) {
            ctx->pc = 0x2CE128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ce128;
        }
    }
    ctx->pc = 0x2CE198u;
    // 0x2ce198: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ce198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ce19c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2ce19cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2ce1a0: 0x214202a  slt         $a0, $s0, $s4
    ctx->pc = 0x2ce1a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2ce1a4: 0x28c03  sra         $s1, $v0, 16
    ctx->pc = 0x2ce1a4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2ce1a8: 0x251182a  slt         $v1, $s2, $s1
    ctx->pc = 0x2ce1a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2ce1ac: 0x1480ffee  bnez        $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2CE1ACu;
    {
        const bool branch_taken_0x2ce1ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE1ACu;
        // 0x2ce1b0: 0x2a3880b  movn        $s1, $s5, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce1ac) {
            ctx->pc = 0x2CE168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ce168;
        }
    }
    ctx->pc = 0x2CE1B4u;
    // 0x2ce1b4: 0x83a20022  lb          $v0, 0x22($sp)
    ctx->pc = 0x2ce1b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 34)));
label_2ce1b8:
    // 0x2ce1b8: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2CE1B8u;
    {
        const bool branch_taken_0x2ce1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE1B8u;
        // 0x2ce1bc: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce1b8) {
            ctx->pc = 0x2CE264u;
            goto label_2ce264;
        }
    }
    ctx->pc = 0x2CE1C0u;
    // 0x2ce1c0: 0x93a90022  lbu         $t1, 0x22($sp)
    ctx->pc = 0x2ce1c0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 34)));
    // 0x2ce1c4: 0x2450ee00  addiu       $s0, $v0, -0x1200
    ctx->pc = 0x2ce1c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x2ce1c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ce1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce1cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ce1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce1d0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2ce1d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce1d4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2ce1d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce1d8: 0xc0b2fde  jal         func_2CBF78
    ctx->pc = 0x2CE1D8u;
    SET_GPR_U32(ctx, 31, 0x2CE1E0u);
    ctx->pc = 0x2CE1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE1D8u;
    // 0x2ce1dc: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBF78u, 0x2CE1D8u, 0x2CE1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE1E0u;
label_2ce1e0:
    // 0x2ce1e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ce1e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce1e4: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x2CE1E4u;
    {
        const bool branch_taken_0x2ce1e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE1E4u;
        // 0x2ce1e8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce1e4) {
            ctx->pc = 0x2CE24Cu;
            goto label_2ce24c;
        }
    }
    ctx->pc = 0x2CE1ECu;
    // 0x2ce1ec: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2ce1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2ce1f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ce1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ce1f4: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CE1F4u;
    {
        const bool branch_taken_0x2ce1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce1f4) {
            ctx->pc = 0x2CE1F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE1F4u;
            // 0x2ce1f8: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE24Cu;
            goto label_2ce24c;
        }
    }
    ctx->pc = 0x2CE1FCu;
    // 0x2ce1fc: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x2ce1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2ce200: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2ce200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2ce204: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CE204u;
    {
        const bool branch_taken_0x2ce204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CE208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE204u;
        // 0x2ce208: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce204) {
            ctx->pc = 0x2CE250u;
            goto label_2ce250;
        }
    }
    ctx->pc = 0x2CE20Cu;
    // 0x2ce20c: 0x261000c0  addiu       $s0, $s0, 0xC0
    ctx->pc = 0x2ce20cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x2ce210: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x2ce210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2ce214: 0xc07df92  jal         func_1F7E48
    ctx->pc = 0x2CE214u;
    SET_GPR_U32(ctx, 31, 0x2CE21Cu);
    ctx->pc = 0x2CE218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE214u;
    // 0x2ce218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E48u, 0x2CE214u, 0x2CE21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE21Cu;
label_2ce21c:
    // 0x2ce21c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2ce21cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2ce220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ce220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce224: 0xc07df92  jal         func_1F7E48
    ctx->pc = 0x2CE224u;
    SET_GPR_U32(ctx, 31, 0x2CE22Cu);
    ctx->pc = 0x2CE228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE224u;
    // 0x2ce228: 0x26650040  addiu       $a1, $s3, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E48u, 0x2CE224u, 0x2CE22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE22Cu;
label_2ce22c:
    // 0x2ce22c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2ce22cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ce230: 0x0  nop
    ctx->pc = 0x2ce230u;
    // NOP
    // 0x2ce234: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2CE234u;
    {
        const bool branch_taken_0x2ce234 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ce234) {
            ctx->pc = 0x2CE238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE234u;
            // 0x2ce238: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE24Cu;
            goto label_2ce24c;
        }
    }
    ctx->pc = 0x2CE23Cu;
    // 0x2ce23c: 0xc0b38fa  jal         func_2CE3E8
    ctx->pc = 0x2CE23Cu;
    SET_GPR_U32(ctx, 31, 0x2CE244u);
    ctx->pc = 0x2CE240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE23Cu;
    // 0x2ce240: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE3E8u, 0x2CE23Cu, 0x2CE244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE244u;
label_2ce244:
    // 0x2ce244: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CE244u;
    {
        const bool branch_taken_0x2ce244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE244u;
        // 0x2ce248: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce244) {
            ctx->pc = 0x2CE250u;
            goto label_2ce250;
        }
    }
    ctx->pc = 0x2CE24Cu;
label_2ce24c:
    // 0x2ce24c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce250:
    // 0x2ce250: 0x16820005  bne         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CE250u;
    {
        const bool branch_taken_0x2ce250 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CE254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE250u;
        // 0x2ce254: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce250) {
            ctx->pc = 0x2CE268u;
            goto label_2ce268;
        }
    }
    ctx->pc = 0x2CE258u;
label_2ce258:
    // 0x2ce258: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x2ce258u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_2ce25c:
    // 0x2ce25c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2CE25Cu;
    {
        const bool branch_taken_0x2ce25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE25Cu;
        // 0x2ce260: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce25c) {
            ctx->pc = 0x2CE388u;
            goto label_2ce388;
        }
    }
    ctx->pc = 0x2CE264u;
label_2ce264:
    // 0x2ce264: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2ce264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2ce268:
    // 0x2ce268: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2ce268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2ce26c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ce26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ce270: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CE270u;
    {
        const bool branch_taken_0x2ce270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE270u;
        // 0x2ce274: 0x93a20009  lbu         $v0, 0x9($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce270) {
            ctx->pc = 0x2CE288u;
            goto label_2ce288;
        }
    }
    ctx->pc = 0x2CE278u;
    // 0x2ce278: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2CE278u;
    {
        const bool branch_taken_0x2ce278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE278u;
        // 0x2ce27c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce278) {
            ctx->pc = 0x2CE2CCu;
            goto label_2ce2cc;
        }
    }
    ctx->pc = 0x2CE280u;
    // 0x2ce280: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2CE280u;
    {
        const bool branch_taken_0x2ce280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE280u;
        // 0x2ce284: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce280) {
            ctx->pc = 0x2CE2E4u;
            goto label_2ce2e4;
        }
    }
    ctx->pc = 0x2CE288u;
label_2ce288:
    // 0x2ce288: 0xc0dd5bc  jal         func_3756F0
    ctx->pc = 0x2CE288u;
    SET_GPR_U32(ctx, 31, 0x2CE290u);
    ctx->pc = 0x3756F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3756F0u, 0x2CE288u, 0x2CE290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE290u;
label_2ce290:
    // 0x2ce290: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2CE290u;
    {
        const bool branch_taken_0x2ce290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE290u;
        // 0x2ce294: 0x93a20009  lbu         $v0, 0x9($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce290) {
            ctx->pc = 0x2CE2E4u;
            goto label_2ce2e4;
        }
    }
    ctx->pc = 0x2CE298u;
    // 0x2ce298: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ce298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ce29c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2ce29cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2ce2a0: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x2ce2a0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2ce2a4: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2CE2A4u;
    {
        const bool branch_taken_0x2ce2a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CE2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE2A4u;
        // 0x2ce2a8: 0x28820003  slti        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce2a4) {
            ctx->pc = 0x2CE2E4u;
            goto label_2ce2e4;
        }
    }
    ctx->pc = 0x2CE2ACu;
    // 0x2ce2ac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CE2ACu;
    {
        const bool branch_taken_0x2ce2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE2ACu;
        // 0x2ce2b0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce2ac) {
            ctx->pc = 0x2CE2C4u;
            goto label_2ce2c4;
        }
    }
    ctx->pc = 0x2CE2B4u;
    // 0x2ce2b4: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CE2B4u;
    {
        const bool branch_taken_0x2ce2b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CE2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE2B4u;
        // 0x2ce2b8: 0x93a20020  lbu         $v0, 0x20($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce2b4) {
            ctx->pc = 0x2CE2D4u;
            goto label_2ce2d4;
        }
    }
    ctx->pc = 0x2CE2BCu;
    // 0x2ce2bc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2CE2BCu;
    {
        const bool branch_taken_0x2ce2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE2BCu;
        // 0x2ce2c0: 0x30420080  andi        $v0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce2bc) {
            ctx->pc = 0x2CE2ECu;
            goto label_2ce2ec;
        }
    }
    ctx->pc = 0x2CE2C4u;
label_2ce2c4:
    // 0x2ce2c4: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CE2C4u;
    {
        const bool branch_taken_0x2ce2c4 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2CE2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE2C4u;
        // 0x2ce2c8: 0x93a20020  lbu         $v0, 0x20($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce2c4) {
            ctx->pc = 0x2CE2E8u;
            goto label_2ce2e8;
        }
    }
    ctx->pc = 0x2CE2CCu;
label_2ce2cc:
    // 0x2ce2cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CE2CCu;
    {
        const bool branch_taken_0x2ce2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE2CCu;
        // 0x2ce2d0: 0xae600010  sw          $zero, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce2cc) {
            ctx->pc = 0x2CE2E4u;
            goto label_2ce2e4;
        }
    }
    ctx->pc = 0x2CE2D4u;
label_2ce2d4:
    // 0x2ce2d4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2ce2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2ce2d8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CE2D8u;
    {
        const bool branch_taken_0x2ce2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE2D8u;
        // 0x2ce2dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce2d8) {
            ctx->pc = 0x2CE2E4u;
            goto label_2ce2e4;
        }
    }
    ctx->pc = 0x2CE2E0u;
    // 0x2ce2e0: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x2ce2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_2ce2e4:
    // 0x2ce2e4: 0x93a20020  lbu         $v0, 0x20($sp)
    ctx->pc = 0x2ce2e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_2ce2e8:
    // 0x2ce2e8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2ce2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_2ce2ec:
    // 0x2ce2ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE2ECu;
    {
        const bool branch_taken_0x2ce2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE2ECu;
        // 0x2ce2f0: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce2ec) {
            ctx->pc = 0x2CE300u;
            goto label_2ce300;
        }
    }
    ctx->pc = 0x2CE2F4u;
    // 0x2ce2f4: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2ce2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2ce2f8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2ce2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2ce2fc: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x2ce2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_2ce300:
    // 0x2ce300: 0x8c627a84  lw          $v0, 0x7A84($v1)
    ctx->pc = 0x2ce300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31364)));
    // 0x2ce304: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x2ce304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
    // 0x2ce308: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ce308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ce30c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CE30Cu;
    {
        const bool branch_taken_0x2ce30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE30Cu;
        // 0x2ce310: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce30c) {
            ctx->pc = 0x2CE324u;
            goto label_2ce324;
        }
    }
    ctx->pc = 0x2CE314u;
    // 0x2ce314: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2ce314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2ce318: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2ce318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2ce31c: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x2ce31cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x2ce320: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2ce320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2ce324:
    // 0x2ce324: 0x93a40020  lbu         $a0, 0x20($sp)
    ctx->pc = 0x2ce324u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ce328: 0x93a20024  lbu         $v0, 0x24($sp)
    ctx->pc = 0x2ce328u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2ce32c: 0x93a30026  lbu         $v1, 0x26($sp)
    ctx->pc = 0x2ce32cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 38)));
    // 0x2ce330: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x2ce330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2ce334: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2ce334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2ce338: 0x93a50025  lbu         $a1, 0x25($sp)
    ctx->pc = 0x2ce338u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 37)));
    // 0x2ce33c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2ce33cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2ce340: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2ce340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ce344: 0xa67e0008  sh          $fp, 0x8($s3)
    ctx->pc = 0x2ce344u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 30));
    // 0x2ce348: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2ce348u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2ce34c: 0xa671000a  sh          $s1, 0xA($s3)
    ctx->pc = 0x2ce34cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10), (uint16_t)GPR_U32(ctx, 17));
    // 0x2ce350: 0x30a20006  andi        $v0, $a1, 0x6
    ctx->pc = 0x2ce350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)6);
    // 0x2ce354: 0xae640018  sw          $a0, 0x18($s3)
    ctx->pc = 0x2ce354u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 4));
    // 0x2ce358: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x2ce358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2ce35c: 0xae65001c  sw          $a1, 0x1C($s3)
    ctx->pc = 0x2ce35cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 5));
    // 0x2ce360: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE360u;
    {
        const bool branch_taken_0x2ce360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE360u;
        // 0x2ce364: 0xae630020  sw          $v1, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce360) {
            ctx->pc = 0x2CE370u;
            goto label_2ce370;
        }
    }
    ctx->pc = 0x2CE368u;
    // 0x2ce368: 0x34a20001  ori         $v0, $a1, 0x1
    ctx->pc = 0x2ce368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x2ce36c: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x2ce36cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
label_2ce370:
    // 0x2ce370: 0xc0ddffe  jal         func_377FF8
    ctx->pc = 0x2CE370u;
    SET_GPR_U32(ctx, 31, 0x2CE378u);
    ctx->pc = 0x377FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377FF8u, 0x2CE370u, 0x2CE378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE378u;
label_2ce378:
    // 0x2ce378: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x2ce378u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    // 0x2ce37c: 0xc0b38f0  jal         func_2CE3C0
    ctx->pc = 0x2CE37Cu;
    SET_GPR_U32(ctx, 31, 0x2CE384u);
    ctx->pc = 0x2CE380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE37Cu;
    // 0x2ce380: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE3C0u, 0x2CE37Cu, 0x2CE384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE384u;
label_2ce384:
    // 0x2ce384: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2ce384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2ce388:
    // 0x2ce388: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x2ce388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2ce38c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x2ce38cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ce390: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x2ce390u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ce394: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x2ce394u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ce398: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x2ce398u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ce39c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2ce39cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ce3a0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2ce3a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ce3a4: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x2ce3a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ce3a8: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x2ce3a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ce3ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ce3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ce3b0: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x2ce3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ce3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE3B4u;
        // 0x2ce3b8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE3BCu;
    // 0x2ce3bc: 0x0  nop
    ctx->pc = 0x2ce3bcu;
    // NOP
    ctx->pc = 0x2ce3c0u;
}
