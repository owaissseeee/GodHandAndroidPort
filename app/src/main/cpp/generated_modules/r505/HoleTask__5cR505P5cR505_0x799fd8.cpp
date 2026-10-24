#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r505_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r505
{
// Function: HoleTask__5cR505P5cR505
// Address: 0x799fd8 - 0x79a490
void HoleTask__5cR505P5cR505_0x799fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HoleTask__5cR505P5cR505_0x799fd8");
#endif

    switch (ctx->pc) {
        case 0x79a024u: goto label_79a024;
        case 0x79a040u: goto label_79a040;
        case 0x79a04cu: goto label_79a04c;
        case 0x79a060u: goto label_79a060;
        case 0x79a094u: goto label_79a094;
        case 0x79a0a0u: goto label_79a0a0;
        case 0x79a0a8u: goto label_79a0a8;
        case 0x79a0ccu: goto label_79a0cc;
        case 0x79a0d4u: goto label_79a0d4;
        case 0x79a0e4u: goto label_79a0e4;
        case 0x79a0ecu: goto label_79a0ec;
        case 0x79a104u: goto label_79a104;
        case 0x79a10cu: goto label_79a10c;
        case 0x79a12cu: goto label_79a12c;
        case 0x79a150u: goto label_79a150;
        case 0x79a15cu: goto label_79a15c;
        case 0x79a190u: goto label_79a190;
        case 0x79a1a0u: goto label_79a1a0;
        case 0x79a2a8u: goto label_79a2a8;
        case 0x79a308u: goto label_79a308;
        case 0x79a318u: goto label_79a318;
        case 0x79a320u: goto label_79a320;
        case 0x79a364u: goto label_79a364;
        case 0x79a3b0u: goto label_79a3b0;
        case 0x79a3c4u: goto label_79a3c4;
        case 0x79a3d4u: goto label_79a3d4;
        case 0x79a3f0u: goto label_79a3f0;
        case 0x79a3fcu: goto label_79a3fc;
        case 0x79a40cu: goto label_79a40c;
        case 0x79a414u: goto label_79a414;
        case 0x79a41cu: goto label_79a41c;
        case 0x79a430u: goto label_79a430;
        case 0x79a444u: goto label_79a444;
        case 0x79a44cu: goto label_79a44c;
        case 0x79a458u: goto label_79a458;
        default: break;
    }

    ctx->pc = 0x799fd8u;

    // 0x799fd8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x799fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x799fdc: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x799fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x799fe0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x799fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x799fe4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x799fe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fe8: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x799fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x799fec: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x799fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x799ff0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x799ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x799ff4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x799ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x799ff8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x799ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x799ffc: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x799ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x79a000: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x79a000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x79a004: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x79a004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x79a008: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x79a008u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x79a00c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x79a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79a010: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A010u;
    {
        const bool branch_taken_0x79a010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A010u;
        // 0x79a014: 0x3c13003c  lui         $s3, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a010) {
            ctx->pc = 0x79A024u;
            goto label_79a024;
        }
    }
    ctx->pc = 0x79A018u;
    // 0x79a018: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79a018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79a01c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A01Cu;
    SET_GPR_U32(ctx, 31, 0x79A024u);
    ctx->pc = 0x79A020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A01Cu;
    // 0x79a020: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A01Cu, 0x79A024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A024u;
label_79a024:
    // 0x79a024: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x79a024u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x79a028: 0x3c140074  lui         $s4, 0x74
    ctx->pc = 0x79a028u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)116 << 16));
    // 0x79a02c: 0x3c150074  lui         $s5, 0x74
    ctx->pc = 0x79a02cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)116 << 16));
    // 0x79a030: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x79a030u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79a034: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79A034u;
    {
        const bool branch_taken_0x79a034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A034u;
        // 0x79a038: 0x27be0010  addiu       $fp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a034) {
            ctx->pc = 0x79A04Cu;
            goto label_79a04c;
        }
    }
    ctx->pc = 0x79A03Cu;
    // 0x79a03c: 0x0  nop
    ctx->pc = 0x79a03cu;
    // NOP
label_79a040:
    // 0x79a040: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a044: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A044u;
    SET_GPR_U32(ctx, 31, 0x79A04Cu);
    ctx->pc = 0x79A048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A044u;
    // 0x79a048: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A044u, 0x79A04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A04Cu;
label_79a04c:
    // 0x79a04c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x79a04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79a050: 0x2624ea60  addiu       $a0, $s1, -0x15A0
    ctx->pc = 0x79a050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961760));
    // 0x79a054: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x79a054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a058: 0xc0b0bc2  jal         func_2C2F08
    ctx->pc = 0x79A058u;
    SET_GPR_U32(ctx, 31, 0x79A060u);
    ctx->pc = 0x79A05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A058u;
    // 0x79a05c: 0x8c4500f0  lw          $a1, 0xF0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F08u, 0x79A058u, 0x79A060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A060u;
label_79a060:
    // 0x79a060: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a064: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79a064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a068: 0x1602fff5  bne         $s0, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x79A068u;
    {
        const bool branch_taken_0x79a068 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x79A06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A068u;
        // 0x79a06c: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a068) {
            ctx->pc = 0x79A040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a040;
        }
    }
    ctx->pc = 0x79A070u;
    // 0x79a070: 0x26847470  addiu       $a0, $s4, 0x7470
    ctx->pc = 0x79a070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 29808));
    // 0x79a074: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a078: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x79a078u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a07c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x79a07cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79a080: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a084: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a084u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a088: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x79a088u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x79a08c: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x79A08Cu;
    SET_GPR_U32(ctx, 31, 0x79A094u);
    ctx->pc = 0x79A090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A08Cu;
    // 0x79a090: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x79A08Cu, 0x79A094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A094u;
label_79a094:
    // 0x79a094: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79a094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a098: 0xc0c6be8  jal         func_31AFA0
    ctx->pc = 0x79A098u;
    SET_GPR_U32(ctx, 31, 0x79A0A0u);
    ctx->pc = 0x79A09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A098u;
    // 0x79a09c: 0xa2500045  sb          $s0, 0x45($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 69), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AFA0u, 0x79A098u, 0x79A0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0A0u;
label_79a0a0:
    // 0x79a0a0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x79A0A0u;
    {
        const bool branch_taken_0x79a0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a0a0) {
            ctx->pc = 0x79A0E4u;
            goto label_79a0e4;
        }
    }
    ctx->pc = 0x79A0A8u;
label_79a0a8:
    // 0x79a0a8: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x79A0A8u;
    {
        const bool branch_taken_0x79a0a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0A8u;
        // 0x79a0ac: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0a8) {
            ctx->pc = 0x79A0D8u;
            goto label_79a0d8;
        }
    }
    ctx->pc = 0x79A0B0u;
    // 0x79a0b0: 0x92e2001c  lbu         $v0, 0x1C($s7)
    ctx->pc = 0x79a0b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 28)));
    // 0x79a0b4: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x79a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x79a0b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79a0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79a0bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A0BCu;
    {
        const bool branch_taken_0x79a0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0BCu;
        // 0x79a0c0: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0bc) {
            ctx->pc = 0x79A0D8u;
            goto label_79a0d8;
        }
    }
    ctx->pc = 0x79A0C4u;
    // 0x79a0c4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79A0C4u;
    SET_GPR_U32(ctx, 31, 0x79A0CCu);
    ctx->pc = 0x79A0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0C4u;
    // 0x79a0c8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A0C4u, 0x79A0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0CCu;
label_79a0cc:
    // 0x79a0cc: 0xc04b106  jal         func_12C418
    ctx->pc = 0x79A0CCu;
    SET_GPR_U32(ctx, 31, 0x79A0D4u);
    ctx->pc = 0x79A0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0CCu;
    // 0x79a0d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C418u, 0x79A0CCu, 0x79A0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0D4u;
label_79a0d4:
    // 0x79a0d4: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_79a0d8:
    // 0x79a0d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a0dc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A0DCu;
    SET_GPR_U32(ctx, 31, 0x79A0E4u);
    ctx->pc = 0x79A0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0DCu;
    // 0x79a0e0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A0DCu, 0x79A0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0E4u;
label_79a0e4:
    // 0x79a0e4: 0xc0b0f90  jal         func_2C3E40
    ctx->pc = 0x79A0E4u;
    SET_GPR_U32(ctx, 31, 0x79A0ECu);
    ctx->pc = 0x79A0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0E4u;
    // 0x79a0e8: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x79A0E4u, 0x79A0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0ECu;
label_79a0ec:
    // 0x79a0ec: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x79A0ECu;
    {
        const bool branch_taken_0x79a0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a0ec) {
            ctx->pc = 0x79A0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a0a8;
        }
    }
    ctx->pc = 0x79A0F4u;
    // 0x79a0f4: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A0F4u;
    {
        const bool branch_taken_0x79a0f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0F4u;
        // 0x79a0f8: 0x8ea37a78  lw          $v1, 0x7A78($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 31352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0f4) {
            ctx->pc = 0x79A110u;
            goto label_79a110;
        }
    }
    ctx->pc = 0x79A0FCu;
    // 0x79a0fc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79A0FCu;
    SET_GPR_U32(ctx, 31, 0x79A104u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A0FCu, 0x79A104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A104u;
label_79a104:
    // 0x79a104: 0xc04b106  jal         func_12C418
    ctx->pc = 0x79A104u;
    SET_GPR_U32(ctx, 31, 0x79A10Cu);
    ctx->pc = 0x79A108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A104u;
    // 0x79a108: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C418u, 0x79A104u, 0x79A10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A10Cu;
label_79a10c:
    // 0x79a10c: 0x8ea37a78  lw          $v1, 0x7A78($s5)
    ctx->pc = 0x79a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 31352)));
label_79a110:
    // 0x79a110: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x79a110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x79a114: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79a114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79a118: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x79a118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79a11c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x79a11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79a120: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a124: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79A124u;
    SET_GPR_U32(ctx, 31, 0x79A12Cu);
    ctx->pc = 0x79A128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A124u;
    // 0x79a128: 0xaea37a78  sw          $v1, 0x7A78($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 31352), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79A124u, 0x79A12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A12Cu;
label_79a12c:
    // 0x79a12c: 0x26837470  addiu       $v1, $s4, 0x7470
    ctx->pc = 0x79a12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 29808));
    // 0x79a130: 0x9062001c  lbu         $v0, 0x1C($v1)
    ctx->pc = 0x79a130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x79a134: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x79a134u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x79a138: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79a138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79a13c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79A13Cu;
    {
        const bool branch_taken_0x79a13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A13Cu;
        // 0x79a140: 0x26847470  addiu       $a0, $s4, 0x7470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 29808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a13c) {
            ctx->pc = 0x79A174u;
            goto label_79a174;
        }
    }
    ctx->pc = 0x79A144u;
    // 0x79a144: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x79a144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a148: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79a148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79a14c: 0x0  nop
    ctx->pc = 0x79a14cu;
    // NOP
label_79a150:
    // 0x79a150: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a154: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A154u;
    SET_GPR_U32(ctx, 31, 0x79A15Cu);
    ctx->pc = 0x79A158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A154u;
    // 0x79a158: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A154u, 0x79A15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A15Cu;
label_79a15c:
    // 0x79a15c: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x79a15cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x79a160: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x79a160u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x79a164: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79a164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79a168: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79A168u;
    {
        const bool branch_taken_0x79a168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A168u;
        // 0x79a16c: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a168) {
            ctx->pc = 0x79A150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a150;
        }
    }
    ctx->pc = 0x79A170u;
    // 0x79a170: 0x26847470  addiu       $a0, $s4, 0x7470
    ctx->pc = 0x79a170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 29808));
label_79a174:
    // 0x79a174: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a178: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x79a178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79a17c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a17cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a180: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x79a180u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x79a184: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a184u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a188: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x79A188u;
    SET_GPR_U32(ctx, 31, 0x79A190u);
    ctx->pc = 0x79A18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A188u;
    // 0x79a18c: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x79A188u, 0x79A190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A190u;
label_79a190:
    // 0x79a190: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a194: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x79a194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79a198: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x79A198u;
    SET_GPR_U32(ctx, 31, 0x79A1A0u);
    ctx->pc = 0x79A19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A198u;
    // 0x79a19c: 0x2445c1a0  addiu       $a1, $v0, -0x3E60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79A198u, 0x79A1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1A0u;
label_79a1a0:
    // 0x79a1a0: 0x3c01431a  lui         $at, 0x431A
    ctx->pc = 0x79a1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17178 << 16));
    // 0x79a1a4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79a1a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79a1a8: 0x3c014144  lui         $at, 0x4144
    ctx->pc = 0x79a1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16708 << 16));
    // 0x79a1ac: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x79a1acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
    // 0x79a1b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a1b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a1b4: 0x3c014321  lui         $at, 0x4321
    ctx->pc = 0x79a1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17185 << 16));
    // 0x79a1b8: 0x3421b333  ori         $at, $at, 0xB333
    ctx->pc = 0x79a1b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45875);
    // 0x79a1bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a1bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a1c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79a1c4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a1c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79a1c8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x79a1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x79a1cc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x79a1ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x79a1d0: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x79a1d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x79a1d4: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x79a1d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x79a1d8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x79a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79a1dc: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x79a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79a1e0: 0x505d0007  beql        $v0, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x79A1E0u;
    {
        const bool branch_taken_0x79a1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        if (branch_taken_0x79a1e0) {
            ctx->pc = 0x79A1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A1E0u;
            // 0x79a1e4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A200u;
            goto label_79a200;
        }
    }
    ctx->pc = 0x79A1E8u;
    // 0x79a1e8: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x79a1e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79a1ec: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x79a1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a1f0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79a1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79a1f4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x79a1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a1f8: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x79a1f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x79a1fc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x79a1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_79a200:
    // 0x79a200: 0x24620490  addiu       $v0, $v1, 0x490
    ctx->pc = 0x79a200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1168));
    // 0x79a204: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A204u;
    {
        const bool branch_taken_0x79a204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x79A208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A204u;
        // 0x79a208: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a204) {
            ctx->pc = 0x79A220u;
            goto label_79a220;
        }
    }
    ctx->pc = 0x79A20Cu;
    // 0x79a20c: 0xe4600490  swc1        $f0, 0x490($v1)
    ctx->pc = 0x79a20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1168), bits); }
    // 0x79a210: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x79a210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a214: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79a214u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79a218: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x79a218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a21c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79a21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79a220:
    // 0x79a220: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x79a220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79a224: 0x906202b4  lbu         $v0, 0x2B4($v1)
    ctx->pc = 0x79a224u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 692)));
    // 0x79a228: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A228u;
    {
        const bool branch_taken_0x79a228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A228u;
        // 0x79a22c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a228) {
            ctx->pc = 0x79A23Cu;
            goto label_79a23c;
        }
    }
    ctx->pc = 0x79A230u;
    // 0x79a230: 0x8c620278  lw          $v0, 0x278($v1)
    ctx->pc = 0x79a230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
    // 0x79a234: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A234u;
    {
        const bool branch_taken_0x79a234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A234u;
        // 0x79a238: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a234) {
            ctx->pc = 0x79A240u;
            goto label_79a240;
        }
    }
    ctx->pc = 0x79A23Cu;
label_79a23c:
    // 0x79a23c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x79a23cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a240:
    // 0x79a240: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x79a240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a244: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x79a244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x79a248: 0x3c01431c  lui         $at, 0x431C
    ctx->pc = 0x79a248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17180 << 16));
    // 0x79a24c: 0x34212666  ori         $at, $at, 0x2666
    ctx->pc = 0x79a24cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9830);
    // 0x79a250: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a254: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x79a254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x79a258: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x79a258u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x79a25c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79a25cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79a260: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x79a260u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x79a264: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x79a264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
    // 0x79a268: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79a26c: 0xac600100  sw          $zero, 0x100($v1)
    ctx->pc = 0x79a26cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 0));
    // 0x79a270: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79a270u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x79a274: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x79a274u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x79a278: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x79a278u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x79a27c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79a27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x79a280: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x79a280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79a284: 0x906202b4  lbu         $v0, 0x2B4($v1)
    ctx->pc = 0x79a284u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 692)));
    // 0x79a288: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A288u;
    {
        const bool branch_taken_0x79a288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A288u;
        // 0x79a28c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a288) {
            ctx->pc = 0x79A29Cu;
            goto label_79a29c;
        }
    }
    ctx->pc = 0x79A290u;
    // 0x79a290: 0x8c620278  lw          $v0, 0x278($v1)
    ctx->pc = 0x79a290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
    // 0x79a294: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A294u;
    {
        const bool branch_taken_0x79a294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A294u;
        // 0x79a298: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a294) {
            ctx->pc = 0x79A2A0u;
            goto label_79a2a0;
        }
    }
    ctx->pc = 0x79A29Cu;
label_79a29c:
    // 0x79a29c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x79a29cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a2a0:
    // 0x79a2a0: 0xc07df68  jal         func_1F7DA0
    ctx->pc = 0x79A2A0u;
    SET_GPR_U32(ctx, 31, 0x79A2A8u);
    ctx->pc = 0x79A2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2A0u;
    // 0x79a2a4: 0x24440100  addiu       $a0, $v0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x79A2A0u, 0x79A2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2A8u;
label_79a2a8:
    // 0x79a2a8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x79a2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x79a2ac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79a2acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79a2b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a2b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a2b4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x79a2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79a2b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79a2bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a2bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a2c0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x79a2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x79a2c4: 0x24620610  addiu       $v0, $v1, 0x610
    ctx->pc = 0x79a2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1552));
    // 0x79a2c8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x79a2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x79a2cc: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x79a2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x79a2d0: 0x10560007  beq         $v0, $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x79A2D0u;
    {
        const bool branch_taken_0x79a2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x79A2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2D0u;
        // 0x79a2d4: 0xe6c1000c  swc1        $f1, 0xC($s6) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2d0) {
            ctx->pc = 0x79A2F0u;
            goto label_79a2f0;
        }
    }
    ctx->pc = 0x79A2D8u;
    // 0x79a2d8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x79a2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a2dc: 0xe4600610  swc1        $f0, 0x610($v1)
    ctx->pc = 0x79a2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1552), bits); }
    // 0x79a2e0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x79a2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a2e4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79a2e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79a2e8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x79a2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a2ec: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79a2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79a2f0:
    // 0x79a2f0: 0x3c014128  lui         $at, 0x4128
    ctx->pc = 0x79a2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16680 << 16));
    // 0x79a2f4: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x79a2f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x79a2f8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79a2f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79a2fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79A2FCu;
    {
        const bool branch_taken_0x79a2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2FCu;
        // 0x79a300: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2fc) {
            ctx->pc = 0x79A318u;
            goto label_79a318;
        }
    }
    ctx->pc = 0x79A304u;
    // 0x79a304: 0x0  nop
    ctx->pc = 0x79a304u;
    // NOP
label_79a308:
    // 0x79a308: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79a308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79a30c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a310: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A310u;
    SET_GPR_U32(ctx, 31, 0x79A318u);
    ctx->pc = 0x79A314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A310u;
    // 0x79a314: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A310u, 0x79A318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A318u;
label_79a318:
    // 0x79a318: 0xc0b1010  jal         func_2C4040
    ctx->pc = 0x79A318u;
    SET_GPR_U32(ctx, 31, 0x79A320u);
    ctx->pc = 0x79A31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A318u;
    // 0x79a31c: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4040u, 0x79A318u, 0x79A320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A320u;
label_79a320:
    // 0x79a320: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79A320u;
    {
        const bool branch_taken_0x79a320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A320u;
        // 0x79a324: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a320) {
            ctx->pc = 0x79A344u;
            goto label_79a344;
        }
    }
    ctx->pc = 0x79A328u;
    // 0x79a328: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x79a328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79a32c: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x79a32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79a330: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x79a330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a334: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x79a334u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a338: 0x0  nop
    ctx->pc = 0x79a338u;
    // NOP
    // 0x79a33c: 0x4500fff2  bc1f        . + 4 + (-0xE << 2)
    ctx->pc = 0x79A33Cu;
    {
        const bool branch_taken_0x79a33c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A33Cu;
        // 0x79a340: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a33c) {
            ctx->pc = 0x79A308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a308;
        }
    }
    ctx->pc = 0x79A344u;
label_79a344:
    // 0x79a344: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a348: 0x2464ee00  addiu       $a0, $v1, -0x1200
    ctx->pc = 0x79a348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962688));
    // 0x79a34c: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x79a34cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x79a350: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a354: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a354u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a358: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a358u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a35c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A35Cu;
    SET_GPR_U32(ctx, 31, 0x79A364u);
    ctx->pc = 0x79A360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A35Cu;
    // 0x79a360: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A35Cu, 0x79A364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A364u;
label_79a364:
    // 0x79a364: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79a364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79a368: 0x2443d880  addiu       $v1, $v0, -0x2780
    ctx->pc = 0x79a368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957184));
    // 0x79a36c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x79a36cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x3BD880u));
    // 0x79a370: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79a370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a374: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x79a374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79a378: 0x24620610  addiu       $v0, $v1, 0x610
    ctx->pc = 0x79a378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1552));
    // 0x79a37c: 0x105e0006  beq         $v0, $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A37Cu;
    {
        const bool branch_taken_0x79a37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        ctx->pc = 0x79A380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A37Cu;
        // 0x79a380: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a37c) {
            ctx->pc = 0x79A398u;
            goto label_79a398;
        }
    }
    ctx->pc = 0x79A384u;
    // 0x79a384: 0xe4600610  swc1        $f0, 0x610($v1)
    ctx->pc = 0x79a384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1552), bits); }
    // 0x79a388: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x79a388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a38c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79a38cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79a390: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x79a390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a394: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79a394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79a398:
    // 0x79a398: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79a398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79a39c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x79a39cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x79a3a0: 0x2471ae50  addiu       $s1, $v1, -0x51B0
    ctx->pc = 0x79a3a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946384));
    // 0x79a3a4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x79a3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x79a3a8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A3A8u;
    SET_GPR_U32(ctx, 31, 0x79A3B0u);
    ctx->pc = 0x79A3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3A8u;
    // 0x79a3ac: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A3A8u, 0x79A3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3B0u;
label_79a3b0:
    // 0x79a3b0: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x79a3b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79a3b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a3b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a3b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a3bc: 0xc0528e6  jal         func_14A398
    ctx->pc = 0x79A3BCu;
    SET_GPR_U32(ctx, 31, 0x79A3C4u);
    ctx->pc = 0x79A3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3BCu;
    // 0x79a3c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A398u, 0x79A3BCu, 0x79A3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3C4u;
label_79a3c4:
    // 0x79a3c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a3c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a3cc: 0xc0528e6  jal         func_14A398
    ctx->pc = 0x79A3CCu;
    SET_GPR_U32(ctx, 31, 0x79A3D4u);
    ctx->pc = 0x79A3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3CCu;
    // 0x79a3d0: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A398u, 0x79A3CCu, 0x79A3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3D4u;
label_79a3d4:
    // 0x79a3d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79a3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a3d8: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x79a3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x79a3dc: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x79a3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a3e0: 0x24646ab0  addiu       $a0, $v1, 0x6AB0
    ctx->pc = 0x79a3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 27312));
    // 0x79a3e4: 0xa3a00010  sb          $zero, 0x10($sp)
    ctx->pc = 0x79a3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a3e8: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79A3E8u;
    SET_GPR_U32(ctx, 31, 0x79A3F0u);
    ctx->pc = 0x79A3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3E8u;
    // 0x79a3ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A3E8u, 0x79A3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3F0u;
label_79a3f0:
    // 0x79a3f0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x79a3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a3f4: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x79A3F4u;
    SET_GPR_U32(ctx, 31, 0x79A3FCu);
    ctx->pc = 0x79A3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3F4u;
    // 0x79a3f8: 0x240509c1  addiu       $a1, $zero, 0x9C1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2497));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x79A3F4u, 0x79A3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3FCu;
label_79a3fc:
    // 0x79a3fc: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79a3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79a400: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x79a400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x79a404: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A404u;
    SET_GPR_U32(ctx, 31, 0x79A40Cu);
    ctx->pc = 0x79A408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A404u;
    // 0x79a408: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A404u, 0x79A40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A40Cu;
label_79a40c:
    // 0x79a40c: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x79A40Cu;
    SET_GPR_U32(ctx, 31, 0x79A414u);
    ctx->pc = 0x79A410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A40Cu;
    // 0x79a410: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79A40Cu, 0x79A414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A414u;
label_79a414:
    // 0x79a414: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79A414u;
    SET_GPR_U32(ctx, 31, 0x79A41Cu);
    ctx->pc = 0x79A418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A414u;
    // 0x79a418: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79A414u, 0x79A41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A41Cu;
label_79a41c:
    // 0x79a41c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a424: 0x2445c138  addiu       $a1, $v0, -0x3EC8
    ctx->pc = 0x79a424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951224));
    // 0x79a428: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x79A428u;
    SET_GPR_U32(ctx, 31, 0x79A430u);
    ctx->pc = 0x79A42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A428u;
    // 0x79a42c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x79A428u, 0x79A430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A430u;
label_79a430:
    // 0x79a430: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79a434: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a438: 0x2465c1a8  addiu       $a1, $v1, -0x3E58
    ctx->pc = 0x79a438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951336));
    // 0x79a43c: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x79A43Cu;
    SET_GPR_U32(ctx, 31, 0x79A444u);
    ctx->pc = 0x79A440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A43Cu;
    // 0x79a440: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x79A43Cu, 0x79A444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A444u;
label_79a444:
    // 0x79a444: 0xc06cd8a  jal         func_1B3628
    ctx->pc = 0x79A444u;
    SET_GPR_U32(ctx, 31, 0x79A44Cu);
    ctx->pc = 0x79A448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A444u;
    // 0x79a448: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3628u, 0x79A444u, 0x79A44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A44Cu;
label_79a44c:
    // 0x79a44c: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79a450: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A450u;
    SET_GPR_U32(ctx, 31, 0x79A458u);
    ctx->pc = 0x79A454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A450u;
    // 0x79a454: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A450u, 0x79A458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A458u;
label_79a458:
    // 0x79a458: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x79a458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79a45c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x79a45cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79a460: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x79a460u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79a464: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x79a464u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79a468: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x79a468u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79a46c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x79a46cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79a470: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x79a470u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79a474: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x79a474u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a478: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x79a478u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a47c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x79a47cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a480: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x79a480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79a484: 0x3e00008  jr          $ra
    ctx->pc = 0x79A484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A484u;
        // 0x79a488: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A48Cu;
    // 0x79a48c: 0x0  nop
    ctx->pc = 0x79a48cu;
    // NOP
    ctx->pc = 0x79a490u;
}
} // namespace gh_r505
