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

// Function: Pool_createObjWithVt
// Address: 0x2ba020 - 0x2ba158
void Pool_createObjWithVt_0x2ba020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pool_createObjWithVt_0x2ba020");
#endif

    switch (ctx->pc) {
        case 0x2ba020u: goto label_2ba020;
        case 0x2ba024u: goto label_2ba024;
        case 0x2ba028u: goto label_2ba028;
        case 0x2ba02cu: goto label_2ba02c;
        case 0x2ba030u: goto label_2ba030;
        case 0x2ba034u: goto label_2ba034;
        case 0x2ba038u: goto label_2ba038;
        case 0x2ba03cu: goto label_2ba03c;
        case 0x2ba040u: goto label_2ba040;
        case 0x2ba044u: goto label_2ba044;
        case 0x2ba048u: goto label_2ba048;
        case 0x2ba04cu: goto label_2ba04c;
        case 0x2ba050u: goto label_2ba050;
        case 0x2ba054u: goto label_2ba054;
        case 0x2ba058u: goto label_2ba058;
        case 0x2ba05cu: goto label_2ba05c;
        case 0x2ba060u: goto label_2ba060;
        case 0x2ba064u: goto label_2ba064;
        case 0x2ba068u: goto label_2ba068;
        case 0x2ba06cu: goto label_2ba06c;
        case 0x2ba070u: goto label_2ba070;
        case 0x2ba074u: goto label_2ba074;
        case 0x2ba078u: goto label_2ba078;
        case 0x2ba07cu: goto label_2ba07c;
        case 0x2ba080u: goto label_2ba080;
        case 0x2ba084u: goto label_2ba084;
        case 0x2ba088u: goto label_2ba088;
        case 0x2ba08cu: goto label_2ba08c;
        case 0x2ba090u: goto label_2ba090;
        case 0x2ba094u: goto label_2ba094;
        case 0x2ba098u: goto label_2ba098;
        case 0x2ba09cu: goto label_2ba09c;
        case 0x2ba0a0u: goto label_2ba0a0;
        case 0x2ba0a4u: goto label_2ba0a4;
        case 0x2ba0a8u: goto label_2ba0a8;
        case 0x2ba0acu: goto label_2ba0ac;
        case 0x2ba0b0u: goto label_2ba0b0;
        case 0x2ba0b4u: goto label_2ba0b4;
        case 0x2ba0b8u: goto label_2ba0b8;
        case 0x2ba0bcu: goto label_2ba0bc;
        case 0x2ba0c0u: goto label_2ba0c0;
        case 0x2ba0c4u: goto label_2ba0c4;
        case 0x2ba0c8u: goto label_2ba0c8;
        case 0x2ba0ccu: goto label_2ba0cc;
        case 0x2ba0d0u: goto label_2ba0d0;
        case 0x2ba0d4u: goto label_2ba0d4;
        case 0x2ba0d8u: goto label_2ba0d8;
        case 0x2ba0dcu: goto label_2ba0dc;
        case 0x2ba0e0u: goto label_2ba0e0;
        case 0x2ba0e4u: goto label_2ba0e4;
        case 0x2ba0e8u: goto label_2ba0e8;
        case 0x2ba0ecu: goto label_2ba0ec;
        case 0x2ba0f0u: goto label_2ba0f0;
        case 0x2ba0f4u: goto label_2ba0f4;
        case 0x2ba0f8u: goto label_2ba0f8;
        case 0x2ba0fcu: goto label_2ba0fc;
        case 0x2ba100u: goto label_2ba100;
        case 0x2ba104u: goto label_2ba104;
        case 0x2ba108u: goto label_2ba108;
        case 0x2ba10cu: goto label_2ba10c;
        case 0x2ba110u: goto label_2ba110;
        case 0x2ba114u: goto label_2ba114;
        case 0x2ba118u: goto label_2ba118;
        case 0x2ba11cu: goto label_2ba11c;
        case 0x2ba120u: goto label_2ba120;
        case 0x2ba124u: goto label_2ba124;
        case 0x2ba128u: goto label_2ba128;
        case 0x2ba12cu: goto label_2ba12c;
        case 0x2ba130u: goto label_2ba130;
        case 0x2ba134u: goto label_2ba134;
        case 0x2ba138u: goto label_2ba138;
        case 0x2ba13cu: goto label_2ba13c;
        case 0x2ba140u: goto label_2ba140;
        case 0x2ba144u: goto label_2ba144;
        case 0x2ba148u: goto label_2ba148;
        case 0x2ba14cu: goto label_2ba14c;
        case 0x2ba150u: goto label_2ba150;
        case 0x2ba154u: goto label_2ba154;
        default: break;
    }

    ctx->pc = 0x2ba020u;

label_2ba020:
    // 0x2ba020: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ba020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2ba024:
    // 0x2ba024: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2ba024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_2ba028:
    // 0x2ba028: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2ba028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_2ba02c:
    // 0x2ba02c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ba02cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ba030:
    // 0x2ba030: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2ba030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2ba034:
    // 0x2ba034: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2ba034u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ba038:
    // 0x2ba038: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2ba038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_2ba03c:
    // 0x2ba03c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2ba03cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2ba040:
    // 0x2ba040: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2ba040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_2ba044:
    // 0x2ba044: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2ba044u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2ba048:
    // 0x2ba048: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2ba048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_2ba04c:
    // 0x2ba04c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2ba04cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ba050:
    // 0x2ba050: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2ba050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_2ba054:
    // 0x2ba054: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x2ba054u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2ba058:
    // 0x2ba058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ba058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ba05c:
    // 0x2ba05c: 0xc0ae8c0  jal         func_2BA300
label_2ba060:
    if (ctx->pc == 0x2BA060u) {
        ctx->pc = 0x2BA060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA05Cu;
        // 0x2ba060: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA064u;
        goto label_2ba064;
    }
    ctx->pc = 0x2BA05Cu;
    SET_GPR_U32(ctx, 31, 0x2BA064u);
    ctx->pc = 0x2BA060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA05Cu;
    // 0x2ba060: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA300u, 0x2BA05Cu, 0x2BA064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA064u;
label_2ba064:
    // 0x2ba064: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ba064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba068:
    // 0x2ba068: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
label_2ba06c:
    if (ctx->pc == 0x2BA06Cu) {
        ctx->pc = 0x2BA06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA068u;
        // 0x2ba06c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA070u;
        goto label_2ba070;
    }
    ctx->pc = 0x2BA068u;
    {
        const bool branch_taken_0x2ba068 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA068u;
        // 0x2ba06c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba068) {
            ctx->pc = 0x2BA114u;
            goto label_2ba114;
        }
    }
    ctx->pc = 0x2BA070u;
label_2ba070:
    // 0x2ba070: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ba070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ba074:
    // 0x2ba074: 0x30420201  andi        $v0, $v0, 0x201
    ctx->pc = 0x2ba074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)513);
label_2ba078:
    // 0x2ba078: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ba078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2ba07c:
    // 0x2ba07c: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
label_2ba080:
    if (ctx->pc == 0x2BA080u) {
        ctx->pc = 0x2BA080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA07Cu;
        // 0x2ba080: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA084u;
        goto label_2ba084;
    }
    ctx->pc = 0x2BA07Cu;
    {
        const bool branch_taken_0x2ba07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ba07c) {
            ctx->pc = 0x2BA080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA07Cu;
            // 0x2ba080: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA0FCu;
            goto label_2ba0fc;
        }
    }
    ctx->pc = 0x2BA084u;
label_2ba084:
    // 0x2ba084: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ba084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ba088:
    // 0x2ba088: 0xc0ae29c  jal         func_2B8A70
label_2ba08c:
    if (ctx->pc == 0x2BA08Cu) {
        ctx->pc = 0x2BA08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA088u;
        // 0x2ba08c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA090u;
        goto label_2ba090;
    }
    ctx->pc = 0x2BA088u;
    SET_GPR_U32(ctx, 31, 0x2BA090u);
    ctx->pc = 0x2BA08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA088u;
    // 0x2ba08c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8A70u, 0x2BA088u, 0x2BA090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA090u;
label_2ba090:
    // 0x2ba090: 0x263000e0  addiu       $s0, $s1, 0xE0
    ctx->pc = 0x2ba090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_2ba094:
    // 0x2ba094: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2ba094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ba098:
    // 0x2ba098: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2ba098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ba09c:
    // 0x2ba09c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2ba09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ba0a0:
    // 0x2ba0a0: 0xc0aec58  jal         func_2BB160
label_2ba0a4:
    if (ctx->pc == 0x2BA0A4u) {
        ctx->pc = 0x2BA0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0A0u;
        // 0x2ba0a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA0A8u;
        goto label_2ba0a8;
    }
    ctx->pc = 0x2BA0A0u;
    SET_GPR_U32(ctx, 31, 0x2BA0A8u);
    ctx->pc = 0x2BA0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA0A0u;
    // 0x2ba0a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB160u, 0x2BA0A0u, 0x2BA0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA0A8u;
label_2ba0a8:
    // 0x2ba0a8: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2ba0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
label_2ba0ac:
    // 0x2ba0ac: 0x2463bb20  addiu       $v1, $v1, -0x44E0
    ctx->pc = 0x2ba0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949664));
label_2ba0b0:
    // 0x2ba0b0: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x2ba0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
label_2ba0b4:
    // 0x2ba0b4: 0xfa2001f0  sqc2        $vf0, 0x1F0($s1)
    ctx->pc = 0x2ba0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 496), _mm_castps_si128(ctx->vu0_vf[0]));
label_2ba0b8:
    // 0x2ba0b8: 0xfa200200  sqc2        $vf0, 0x200($s1)
    ctx->pc = 0x2ba0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 512), _mm_castps_si128(ctx->vu0_vf[0]));
label_2ba0bc:
    // 0x2ba0bc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2ba0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2ba0c0:
    // 0x2ba0c0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2ba0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2ba0c4:
    // 0x2ba0c4: 0xae2300e0  sw          $v1, 0xE0($s1)
    ctx->pc = 0x2ba0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 3));
label_2ba0c8:
    // 0x2ba0c8: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x2ba0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_2ba0cc:
    // 0x2ba0cc: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x2ba0ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_2ba0d0:
    // 0x2ba0d0: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2ba0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2ba0d4:
    // 0x2ba0d4: 0x60f809  jalr        $v1
label_2ba0d8:
    if (ctx->pc == 0x2BA0D8u) {
        ctx->pc = 0x2BA0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0D4u;
        // 0x2ba0d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA0DCu;
        goto label_2ba0dc;
    }
    ctx->pc = 0x2BA0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2BA0DCu);
        ctx->pc = 0x2BA0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0D4u;
        // 0x2ba0d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA0D4u, 0x2BA0DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BA0DCu;
label_2ba0dc:
    // 0x2ba0dc: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x2ba0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_2ba0e0:
    // 0x2ba0e0: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x2ba0e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_2ba0e4:
    // 0x2ba0e4: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x2ba0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2ba0e8:
    // 0x2ba0e8: 0x60f809  jalr        $v1
label_2ba0ec:
    if (ctx->pc == 0x2BA0ECu) {
        ctx->pc = 0x2BA0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0E8u;
        // 0x2ba0ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA0F0u;
        goto label_2ba0f0;
    }
    ctx->pc = 0x2BA0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2BA0F0u);
        ctx->pc = 0x2BA0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0E8u;
        // 0x2ba0ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA0E8u, 0x2BA0F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BA0F0u;
label_2ba0f0:
    // 0x2ba0f0: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x2ba0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
label_2ba0f4:
    // 0x2ba0f4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2ba0f8:
    if (ctx->pc == 0x2BA0F8u) {
        ctx->pc = 0x2BA0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0F4u;
        // 0x2ba0f8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA0FCu;
        goto label_2ba0fc;
    }
    ctx->pc = 0x2BA0F4u;
    {
        const bool branch_taken_0x2ba0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0F4u;
        // 0x2ba0f8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba0f4) {
            ctx->pc = 0x2BA114u;
            goto label_2ba114;
        }
    }
    ctx->pc = 0x2BA0FCu;
label_2ba0fc:
    // 0x2ba0fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ba0fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ba100:
    // 0x2ba100: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2ba100u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2ba104:
    // 0x2ba104: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2ba104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2ba108:
    // 0x2ba108: 0x60f809  jalr        $v1
label_2ba10c:
    if (ctx->pc == 0x2BA10Cu) {
        ctx->pc = 0x2BA10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA108u;
        // 0x2ba10c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA110u;
        goto label_2ba110;
    }
    ctx->pc = 0x2BA108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2BA110u);
        ctx->pc = 0x2BA10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA108u;
        // 0x2ba10c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA108u, 0x2BA110u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BA110u;
label_2ba110:
    // 0x2ba110: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ba110u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ba114:
    // 0x2ba114: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2ba114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2ba118:
    // 0x2ba118: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2ba118u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2ba11c:
    // 0x2ba11c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2ba11cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ba120:
    // 0x2ba120: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2ba120u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ba124:
    // 0x2ba124: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2ba124u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ba128:
    // 0x2ba128: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2ba128u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ba12c:
    // 0x2ba12c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2ba12cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ba130:
    // 0x2ba130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ba130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ba134:
    // 0x2ba134: 0x3e00008  jr          $ra
label_2ba138:
    if (ctx->pc == 0x2BA138u) {
        ctx->pc = 0x2BA138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA134u;
        // 0x2ba138: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA13Cu;
        goto label_2ba13c;
    }
    ctx->pc = 0x2BA134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA134u;
        // 0x2ba138: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA13Cu;
label_2ba13c:
    // 0x2ba13c: 0x0  nop
    ctx->pc = 0x2ba13cu;
    // NOP
label_2ba140:
    // 0x2ba140: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2ba140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2ba144:
    // 0x2ba144: 0x0  nop
    ctx->pc = 0x2ba144u;
    // NOP
label_2ba148:
    // 0x2ba148: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2ba148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2ba14c:
    // 0x2ba14c: 0x0  nop
    ctx->pc = 0x2ba14cu;
    // NOP
label_2ba150:
    // 0x2ba150: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2ba150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2ba154:
    // 0x2ba154: 0x0  nop
    ctx->pc = 0x2ba154u;
    // NOP
    ctx->pc = 0x2ba158u;
}
