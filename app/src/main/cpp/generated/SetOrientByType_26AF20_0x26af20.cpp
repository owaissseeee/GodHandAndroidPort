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

// Function: SetOrientByType_26AF20
// Address: 0x26af20 - 0x26b1e8
void SetOrientByType_26AF20_0x26af20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetOrientByType_26AF20_0x26af20");
#endif

    switch (ctx->pc) {
        case 0x26b1d8u: goto label_26b1d8;
        default: break;
    }

    ctx->pc = 0x26af20u;

    // 0x26af20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26af20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26af24: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x26af24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26af28: 0x10a000ab  beqz        $a1, . + 4 + (0xAB << 2)
    ctx->pc = 0x26AF28u;
    {
        const bool branch_taken_0x26af28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF28u;
        // 0x26af2c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af28) {
            ctx->pc = 0x26B1D8u;
            goto label_26b1d8;
        }
    }
    ctx->pc = 0x26AF30u;
    // 0x26af30: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x26af30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26af34: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x26af34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26af38: 0x2cc2000b  sltiu       $v0, $a2, 0xB
    ctx->pc = 0x26af38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x26af3c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26AF3Cu;
    {
        const bool branch_taken_0x26af3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF3Cu;
        // 0x26af40: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af3c) {
            ctx->pc = 0x26AF5Cu;
            goto label_26af5c;
        }
    }
    ctx->pc = 0x26AF44u;
    // 0x26af44: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x26af44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x26af48: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x26af48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
    // 0x26af4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26af4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26af50: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26af50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26af54: 0x800008  jr          $a0
    ctx->pc = 0x26AF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26AF5Cu: goto label_26af5c;
            case 0x26AFA0u: goto label_26afa0;
            case 0x26AFD8u: goto label_26afd8;
            case 0x26B00Cu: goto label_26b00c;
            case 0x26B050u: goto label_26b050;
            case 0x26B06Cu: goto label_26b06c;
            case 0x26B088u: goto label_26b088;
            case 0x26B0A4u: goto label_26b0a4;
            case 0x26B0C0u: goto label_26b0c0;
            case 0x26B11Cu: goto label_26b11c;
            case 0x26B178u: goto label_26b178;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AF54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26AF5Cu;
label_26af5c:
    // 0x26af5c: 0x3c01beb8  lui         $at, 0xBEB8
    ctx->pc = 0x26af5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48824 << 16));
    // 0x26af60: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x26af60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x26af64: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x26af64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x26af68: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x26af68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
    // 0x26af6c: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x26af6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
    // 0x26af70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26af70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26af74: 0x3c01be2e  lui         $at, 0xBE2E
    ctx->pc = 0x26af74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48686 << 16));
    // 0x26af78: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x26af78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x26af7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26af7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26af80: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x26af80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x26af84: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26af84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x26af88: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26af88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26af8c: 0x3c013f32  lui         $at, 0x3F32
    ctx->pc = 0x26af8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16178 << 16));
    // 0x26af90: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x26af90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x26af94: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x26af94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26af98: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x26AF98u;
    {
        const bool branch_taken_0x26af98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF98u;
        // 0x26af9c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af98) {
            ctx->pc = 0x26B100u;
            goto label_26b100;
        }
    }
    ctx->pc = 0x26AFA0u;
label_26afa0:
    // 0x26afa0: 0x3c013f35  lui         $at, 0x3F35
    ctx->pc = 0x26afa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16181 << 16));
    // 0x26afa4: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x26afa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x26afa8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x26afa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26afac: 0x3c01bd34  lui         $at, 0xBD34
    ctx->pc = 0x26afacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48436 << 16));
    // 0x26afb0: 0x34213958  ori         $at, $at, 0x3958
    ctx->pc = 0x26afb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14680);
    // 0x26afb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26afb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26afb8: 0x3c01bd5d  lui         $at, 0xBD5D
    ctx->pc = 0x26afb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48477 << 16));
    // 0x26afbc: 0x34212f1b  ori         $at, $at, 0x2F1B
    ctx->pc = 0x26afbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12059);
    // 0x26afc0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26afc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26afc4: 0x3c01bf06  lui         $at, 0xBF06
    ctx->pc = 0x26afc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48902 << 16));
    // 0x26afc8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x26afc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x26afcc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26afccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26afd0: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x26AFD0u;
    {
        const bool branch_taken_0x26afd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AFD0u;
        // 0x26afd4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26afd0) {
            ctx->pc = 0x26B1ACu;
            goto label_26b1ac;
        }
    }
    ctx->pc = 0x26AFD8u;
label_26afd8:
    // 0x26afd8: 0x3c013dc7  lui         $at, 0x3DC7
    ctx->pc = 0x26afd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15815 << 16));
    // 0x26afdc: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x26afdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x26afe0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26afe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26afe4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x26afe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26afe8: 0x3c013c9b  lui         $at, 0x3C9B
    ctx->pc = 0x26afe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15515 << 16));
    // 0x26afec: 0x3421a5e3  ori         $at, $at, 0xA5E3
    ctx->pc = 0x26afecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42467);
    // 0x26aff0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26aff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26aff4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x26aff4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26aff8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x26aff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26affc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x26affcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x26b000: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x26b000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x26b004: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x26B004u;
    {
        const bool branch_taken_0x26b004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B004u;
        // 0x26b008: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b004) {
            ctx->pc = 0x26B1C0u;
            goto label_26b1c0;
        }
    }
    ctx->pc = 0x26B00Cu;
label_26b00c:
    // 0x26b00c: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x26b00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
    // 0x26b010: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26b010u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x26b014: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x26b014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x26b018: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x26b018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x26b01c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26b01cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x26b020: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26b020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26b024: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x26b024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x26b028: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26b028u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x26b02c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26b02cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26b030: 0x3c01402d  lui         $at, 0x402D
    ctx->pc = 0x26b030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16429 << 16));
    // 0x26b034: 0x342122fc  ori         $at, $at, 0x22FC
    ctx->pc = 0x26b034u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8956);
    // 0x26b038: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26b038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26b03c: 0x3c013f32  lui         $at, 0x3F32
    ctx->pc = 0x26b03cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16178 << 16));
    // 0x26b040: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x26b040u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x26b044: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x26b044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26b048: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x26B048u;
    {
        const bool branch_taken_0x26b048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B048u;
        // 0x26b04c: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b048) {
            ctx->pc = 0x26B15Cu;
            goto label_26b15c;
        }
    }
    ctx->pc = 0x26B050u;
label_26b050:
    // 0x26b050: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x26b050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x26b054: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x26b054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26b058: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x26b058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x26b05c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x26b05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x26b060: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x26b060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x26b064: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x26B064u;
    {
        const bool branch_taken_0x26b064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B064u;
        // 0x26b068: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b064) {
            ctx->pc = 0x26B1C0u;
            goto label_26b1c0;
        }
    }
    ctx->pc = 0x26B06Cu;
label_26b06c:
    // 0x26b06c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x26b06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x26b070: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x26b070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26b074: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x26b074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x26b078: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x26b078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x26b07c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x26b07cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x26b080: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x26B080u;
    {
        const bool branch_taken_0x26b080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B080u;
        // 0x26b084: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b080) {
            ctx->pc = 0x26B1C0u;
            goto label_26b1c0;
        }
    }
    ctx->pc = 0x26B088u;
label_26b088:
    // 0x26b088: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x26b088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x26b08c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x26b08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26b090: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x26b090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x26b094: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x26b094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x26b098: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x26b098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x26b09c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x26B09Cu;
    {
        const bool branch_taken_0x26b09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B09Cu;
        // 0x26b0a0: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b09c) {
            ctx->pc = 0x26B1C0u;
            goto label_26b1c0;
        }
    }
    ctx->pc = 0x26B0A4u;
label_26b0a4:
    // 0x26b0a4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x26b0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x26b0a8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x26b0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26b0ac: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x26b0acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x26b0b0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x26b0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x26b0b4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x26b0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x26b0b8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x26B0B8u;
    {
        const bool branch_taken_0x26b0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B0B8u;
        // 0x26b0bc: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b0b8) {
            ctx->pc = 0x26B1C0u;
            goto label_26b1c0;
        }
    }
    ctx->pc = 0x26B0C0u;
label_26b0c0:
    // 0x26b0c0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x26b0c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x26b0c4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26b0c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x26b0c8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x26b0c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x26b0cc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x26b0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26b0d0: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x26b0d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x26b0d4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26b0d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x26b0d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26b0d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26b0dc: 0x3c01be2e  lui         $at, 0xBE2E
    ctx->pc = 0x26b0dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48686 << 16));
    // 0x26b0e0: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x26b0e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x26b0e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26b0e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26b0e8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x26b0e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x26b0ec: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26b0ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x26b0f0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26b0f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26b0f4: 0x3c013f1c  lui         $at, 0x3F1C
    ctx->pc = 0x26b0f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16156 << 16));
    // 0x26b0f8: 0x342161aa  ori         $at, $at, 0x61AA
    ctx->pc = 0x26b0f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25002);
    // 0x26b0fc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x26b0fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_26b100:
    // 0x26b100: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x26b100u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26b104: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x26b104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26b108: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x26b108u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26b10c: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x26b10cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x26b110: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x26b110u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x26b114: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x26B114u;
    {
        const bool branch_taken_0x26b114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B114u;
        // 0x26b118: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b114) {
            ctx->pc = 0x26B1C4u;
            goto label_26b1c4;
        }
    }
    ctx->pc = 0x26B11Cu;
label_26b11c:
    // 0x26b11c: 0x3c013ede  lui         $at, 0x3EDE
    ctx->pc = 0x26b11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16094 << 16));
    // 0x26b120: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x26b120u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x26b124: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x26b124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x26b128: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x26b128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26b12c: 0x3c01bd17  lui         $at, 0xBD17
    ctx->pc = 0x26b12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48407 << 16));
    // 0x26b130: 0x34218d50  ori         $at, $at, 0x8D50
    ctx->pc = 0x26b130u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36176);
    // 0x26b134: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26b134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26b138: 0x3c013e98  lui         $at, 0x3E98
    ctx->pc = 0x26b138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16024 << 16));
    // 0x26b13c: 0x34211062  ori         $at, $at, 0x1062
    ctx->pc = 0x26b13cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4194);
    // 0x26b140: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26b140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26b144: 0x3c01bf49  lui         $at, 0xBF49
    ctx->pc = 0x26b144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48969 << 16));
    // 0x26b148: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26b148u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x26b14c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26b14cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26b150: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x26b150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x26b154: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26b154u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x26b158: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x26b158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_26b15c:
    // 0x26b15c: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x26b15cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26b160: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x26b160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26b164: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x26b164u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26b168: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x26b168u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x26b16c: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x26b16cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x26b170: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26B170u;
    {
        const bool branch_taken_0x26b170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B170u;
        // 0x26b174: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b170) {
            ctx->pc = 0x26B1C4u;
            goto label_26b1c4;
        }
    }
    ctx->pc = 0x26B178u;
label_26b178:
    // 0x26b178: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x26b178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x26b17c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26b17cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x26b180: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x26b180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26b184: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x26b184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26b188: 0x3c01bcdd  lui         $at, 0xBCDD
    ctx->pc = 0x26b188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48349 << 16));
    // 0x26b18c: 0x34212f1b  ori         $at, $at, 0x2F1B
    ctx->pc = 0x26b18cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12059);
    // 0x26b190: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26b190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26b194: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x26b194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x26b198: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26b198u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x26b19c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26b19cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26b1a0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x26b1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x26b1a4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26b1a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x26b1a8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26b1a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_26b1ac:
    // 0x26b1ac: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x26b1acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26b1b0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x26b1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26b1b4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x26b1b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26b1b8: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x26b1b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x26b1bc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x26b1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_26b1c0:
    // 0x26b1c0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x26b1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_26b1c4:
    // 0x26b1c4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x26b1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b1c8: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x26b1c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26b1cc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x26b1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b1d0: 0xc073c58  jal         func_1CF160
    ctx->pc = 0x26B1D0u;
    SET_GPR_U32(ctx, 31, 0x26B1D8u);
    ctx->pc = 0x26B1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B1D0u;
    // 0x26b1d4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF160u, 0x26B1D0u, 0x26B1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B1D8u;
label_26b1d8:
    // 0x26b1d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26b1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x26B1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B1DCu;
        // 0x26b1e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B1E4u;
    // 0x26b1e4: 0x0  nop
    ctx->pc = 0x26b1e4u;
    // NOP
    ctx->pc = 0x26b1e8u;
}
