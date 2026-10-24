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

// Function: func_0016DF38
// Address: 0x16df38 - 0x16ede0
void func_0016DF38_0x16df38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0016DF38_0x16df38");
#endif

    switch (ctx->pc) {
        case 0x16dfccu: goto label_16dfcc;
        case 0x16e014u: goto label_16e014;
        case 0x16e064u: goto label_16e064;
        case 0x16e09cu: goto label_16e09c;
        case 0x16e0b8u: goto label_16e0b8;
        case 0x16e0ecu: goto label_16e0ec;
        case 0x16e178u: goto label_16e178;
        case 0x16e1acu: goto label_16e1ac;
        case 0x16e1c8u: goto label_16e1c8;
        case 0x16e1dcu: goto label_16e1dc;
        case 0x16e220u: goto label_16e220;
        case 0x16e258u: goto label_16e258;
        case 0x16e260u: goto label_16e260;
        case 0x16e27cu: goto label_16e27c;
        case 0x16e324u: goto label_16e324;
        case 0x16e3ccu: goto label_16e3cc;
        case 0x16e408u: goto label_16e408;
        case 0x16e438u: goto label_16e438;
        case 0x16e468u: goto label_16e468;
        case 0x16e498u: goto label_16e498;
        case 0x16e4e0u: goto label_16e4e0;
        case 0x16e528u: goto label_16e528;
        case 0x16e570u: goto label_16e570;
        case 0x16e5b8u: goto label_16e5b8;
        case 0x16e600u: goto label_16e600;
        case 0x16e648u: goto label_16e648;
        case 0x16e690u: goto label_16e690;
        case 0x16e6ccu: goto label_16e6cc;
        case 0x16e718u: goto label_16e718;
        case 0x16e7c8u: goto label_16e7c8;
        case 0x16e888u: goto label_16e888;
        case 0x16e984u: goto label_16e984;
        case 0x16ea30u: goto label_16ea30;
        case 0x16ea84u: goto label_16ea84;
        case 0x16ea8cu: goto label_16ea8c;
        case 0x16eabcu: goto label_16eabc;
        case 0x16eaf0u: goto label_16eaf0;
        case 0x16eafcu: goto label_16eafc;
        case 0x16eb24u: goto label_16eb24;
        case 0x16eb3cu: goto label_16eb3c;
        case 0x16eb54u: goto label_16eb54;
        case 0x16eb6cu: goto label_16eb6c;
        case 0x16eb84u: goto label_16eb84;
        case 0x16eba0u: goto label_16eba0;
        case 0x16ebc0u: goto label_16ebc0;
        case 0x16ebd0u: goto label_16ebd0;
        case 0x16ebfcu: goto label_16ebfc;
        case 0x16ec14u: goto label_16ec14;
        case 0x16ec38u: goto label_16ec38;
        case 0x16ec60u: goto label_16ec60;
        case 0x16ec7cu: goto label_16ec7c;
        case 0x16ec9cu: goto label_16ec9c;
        case 0x16ecb4u: goto label_16ecb4;
        case 0x16ecf0u: goto label_16ecf0;
        case 0x16ed18u: goto label_16ed18;
        case 0x16ed30u: goto label_16ed30;
        case 0x16ed68u: goto label_16ed68;
        case 0x16eda4u: goto label_16eda4;
        case 0x16edacu: goto label_16edac;
        default: break;
    }

    ctx->pc = 0x16df38u;

    // 0x16df38: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x16df38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x16df3c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x16df3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x16df40: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x16df40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x16df44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16df44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16df48: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x16df48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x16df4c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x16df4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x16df50: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16df50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16df54: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x16df54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x16df58: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x16df58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x16df5c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x16df5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x16df60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16df60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16df64: 0x8223005a  lb          $v1, 0x5A($s1)
    ctx->pc = 0x16df64u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
    // 0x16df68: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16DF68u;
    {
        const bool branch_taken_0x16df68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DF68u;
        // 0x16df6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16df68) {
            ctx->pc = 0x16DF80u;
            goto label_16df80;
        }
    }
    ctx->pc = 0x16DF70u;
    // 0x16df70: 0x106200f1  beq         $v1, $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x16DF70u;
    {
        const bool branch_taken_0x16df70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DF70u;
        // 0x16df74: 0x3c160074  lui         $s6, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16df70) {
            ctx->pc = 0x16E338u;
            goto label_16e338;
        }
    }
    ctx->pc = 0x16DF78u;
    // 0x16df78: 0x1000037d  b           . + 4 + (0x37D << 2)
    ctx->pc = 0x16DF78u;
    {
        const bool branch_taken_0x16df78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DF78u;
        // 0x16df7c: 0x26c274a0  addiu       $v0, $s6, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16df78) {
            ctx->pc = 0x16ED70u;
            goto label_16ed70;
        }
    }
    ctx->pc = 0x16DF80u;
label_16df80:
    // 0x16df80: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x16df80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x16df84: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x16df84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x16df88: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x16df88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x16df8c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x16df8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x16df90: 0x212b8  dsll        $v0, $v0, 10
    ctx->pc = 0x16df90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 10);
    // 0x16df94: 0x246474a0  addiu       $a0, $v1, 0x74A0
    ctx->pc = 0x16df94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x16df98: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x16df98u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16df9c: 0xdc8301b0  ld          $v1, 0x1B0($a0)
    ctx->pc = 0x16df9cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x16dfa0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16dfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16dfa4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x16DFA4u;
    {
        const bool branch_taken_0x16dfa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DFA4u;
        // 0x16dfa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dfa4) {
            ctx->pc = 0x16DFDCu;
            goto label_16dfdc;
        }
    }
    ctx->pc = 0x16DFACu;
    // 0x16dfac: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x16dfacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x16dfb0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16dfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16dfb4: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x16dfb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x16dfb8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16dfb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16dfbc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16dfbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16dfc0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16dfc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dfc4: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16DFC4u;
    SET_GPR_U32(ctx, 31, 0x16DFCCu);
    ctx->pc = 0x16DFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DFC4u;
    // 0x16dfc8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16DFC4u, 0x16DFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DFCCu;
label_16dfcc:
    // 0x16dfcc: 0x9223025c  lbu         $v1, 0x25C($s1)
    ctx->pc = 0x16dfccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x16dfd0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16dfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16dfd4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x16DFD4u;
    {
        const bool branch_taken_0x16dfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DFD4u;
        // 0x16dfd8: 0xa223025c  sb          $v1, 0x25C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 604), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dfd4) {
            ctx->pc = 0x16E070u;
            goto label_16e070;
        }
    }
    ctx->pc = 0x16DFDCu;
label_16dfdc:
    // 0x16dfdc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x16dfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x16dfe0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x16dfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x16dfe4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x16dfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x16dfe8: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x16dfe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x16dfec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16dfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16dff0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x16DFF0u;
    {
        const bool branch_taken_0x16dff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DFF0u;
        // 0x16dff4: 0x2406015f  addiu       $a2, $zero, 0x15F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dff0) {
            ctx->pc = 0x16E024u;
            goto label_16e024;
        }
    }
    ctx->pc = 0x16DFF8u;
    // 0x16dff8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x16dff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x16dffc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16dffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16e000: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16e000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e004: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16e004u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e008: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16e008u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e00c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16E00Cu;
    SET_GPR_U32(ctx, 31, 0x16E014u);
    ctx->pc = 0x16E010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E00Cu;
    // 0x16e010: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16E00Cu, 0x16E014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E014u;
label_16e014:
    // 0x16e014: 0x9223025c  lbu         $v1, 0x25C($s1)
    ctx->pc = 0x16e014u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x16e018: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16e018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16e01c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x16E01Cu;
    {
        const bool branch_taken_0x16e01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E01Cu;
        // 0x16e020: 0xa223025c  sb          $v1, 0x25C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 604), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e01c) {
            ctx->pc = 0x16E070u;
            goto label_16e070;
        }
    }
    ctx->pc = 0x16E024u;
label_16e024:
    // 0x16e024: 0xdc8201a0  ld          $v0, 0x1A0($a0)
    ctx->pc = 0x16e024u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 416)));
    // 0x16e028: 0x3403c000  ori         $v1, $zero, 0xC000
    ctx->pc = 0x16e028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x16e02c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x16e02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x16e030: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x16e030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x16e034: 0x31b38  dsll        $v1, $v1, 12
    ctx->pc = 0x16e034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 12);
    // 0x16e038: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x16e038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x16e03c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x16E03Cu;
    {
        const bool branch_taken_0x16e03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E03Cu;
        // 0x16e040: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e03c) {
            ctx->pc = 0x16E070u;
            goto label_16e070;
        }
    }
    ctx->pc = 0x16E044u;
    // 0x16e044: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e048: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16e048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16e04c: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x16e04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x16e050: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16e050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e054: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16e054u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e058: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16e058u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e05c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16E05Cu;
    SET_GPR_U32(ctx, 31, 0x16E064u);
    ctx->pc = 0x16E060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E05Cu;
    // 0x16e060: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16E05Cu, 0x16E064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E064u;
label_16e064:
    // 0x16e064: 0x92230284  lbu         $v1, 0x284($s1)
    ctx->pc = 0x16e064u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 644)));
    // 0x16e068: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x16e068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x16e06c: 0xa2230284  sb          $v1, 0x284($s1)
    ctx->pc = 0x16e06cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 644), (uint8_t)GPR_U32(ctx, 3));
label_16e070:
    // 0x16e070: 0x82220284  lb          $v0, 0x284($s1)
    ctx->pc = 0x16e070u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 644)));
    // 0x16e074: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x16E074u;
    {
        const bool branch_taken_0x16e074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e074) {
            ctx->pc = 0x16E078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E074u;
            // 0x16e078: 0x8223025c  lb          $v1, 0x25C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E100u;
            goto label_16e100;
        }
    }
    ctx->pc = 0x16E07Cu;
    // 0x16e07c: 0x8230025c  lb          $s0, 0x25C($s1)
    ctx->pc = 0x16e07cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x16e080: 0x2a02ffff  slti        $v0, $s0, -0x1
    ctx->pc = 0x16e080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x16e084: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16E084u;
    {
        const bool branch_taken_0x16e084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E084u;
        // 0x16e088: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e084) {
            ctx->pc = 0x16E0C8u;
            goto label_16e0c8;
        }
    }
    ctx->pc = 0x16E08Cu;
    // 0x16e08c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e090: 0x24509b70  addiu       $s0, $v0, -0x6490
    ctx->pc = 0x16e090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x16e094: 0xc07ee0c  jal         func_1FB830
    ctx->pc = 0x16E094u;
    SET_GPR_U32(ctx, 31, 0x16E09Cu);
    ctx->pc = 0x16E098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E094u;
    // 0x16e098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB830u, 0x16E094u, 0x16E09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E09Cu;
label_16e09c:
    // 0x16e09c: 0x8223025d  lb          $v1, 0x25D($s1)
    ctx->pc = 0x16e09cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 605)));
    // 0x16e0a0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x16e0a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16e0a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16E0A4u;
    {
        const bool branch_taken_0x16e0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0A4u;
        // 0x16e0a8: 0x9224025d  lbu         $a0, 0x25D($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 605)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e0a4) {
            ctx->pc = 0x16E0C0u;
            goto label_16e0c0;
        }
    }
    ctx->pc = 0x16E0ACu;
    // 0x16e0ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16e0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e0b0: 0xc07ee0c  jal         func_1FB830
    ctx->pc = 0x16E0B0u;
    SET_GPR_U32(ctx, 31, 0x16E0B8u);
    ctx->pc = 0x16E0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E0B0u;
    // 0x16e0b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB830u, 0x16E0B0u, 0x16E0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E0B8u;
label_16e0b8:
    // 0x16e0b8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x16E0B8u;
    {
        const bool branch_taken_0x16e0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0B8u;
        // 0x16e0bc: 0xa222025c  sb          $v0, 0x25C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 604), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e0b8) {
            ctx->pc = 0x16E120u;
            goto label_16e120;
        }
    }
    ctx->pc = 0x16E0C0u;
label_16e0c0:
    // 0x16e0c0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x16E0C0u;
    {
        const bool branch_taken_0x16e0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0C0u;
        // 0x16e0c4: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e0c0) {
            ctx->pc = 0x16E11Cu;
            goto label_16e11c;
        }
    }
    ctx->pc = 0x16E0C8u;
label_16e0c8:
    // 0x16e0c8: 0x8222025d  lb          $v0, 0x25D($s1)
    ctx->pc = 0x16e0c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 605)));
    // 0x16e0cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16e0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16e0d0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x16e0d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x16e0d4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x16E0D4u;
    {
        const bool branch_taken_0x16e0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0D4u;
        // 0x16e0d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e0d4) {
            ctx->pc = 0x16E11Cu;
            goto label_16e11c;
        }
    }
    ctx->pc = 0x16E0DCu;
    // 0x16e0dc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x16e0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x16e0e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e0e4: 0xc07ee0c  jal         func_1FB830
    ctx->pc = 0x16E0E4u;
    SET_GPR_U32(ctx, 31, 0x16E0ECu);
    ctx->pc = 0x16E0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E0E4u;
    // 0x16e0e8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB830u, 0x16E0E4u, 0x16E0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E0ECu;
label_16e0ec:
    // 0x16e0ec: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x16e0ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x16e0f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16E0F0u;
    {
        const bool branch_taken_0x16e0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0F0u;
        // 0x16e0f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e0f0) {
            ctx->pc = 0x16E120u;
            goto label_16e120;
        }
    }
    ctx->pc = 0x16E0F8u;
    // 0x16e0f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16E0F8u;
    {
        const bool branch_taken_0x16e0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0F8u;
        // 0x16e0fc: 0xa222025c  sb          $v0, 0x25C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 604), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e0f8) {
            ctx->pc = 0x16E120u;
            goto label_16e120;
        }
    }
    ctx->pc = 0x16E100u;
label_16e100:
    // 0x16e100: 0x2862ffff  slti        $v0, $v1, -0x1
    ctx->pc = 0x16e100u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x16e104: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16E104u;
    {
        const bool branch_taken_0x16e104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E104u;
        // 0x16e108: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e104) {
            ctx->pc = 0x16E11Cu;
            goto label_16e11c;
        }
    }
    ctx->pc = 0x16E10Cu;
    // 0x16e10c: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x16e10cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x16e110: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16E110u;
    {
        const bool branch_taken_0x16e110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E110u;
        // 0x16e114: 0x26c274a0  addiu       $v0, $s6, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e110) {
            ctx->pc = 0x16E124u;
            goto label_16e124;
        }
    }
    ctx->pc = 0x16E118u;
    // 0x16e118: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16e118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16e11c:
    // 0x16e11c: 0xa222025c  sb          $v0, 0x25C($s1)
    ctx->pc = 0x16e11cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 604), (uint8_t)GPR_U32(ctx, 2));
label_16e120:
    // 0x16e120: 0x26c274a0  addiu       $v0, $s6, 0x74A0
    ctx->pc = 0x16e120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
label_16e124:
    // 0x16e124: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x16e124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x16e128: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x16e128u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x16e12c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x16e12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x16e130: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x16E130u;
    {
        const bool branch_taken_0x16e130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E130u;
        // 0x16e134: 0x26c374a0  addiu       $v1, $s6, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e130) {
            ctx->pc = 0x16E1E0u;
            goto label_16e1e0;
        }
    }
    ctx->pc = 0x16E138u;
    // 0x16e138: 0x8222025c  lb          $v0, 0x25C($s1)
    ctx->pc = 0x16e138u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x16e13c: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x16e13cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x16e140: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x16E140u;
    {
        const bool branch_taken_0x16e140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E140u;
        // 0x16e144: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e140) {
            ctx->pc = 0x16E1E4u;
            goto label_16e1e4;
        }
    }
    ctx->pc = 0x16E148u;
    // 0x16e148: 0x82220284  lb          $v0, 0x284($s1)
    ctx->pc = 0x16e148u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 644)));
    // 0x16e14c: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x16E14Cu;
    {
        const bool branch_taken_0x16e14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E14Cu;
        // 0x16e150: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e14c) {
            ctx->pc = 0x16E1E4u;
            goto label_16e1e4;
        }
    }
    ctx->pc = 0x16E154u;
    // 0x16e154: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x16e154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x16e158: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e15c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16e15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16e160: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x16e160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x16e164: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16e164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e168: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16e168u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e16c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16e16cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e170: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16E170u;
    SET_GPR_U32(ctx, 31, 0x16E178u);
    ctx->pc = 0x16E174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E170u;
    // 0x16e174: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16E170u, 0x16E178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E178u;
label_16e178:
    // 0x16e178: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x16e178u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16e17c: 0x8223025c  lb          $v1, 0x25C($s1)
    ctx->pc = 0x16e17cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x16e180: 0x10720005  beq         $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x16E180u;
    {
        const bool branch_taken_0x16e180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x16E184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E180u;
        // 0x16e184: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e180) {
            ctx->pc = 0x16E198u;
            goto label_16e198;
        }
    }
    ctx->pc = 0x16E188u;
    // 0x16e188: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16E188u;
    {
        const bool branch_taken_0x16e188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E188u;
        // 0x16e18c: 0x26c374a0  addiu       $v1, $s6, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e188) {
            ctx->pc = 0x16E1B4u;
            goto label_16e1b4;
        }
    }
    ctx->pc = 0x16E190u;
    // 0x16e190: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x16E190u;
    {
        const bool branch_taken_0x16e190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E190u;
        // 0x16e194: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e190) {
            ctx->pc = 0x16E1E4u;
            goto label_16e1e4;
        }
    }
    ctx->pc = 0x16E198u;
label_16e198:
    // 0x16e198: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x16e198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x16e19c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e1a0: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x16e1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x16e1a4: 0xc07ee1a  jal         func_1FB868
    ctx->pc = 0x16E1A4u;
    SET_GPR_U32(ctx, 31, 0x16E1ACu);
    ctx->pc = 0x16E1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E1A4u;
    // 0x16e1a8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB868u, 0x16E1A4u, 0x16E1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E1ACu;
label_16e1ac:
    // 0x16e1ac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16E1ACu;
    {
        const bool branch_taken_0x16e1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1ACu;
        // 0x16e1b0: 0x26c374a0  addiu       $v1, $s6, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e1ac) {
            ctx->pc = 0x16E1E0u;
            goto label_16e1e0;
        }
    }
    ctx->pc = 0x16E1B4u;
label_16e1b4:
    // 0x16e1b4: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x16e1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x16e1b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e1b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e1bc: 0x24509b70  addiu       $s0, $v0, -0x6490
    ctx->pc = 0x16e1bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x16e1c0: 0xc07ee0c  jal         func_1FB830
    ctx->pc = 0x16E1C0u;
    SET_GPR_U32(ctx, 31, 0x16E1C8u);
    ctx->pc = 0x16E1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E1C0u;
    // 0x16e1c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB830u, 0x16E1C0u, 0x16E1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E1C8u;
label_16e1c8:
    // 0x16e1c8: 0x10520004  beq         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x16E1C8u;
    {
        const bool branch_taken_0x16e1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x16E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1C8u;
        // 0x16e1cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e1c8) {
            ctx->pc = 0x16E1DCu;
            goto label_16e1dc;
        }
    }
    ctx->pc = 0x16E1D0u;
    // 0x16e1d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e1d4: 0xc07ee1a  jal         func_1FB868
    ctx->pc = 0x16E1D4u;
    SET_GPR_U32(ctx, 31, 0x16E1DCu);
    ctx->pc = 0x16E1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E1D4u;
    // 0x16e1d8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB868u, 0x16E1D4u, 0x16E1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E1DCu;
label_16e1dc:
    // 0x16e1dc: 0x26c374a0  addiu       $v1, $s6, 0x74A0
    ctx->pc = 0x16e1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
label_16e1e0:
    // 0x16e1e0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x16e1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_16e1e4:
    // 0x16e1e4: 0xdc6301a0  ld          $v1, 0x1A0($v1)
    ctx->pc = 0x16e1e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 416)));
    // 0x16e1e8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16e1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16e1ec: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x16E1ECu;
    {
        const bool branch_taken_0x16e1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1ECu;
        // 0x16e1f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e1ec) {
            ctx->pc = 0x16E2F4u;
            goto label_16e2f4;
        }
    }
    ctx->pc = 0x16E1F4u;
    // 0x16e1f4: 0x8223025c  lb          $v1, 0x25C($s1)
    ctx->pc = 0x16e1f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x16e1f8: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x16E1F8u;
    {
        const bool branch_taken_0x16e1f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16E1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1F8u;
        // 0x16e1fc: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e1f8) {
            ctx->pc = 0x16E2E4u;
            goto label_16e2e4;
        }
    }
    ctx->pc = 0x16E200u;
    // 0x16e200: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e204: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16e204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16e208: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x16e208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x16e20c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16e20cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e210: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16e210u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e214: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16e214u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e218: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16E218u;
    SET_GPR_U32(ctx, 31, 0x16E220u);
    ctx->pc = 0x16E21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E218u;
    // 0x16e21c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16E218u, 0x16E220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E220u;
label_16e220:
    // 0x16e220: 0x82230284  lb          $v1, 0x284($s1)
    ctx->pc = 0x16e220u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 644)));
    // 0x16e224: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16e224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e228: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16E228u;
    {
        const bool branch_taken_0x16e228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16E22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E228u;
        // 0x16e22c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e228) {
            ctx->pc = 0x16E244u;
            goto label_16e244;
        }
    }
    ctx->pc = 0x16E230u;
    // 0x16e230: 0x8225025c  lb          $a1, 0x25C($s1)
    ctx->pc = 0x16e230u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x16e234: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x16e234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x16e238: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16e238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e23c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16E23Cu;
    {
        const bool branch_taken_0x16e23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E23Cu;
        // 0x16e240: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e23c) {
            ctx->pc = 0x16E250u;
            goto label_16e250;
        }
    }
    ctx->pc = 0x16E244u;
label_16e244:
    // 0x16e244: 0x8226025c  lb          $a2, 0x25C($s1)
    ctx->pc = 0x16e244u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x16e248: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x16e248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x16e24c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e24cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e250:
    // 0x16e250: 0xc07edb2  jal         func_1FB6C8
    ctx->pc = 0x16E250u;
    SET_GPR_U32(ctx, 31, 0x16E258u);
    ctx->pc = 0x16E254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E250u;
    // 0x16e254: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6C8u, 0x16E250u, 0x16E258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E258u;
label_16e258:
    // 0x16e258: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x16e258u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e25c: 0x3c170060  lui         $s7, 0x60
    ctx->pc = 0x16e25cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)96 << 16));
label_16e260:
    // 0x16e260: 0x26e4ec58  addiu       $a0, $s7, -0x13A8
    ctx->pc = 0x16e260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962264));
    // 0x16e264: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x16e264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x16e268: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x16e268u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16e26c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16E26Cu;
    {
        const bool branch_taken_0x16e26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E26Cu;
        // 0x16e270: 0x26e3ec58  addiu       $v1, $s7, -0x13A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e26c) {
            ctx->pc = 0x16E298u;
            goto label_16e298;
        }
    }
    ctx->pc = 0x16E274u;
    // 0x16e274: 0xc0b2402  jal         func_2C9008
    ctx->pc = 0x16E274u;
    SET_GPR_U32(ctx, 31, 0x16E27Cu);
    ctx->pc = 0x16E278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E274u;
    // 0x16e278: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9008u, 0x16E274u, 0x16E27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E27Cu;
label_16e27c:
    // 0x16e27c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16e27cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e280: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16E280u;
    {
        const bool branch_taken_0x16e280 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E280u;
        // 0x16e284: 0x26e3ec58  addiu       $v1, $s7, -0x13A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e280) {
            ctx->pc = 0x16E298u;
            goto label_16e298;
        }
    }
    ctx->pc = 0x16E288u;
    // 0x16e288: 0x86020018  lh          $v0, 0x18($s0)
    ctx->pc = 0x16e288u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16e28c: 0x5662fff4  bnel        $s3, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x16E28Cu;
    {
        const bool branch_taken_0x16e28c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e28c) {
            ctx->pc = 0x16E290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E28Cu;
            // 0x16e290: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16e260;
        }
    }
    ctx->pc = 0x16E294u;
    // 0x16e294: 0x26e3ec58  addiu       $v1, $s7, -0x13A8
    ctx->pc = 0x16e294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962264));
label_16e298:
    // 0x16e298: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x16e298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x16e29c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x16e29cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16e2a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16E2A0u;
    {
        const bool branch_taken_0x16e2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2A0u;
        // 0x16e2a4: 0x2a420008  slti        $v0, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e2a0) {
            ctx->pc = 0x16E2D0u;
            goto label_16e2d0;
        }
    }
    ctx->pc = 0x16E2A8u;
    // 0x16e2a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16E2A8u;
    {
        const bool branch_taken_0x16e2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2A8u;
        // 0x16e2ac: 0x2642fff9  addiu       $v0, $s2, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e2a8) {
            ctx->pc = 0x16E2C0u;
            goto label_16e2c0;
        }
    }
    ctx->pc = 0x16E2B0u;
    // 0x16e2b0: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x16e2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x16e2b4: 0xa6220260  sh          $v0, 0x260($s1)
    ctx->pc = 0x16e2b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 608), (uint16_t)GPR_U32(ctx, 2));
    // 0x16e2b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16E2B8u;
    {
        const bool branch_taken_0x16e2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2B8u;
        // 0x16e2bc: 0xa623025e  sh          $v1, 0x25E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 606), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e2b8) {
            ctx->pc = 0x16E2D8u;
            goto label_16e2d8;
        }
    }
    ctx->pc = 0x16E2C0u;
label_16e2c0:
    // 0x16e2c0: 0x52400004  beql        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x16E2C0u;
    {
        const bool branch_taken_0x16e2c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e2c0) {
            ctx->pc = 0x16E2C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E2C0u;
            // 0x16e2c4: 0xa620025e  sh          $zero, 0x25E($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 606), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E2D4u;
            goto label_16e2d4;
        }
    }
    ctx->pc = 0x16E2C8u;
    // 0x16e2c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16E2C8u;
    {
        const bool branch_taken_0x16e2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2C8u;
        // 0x16e2cc: 0xa632025e  sh          $s2, 0x25E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 606), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e2c8) {
            ctx->pc = 0x16E2D4u;
            goto label_16e2d4;
        }
    }
    ctx->pc = 0x16E2D0u;
label_16e2d0:
    // 0x16e2d0: 0xa620025e  sh          $zero, 0x25E($s1)
    ctx->pc = 0x16e2d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 606), (uint16_t)GPR_U32(ctx, 0));
label_16e2d4:
    // 0x16e2d4: 0xa6200260  sh          $zero, 0x260($s1)
    ctx->pc = 0x16e2d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 608), (uint16_t)GPR_U32(ctx, 0));
label_16e2d8:
    // 0x16e2d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e2dc: 0x100002a3  b           . + 4 + (0x2A3 << 2)
    ctx->pc = 0x16E2DCu;
    {
        const bool branch_taken_0x16e2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2DCu;
        // 0x16e2e0: 0xa222005a  sb          $v0, 0x5A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e2dc) {
            ctx->pc = 0x16ED6Cu;
            goto label_16ed6c;
        }
    }
    ctx->pc = 0x16E2E4u;
label_16e2e4:
    // 0x16e2e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e2e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e2e8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16e2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16e2ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16E2ECu;
    {
        const bool branch_taken_0x16e2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2ECu;
        // 0x16e2f0: 0x2406015e  addiu       $a2, $zero, 0x15E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e2ec) {
            ctx->pc = 0x16E310u;
            goto label_16e310;
        }
    }
    ctx->pc = 0x16E2F4u;
label_16e2f4:
    // 0x16e2f4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x16e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x16e2f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16e2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16e2fc: 0x1040029b  beqz        $v0, . + 4 + (0x29B << 2)
    ctx->pc = 0x16E2FCu;
    {
        const bool branch_taken_0x16e2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2FCu;
        // 0x16e300: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e2fc) {
            ctx->pc = 0x16ED6Cu;
            goto label_16ed6c;
        }
    }
    ctx->pc = 0x16E304u;
    // 0x16e304: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e308: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16e308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16e30c: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x16e30cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
label_16e310:
    // 0x16e310: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16e310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e314: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16e314u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e318: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16e318u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e31c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16E31Cu;
    SET_GPR_U32(ctx, 31, 0x16E324u);
    ctx->pc = 0x16E320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E31Cu;
    // 0x16e320: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16E31Cu, 0x16E324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E324u;
label_16e324:
    // 0x16e324: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x16e324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16e328: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16e328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16e32c: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x16e32cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
    // 0x16e330: 0x1000028e  b           . + 4 + (0x28E << 2)
    ctx->pc = 0x16E330u;
    {
        const bool branch_taken_0x16e330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E330u;
        // 0x16e334: 0xa222005a  sb          $v0, 0x5A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e330) {
            ctx->pc = 0x16ED6Cu;
            goto label_16ed6c;
        }
    }
    ctx->pc = 0x16E338u;
label_16e338:
    // 0x16e338: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x16e338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x16e33c: 0x34038800  ori         $v1, $zero, 0x8800
    ctx->pc = 0x16e33cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x16e340: 0x31e78  dsll        $v1, $v1, 25
    ctx->pc = 0x16e340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 25);
    // 0x16e344: 0x244474a0  addiu       $a0, $v0, 0x74A0
    ctx->pc = 0x16e344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x16e348: 0xdc8401a0  ld          $a0, 0x1A0($a0)
    ctx->pc = 0x16e348u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 416)));
    // 0x16e34c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16e34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16e350: 0x106000e0  beqz        $v1, . + 4 + (0xE0 << 2)
    ctx->pc = 0x16E350u;
    {
        const bool branch_taken_0x16e350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E350u;
        // 0x16e354: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e350) {
            ctx->pc = 0x16E6D4u;
            goto label_16e6d4;
        }
    }
    ctx->pc = 0x16E358u;
    // 0x16e358: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x16e358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x16e35c: 0x21678  dsll        $v0, $v0, 25
    ctx->pc = 0x16e35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 25);
    // 0x16e360: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x16e360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x16e364: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16E364u;
    {
        const bool branch_taken_0x16e364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E364u;
        // 0x16e368: 0x92220262  lbu         $v0, 0x262($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 610)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e364) {
            ctx->pc = 0x16E374u;
            goto label_16e374;
        }
    }
    ctx->pc = 0x16E36Cu;
    // 0x16e36c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16E36Cu;
    {
        const bool branch_taken_0x16e36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E36Cu;
        // 0x16e370: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e36c) {
            ctx->pc = 0x16E378u;
            goto label_16e378;
        }
    }
    ctx->pc = 0x16E374u;
label_16e374:
    // 0x16e374: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16e374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_16e378:
    // 0x16e378: 0xa2220262  sb          $v0, 0x262($s1)
    ctx->pc = 0x16e378u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 610), (uint8_t)GPR_U32(ctx, 2));
    // 0x16e37c: 0x82220262  lb          $v0, 0x262($s1)
    ctx->pc = 0x16e37cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 610)));
    // 0x16e380: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16E380u;
    {
        const bool branch_taken_0x16e380 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x16E384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E380u;
        // 0x16e384: 0x92240262  lbu         $a0, 0x262($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 610)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e380) {
            ctx->pc = 0x16E39Cu;
            goto label_16e39c;
        }
    }
    ctx->pc = 0x16E388u;
    // 0x16e388: 0x2842000b  slti        $v0, $v0, 0xB
    ctx->pc = 0x16e388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x16e38c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16E38Cu;
    {
        const bool branch_taken_0x16e38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E38Cu;
        // 0x16e390: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e38c) {
            ctx->pc = 0x16E3A0u;
            goto label_16e3a0;
        }
    }
    ctx->pc = 0x16E394u;
    // 0x16e394: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16E394u;
    {
        const bool branch_taken_0x16e394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E394u;
        // 0x16e398: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e394) {
            ctx->pc = 0x16E3A0u;
            goto label_16e3a0;
        }
    }
    ctx->pc = 0x16E39Cu;
label_16e39c:
    // 0x16e39c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x16e39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_16e3a0:
    // 0x16e3a0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x16e3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x16e3a4: 0xa2230262  sb          $v1, 0x262($s1)
    ctx->pc = 0x16e3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 610), (uint8_t)GPR_U32(ctx, 3));
    // 0x16e3a8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16e3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16e3ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e3b0: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x16e3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x16e3b4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16e3b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e3b8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16e3b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e3bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16e3bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e3c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x16e3c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e3c4: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16E3C4u;
    SET_GPR_U32(ctx, 31, 0x16E3CCu);
    ctx->pc = 0x16E3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E3C4u;
    // 0x16e3c8: 0x3c170060  lui         $s7, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)96 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16E3C4u, 0x16E3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E3CCu;
label_16e3cc:
    // 0x16e3cc: 0x82230262  lb          $v1, 0x262($s1)
    ctx->pc = 0x16e3ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 610)));
    // 0x16e3d0: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x16e3d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x16e3d4: 0x104000bb  beqz        $v0, . + 4 + (0xBB << 2)
    ctx->pc = 0x16E3D4u;
    {
        const bool branch_taken_0x16e3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E3D4u;
        // 0x16e3d8: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e3d4) {
            ctx->pc = 0x16E6C4u;
            goto label_16e6c4;
        }
    }
    ctx->pc = 0x16E3DCu;
    // 0x16e3dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16e3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16e3e0: 0x2442ff00  addiu       $v0, $v0, -0x100
    ctx->pc = 0x16e3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967040));
    // 0x16e3e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16e3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16e3e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16e3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e3ec: 0x800008  jr          $a0
    ctx->pc = 0x16E3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E3F4u: goto label_16e3f4;
            case 0x16E424u: goto label_16e424;
            case 0x16E454u: goto label_16e454;
            case 0x16E484u: goto label_16e484;
            case 0x16E4CCu: goto label_16e4cc;
            case 0x16E514u: goto label_16e514;
            case 0x16E55Cu: goto label_16e55c;
            case 0x16E5A4u: goto label_16e5a4;
            case 0x16E5ECu: goto label_16e5ec;
            case 0x16E634u: goto label_16e634;
            case 0x16E67Cu: goto label_16e67c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E3ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16E3F4u;
label_16e3f4:
    // 0x16e3f4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x16e3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x16e3f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e3fc: 0x2444ec58  addiu       $a0, $v0, -0x13A8
    ctx->pc = 0x16e3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x16e400: 0xc0b2428  jal         func_2C90A0
    ctx->pc = 0x16E400u;
    SET_GPR_U32(ctx, 31, 0x16E408u);
    ctx->pc = 0x16E404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E400u;
    // 0x16e404: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C90A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C90A0u, 0x16E400u, 0x16E408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E408u;
label_16e408:
    // 0x16e408: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x16e408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x16e40c: 0x240230f9  addiu       $v0, $zero, 0x30F9
    ctx->pc = 0x16e40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12537));
    // 0x16e410: 0xa4620090  sh          $v0, 0x90($v1)
    ctx->pc = 0x16e410u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x16e414: 0x8e240214  lw          $a0, 0x214($s1)
    ctx->pc = 0x16e414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x16e418: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x16e418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x16e41c: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x16E41Cu;
    {
        const bool branch_taken_0x16e41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E41Cu;
        // 0x16e420: 0xc4400028  lwc1        $f0, 0x28($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e41c) {
            ctx->pc = 0x16E6C0u;
            goto label_16e6c0;
        }
    }
    ctx->pc = 0x16E424u;
label_16e424:
    // 0x16e424: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x16e424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x16e428: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x16e428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16e42c: 0x2444ec58  addiu       $a0, $v0, -0x13A8
    ctx->pc = 0x16e42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x16e430: 0xc0b2428  jal         func_2C90A0
    ctx->pc = 0x16E430u;
    SET_GPR_U32(ctx, 31, 0x16E438u);
    ctx->pc = 0x16E434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E430u;
    // 0x16e434: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C90A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C90A0u, 0x16E430u, 0x16E438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E438u;
label_16e438:
    // 0x16e438: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x16e438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x16e43c: 0x240230fa  addiu       $v0, $zero, 0x30FA
    ctx->pc = 0x16e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12538));
    // 0x16e440: 0xa4620090  sh          $v0, 0x90($v1)
    ctx->pc = 0x16e440u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x16e444: 0x8e240214  lw          $a0, 0x214($s1)
    ctx->pc = 0x16e444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x16e448: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x16e448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x16e44c: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x16E44Cu;
    {
        const bool branch_taken_0x16e44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E44Cu;
        // 0x16e450: 0xc4400028  lwc1        $f0, 0x28($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e44c) {
            ctx->pc = 0x16E6C0u;
            goto label_16e6c0;
        }
    }
    ctx->pc = 0x16E454u;
label_16e454:
    // 0x16e454: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x16e454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x16e458: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x16e458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16e45c: 0x2444ec58  addiu       $a0, $v0, -0x13A8
    ctx->pc = 0x16e45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x16e460: 0xc0b2428  jal         func_2C90A0
    ctx->pc = 0x16E460u;
    SET_GPR_U32(ctx, 31, 0x16E468u);
    ctx->pc = 0x16E464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E460u;
    // 0x16e464: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C90A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C90A0u, 0x16E460u, 0x16E468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E468u;
label_16e468:
    // 0x16e468: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x16e468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x16e46c: 0x240230fb  addiu       $v0, $zero, 0x30FB
    ctx->pc = 0x16e46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12539));
    // 0x16e470: 0xa4620090  sh          $v0, 0x90($v1)
    ctx->pc = 0x16e470u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x16e474: 0x8e240214  lw          $a0, 0x214($s1)
    ctx->pc = 0x16e474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x16e478: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x16e478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x16e47c: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x16E47Cu;
    {
        const bool branch_taken_0x16e47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E47Cu;
        // 0x16e480: 0xc4400028  lwc1        $f0, 0x28($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e47c) {
            ctx->pc = 0x16E6C0u;
            goto label_16e6c0;
        }
    }
    ctx->pc = 0x16E484u;
label_16e484:
    // 0x16e484: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x16e484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x16e488: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x16e488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16e48c: 0x2444ec58  addiu       $a0, $v0, -0x13A8
    ctx->pc = 0x16e48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x16e490: 0xc0b2428  jal         func_2C90A0
    ctx->pc = 0x16E490u;
    SET_GPR_U32(ctx, 31, 0x16E498u);
    ctx->pc = 0x16E494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E490u;
    // 0x16e494: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C90A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C90A0u, 0x16E490u, 0x16E498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E498u;
label_16e498:
    // 0x16e498: 0x8e240214  lw          $a0, 0x214($s1)
    ctx->pc = 0x16e498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x16e49c: 0x240230c6  addiu       $v0, $zero, 0x30C6
    ctx->pc = 0x16e49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12486));
    // 0x16e4a0: 0x26c574a0  addiu       $a1, $s6, 0x74A0
    ctx->pc = 0x16e4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
    // 0x16e4a4: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x16e4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16e4a8: 0xa4820090  sh          $v0, 0x90($a0)
    ctx->pc = 0x16e4a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x16e4ac: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x16e4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x16e4b0: 0x2463f250  addiu       $v1, $v1, -0xDB0
    ctx->pc = 0x16e4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963792));
    // 0x16e4b4: 0x8ca2056c  lw          $v0, 0x56C($a1)
    ctx->pc = 0x16e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1388)));
    // 0x16e4b8: 0x8e240214  lw          $a0, 0x214($s1)
    ctx->pc = 0x16e4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x16e4bc: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x16e4bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16e4c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16e4c4: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x16E4C4u;
    {
        const bool branch_taken_0x16e4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E4C4u;
        // 0x16e4c8: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e4c4) {
            ctx->pc = 0x16E6C0u;
            goto label_16e6c0;
        }
    }
    ctx->pc = 0x16E4CCu;
label_16e4cc:
    // 0x16e4cc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x16e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x16e4d0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x16e4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16e4d4: 0x2444ec58  addiu       $a0, $v0, -0x13A8
    ctx->pc = 0x16e4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x16e4d8: 0xc0b2428  jal         func_2C90A0
    ctx->pc = 0x16E4D8u;
    SET_GPR_U32(ctx, 31, 0x16E4E0u);
    ctx->pc = 0x16E4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E4D8u;
    // 0x16e4dc: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C90A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C90A0u, 0x16E4D8u, 0x16E4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E4E0u;
label_16e4e0:
    // 0x16e4e0: 0x8e240214  lw          $a0, 0x214($s1)
    ctx->pc = 0x16e4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x16e4e4: 0x240230c7  addiu       $v0, $zero, 0x30C7
    ctx->pc = 0x16e4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12487));
    // 0x16e4e8: 0x26c574a0  addiu       $a1, $s6, 0x74A0
    ctx->pc = 0x16e4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
    // 0x16e4ec: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x16e4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16e4f0: 0xa4820090  sh          $v0, 0x90($a0)
    ctx->pc = 0x16e4f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x16e4f4: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x16e4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x16e4f8: 0x2463f250  addiu       $v1, $v1, -0xDB0
    ctx->pc = 0x16e4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963792));
    // 0x16e4fc: 0x8ca2056c  lw          $v0, 0x56C($a1)
    ctx->pc = 0x16e4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1388)));
    // 0x16e500: 0x8e240214  lw          $a0, 0x214($s1)
    ctx->pc = 0x16e500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x16e504: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x16e504u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16e508: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16e508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16e50c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x16E50Cu;
    {
        const bool branch_taken_0x16e50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E50Cu;
        // 0x16e510: 0xc4600004  lwc1        $f0, 0x4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e50c) {
            ctx->pc = 0x16E6C0u;
            goto label_16e6c0;
        }
    }
    ctx->pc = 0x16E514u;
label_16e514:
    // 0x16e514: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x16e514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x16e518: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x16e518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16e51c: 0x2444ec58  addiu       $a0, $v0, -0x13A8
    ctx->pc = 0x16e51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x16e520: 0xc0b2428  jal         func_2C90A0
    ctx->pc = 0x16E520u;
    SET_GPR_U32(ctx, 31, 0x16E528u);
    ctx->pc = 0x16E524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E520u;
    // 0x16e524: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C90A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C90A0u, 0x16E520u, 0x16E528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E528u;
label_16e528:
    // 0x16e528: 0x8e240214  lw          $a0, 0x214($s1)
    ctx->pc = 0x16e528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x16e52c: 0x240230c8  addiu       $v0, $zero, 0x30C8
    ctx->pc = 0x16e52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12488));
    // 0x16e530: 0x26c574a0  addiu       $a1, $s6, 0x74A0
    ctx->pc = 0x16e530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
    // 0x16e534: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x16e534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16e538: 0xa4820090  sh          $v0, 0x90($a0)
    ctx->pc = 0x16e538u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x16e53c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x16e53cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x16e540: 0x2463f250  addiu       $v1, $v1, -0xDB0
    ctx->pc = 0x16e540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963792));
    // 0x16e544: 0x8ca2056c  lw          $v0, 0x56C($a1)
    ctx->pc = 0x16e544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1388)));
    // 0x16e548: 0x8e240214  lw          $a0, 0x214($s1)
    ctx->pc = 0x16e548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x16e54c: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x16e54cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16e550: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16e550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16e554: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x16E554u;
    {
        const bool branch_taken_0x16e554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E554u;
        // 0x16e558: 0xc4600008  lwc1        $f0, 0x8($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e554) {
            ctx->pc = 0x16E6C0u;
            goto label_16e6c0;
        }
    }
    ctx->pc = 0x16E55Cu;
label_16e55c:
    // 0x16e55c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x16e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x16e560: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16e560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16e564: 0x2444ec58  addiu       $a0, $v0, -0x13A8
    ctx->pc = 0x16e564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x16e568: 0xc0b2428  jal         func_2C90A0
    ctx->pc = 0x16E568u;
    SET_GPR_U32(ctx, 31, 0x16E570u);
    ctx->pc = 0x16E56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E568u;
    // 0x16e56c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C90A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C90A0u, 0x16E568u, 0x16E570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E570u;
label_16e570:
    // 0x16e570: 0x8e240214  lw          $a0, 0x214($s1)
    ctx->pc = 0x16e570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x16e574: 0x240230c9  addiu       $v0, $zero, 0x30C9
    ctx->pc = 0x16e574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12489));
    // 0x16e578: 0x26c574a0  addiu       $a1, $s6, 0x74A0
    ctx->pc = 0x16e578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
    // 0x16e57c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x16e57cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16e580: 0xa4820090  sh          $v0, 0x90($a0)
    ctx->pc = 0x16e580u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x16e584: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x16e584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x16e588: 0x2463f250  addiu       $v1, $v1, -0xDB0
    ctx->pc = 0x16e588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963792));
    // 0x16e58c: 0x8ca2056c  lw          $v0, 0x56C($a1)
    ctx->pc = 0x16e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1388)));
    // 0x16e590: 0x8e240214  lw          $a0, 0x214($s1)
    ctx->pc = 0x16e590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x16e594: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x16e594u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16e598: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16e598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16e59c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x16E59Cu;
    {
        const bool branch_taken_0x16e59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E59Cu;
        // 0x16e5a0: 0xc460000c  lwc1        $f0, 0xC($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e59c) {
            ctx->pc = 0x16E6C0u;
            goto label_16e6c0;
        }
    }
    ctx->pc = 0x16E5A4u;
label_16e5a4:
    // 0x16e5a4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x16e5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x16e5a8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x16e5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x16e5ac: 0x2444ec58  addiu       $a0, $v0, -0x13A8
    ctx->pc = 0x16e5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x16e5b0: 0xc0b2428  jal         func_2C90A0
    ctx->pc = 0x16E5B0u;
    SET_GPR_U32(ctx, 31, 0x16E5B8u);
    ctx->pc = 0x16E5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E5B0u;
    // 0x16e5b4: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C90A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C90A0u, 0x16E5B0u, 0x16E5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E5B8u;
label_16e5b8:
    // 0x16e5b8: 0x8e240214  lw          $a0, 0x214($s1)
    ctx->pc = 0x16e5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x16e5bc: 0x240230cc  addiu       $v0, $zero, 0x30CC
    ctx->pc = 0x16e5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12492));
    // 0x16e5c0: 0x26c574a0  addiu       $a1, $s6, 0x74A0
    ctx->pc = 0x16e5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
    // 0x16e5c4: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x16e5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16e5c8: 0xa4820090  sh          $v0, 0x90($a0)
    ctx->pc = 0x16e5c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x16e5cc: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x16e5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x16e5d0: 0x2463f250  addiu       $v1, $v1, -0xDB0
    ctx->pc = 0x16e5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963792));
    // 0x16e5d4: 0x8ca2056c  lw          $v0, 0x56C($a1)
    ctx->pc = 0x16e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1388)));
    // 0x16e5d8: 0x8e240214  lw          $a0, 0x214($s1)
    ctx->pc = 0x16e5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x16e5dc: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x16e5dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16e5e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16e5e4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x16E5E4u;
    {
        const bool branch_taken_0x16e5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5E4u;
        // 0x16e5e8: 0xc4600018  lwc1        $f0, 0x18($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e5e4) {
            ctx->pc = 0x16E6C0u;
            goto label_16e6c0;
        }
    }
    ctx->pc = 0x16E5ECu;
label_16e5ec:
    // 0x16e5ec: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x16e5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x16e5f0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x16e5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x16e5f4: 0x2444ec58  addiu       $a0, $v0, -0x13A8
    ctx->pc = 0x16e5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x16e5f8: 0xc0b2428  jal         func_2C90A0
    ctx->pc = 0x16E5F8u;
    SET_GPR_U32(ctx, 31, 0x16E600u);
    ctx->pc = 0x16E5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E5F8u;
    // 0x16e5fc: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C90A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C90A0u, 0x16E5F8u, 0x16E600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E600u;
label_16e600:
    // 0x16e600: 0x8e240214  lw          $a0, 0x214($s1)
    ctx->pc = 0x16e600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x16e604: 0x240230cd  addiu       $v0, $zero, 0x30CD
    ctx->pc = 0x16e604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12493));
    // 0x16e608: 0x26c574a0  addiu       $a1, $s6, 0x74A0
    ctx->pc = 0x16e608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
    // 0x16e60c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x16e60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16e610: 0xa4820090  sh          $v0, 0x90($a0)
    ctx->pc = 0x16e610u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x16e614: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x16e614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x16e618: 0x2463f250  addiu       $v1, $v1, -0xDB0
    ctx->pc = 0x16e618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963792));
    // 0x16e61c: 0x8ca2056c  lw          $v0, 0x56C($a1)
    ctx->pc = 0x16e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1388)));
    // 0x16e620: 0x8e240214  lw          $a0, 0x214($s1)
    ctx->pc = 0x16e620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x16e624: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x16e624u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16e628: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16e628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16e62c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x16E62Cu;
    {
        const bool branch_taken_0x16e62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E62Cu;
        // 0x16e630: 0xc460001c  lwc1        $f0, 0x1C($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e62c) {
            ctx->pc = 0x16E6C0u;
            goto label_16e6c0;
        }
    }
    ctx->pc = 0x16E634u;
label_16e634:
    // 0x16e634: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x16e634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x16e638: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x16e638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x16e63c: 0x2444ec58  addiu       $a0, $v0, -0x13A8
    ctx->pc = 0x16e63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x16e640: 0xc0b2428  jal         func_2C90A0
    ctx->pc = 0x16E640u;
    SET_GPR_U32(ctx, 31, 0x16E648u);
    ctx->pc = 0x16E644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E640u;
    // 0x16e644: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C90A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C90A0u, 0x16E640u, 0x16E648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E648u;
label_16e648:
    // 0x16e648: 0x8e240214  lw          $a0, 0x214($s1)
    ctx->pc = 0x16e648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x16e64c: 0x240230ce  addiu       $v0, $zero, 0x30CE
    ctx->pc = 0x16e64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12494));
    // 0x16e650: 0x26c574a0  addiu       $a1, $s6, 0x74A0
    ctx->pc = 0x16e650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
    // 0x16e654: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x16e654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16e658: 0xa4820090  sh          $v0, 0x90($a0)
    ctx->pc = 0x16e658u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x16e65c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x16e65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x16e660: 0x2463f250  addiu       $v1, $v1, -0xDB0
    ctx->pc = 0x16e660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963792));
    // 0x16e664: 0x8ca2056c  lw          $v0, 0x56C($a1)
    ctx->pc = 0x16e664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1388)));
    // 0x16e668: 0x8e240214  lw          $a0, 0x214($s1)
    ctx->pc = 0x16e668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x16e66c: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x16e66cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16e670: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16e670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16e674: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x16E674u;
    {
        const bool branch_taken_0x16e674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E674u;
        // 0x16e678: 0xc4600020  lwc1        $f0, 0x20($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e674) {
            ctx->pc = 0x16E6C0u;
            goto label_16e6c0;
        }
    }
    ctx->pc = 0x16E67Cu;
label_16e67c:
    // 0x16e67c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x16e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x16e680: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x16e680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x16e684: 0x2444ec58  addiu       $a0, $v0, -0x13A8
    ctx->pc = 0x16e684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x16e688: 0xc0b2428  jal         func_2C90A0
    ctx->pc = 0x16E688u;
    SET_GPR_U32(ctx, 31, 0x16E690u);
    ctx->pc = 0x16E68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E688u;
    // 0x16e68c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C90A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C90A0u, 0x16E688u, 0x16E690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E690u;
label_16e690:
    // 0x16e690: 0x8e240214  lw          $a0, 0x214($s1)
    ctx->pc = 0x16e690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x16e694: 0x240230cf  addiu       $v0, $zero, 0x30CF
    ctx->pc = 0x16e694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12495));
    // 0x16e698: 0x26c574a0  addiu       $a1, $s6, 0x74A0
    ctx->pc = 0x16e698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
    // 0x16e69c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x16e69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16e6a0: 0xa4820090  sh          $v0, 0x90($a0)
    ctx->pc = 0x16e6a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x16e6a4: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x16e6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x16e6a8: 0x2463f250  addiu       $v1, $v1, -0xDB0
    ctx->pc = 0x16e6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963792));
    // 0x16e6ac: 0x8ca2056c  lw          $v0, 0x56C($a1)
    ctx->pc = 0x16e6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1388)));
    // 0x16e6b0: 0x8e240214  lw          $a0, 0x214($s1)
    ctx->pc = 0x16e6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x16e6b4: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x16e6b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16e6b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16e6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16e6bc: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x16e6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16e6c0:
    // 0x16e6c0: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x16e6c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
label_16e6c4:
    // 0x16e6c4: 0xc0b2654  jal         func_2C9950
    ctx->pc = 0x16E6C4u;
    SET_GPR_U32(ctx, 31, 0x16E6CCu);
    ctx->pc = 0x16E6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E6C4u;
    // 0x16e6c8: 0x26e4ec58  addiu       $a0, $s7, -0x13A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9950u, 0x16E6C4u, 0x16E6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E6CCu;
label_16e6cc:
    // 0x16e6cc: 0xa620025e  sh          $zero, 0x25E($s1)
    ctx->pc = 0x16e6ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 606), (uint16_t)GPR_U32(ctx, 0));
    // 0x16e6d0: 0xa6200260  sh          $zero, 0x260($s1)
    ctx->pc = 0x16e6d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 608), (uint16_t)GPR_U32(ctx, 0));
label_16e6d4:
    // 0x16e6d4: 0x26c274a0  addiu       $v0, $s6, 0x74A0
    ctx->pc = 0x16e6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
    // 0x16e6d8: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x16e6d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x16e6dc: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x16e6dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x16e6e0: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x16e6e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x16e6e4: 0x422b8  dsll        $a0, $a0, 10
    ctx->pc = 0x16e6e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 10);
    // 0x16e6e8: 0xdc4301b0  ld          $v1, 0x1B0($v0)
    ctx->pc = 0x16e6e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x16e6ec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x16e6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x16e6f0: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x16E6F0u;
    {
        const bool branch_taken_0x16e6f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E6F0u;
        // 0x16e6f4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e6f0) {
            ctx->pc = 0x16E788u;
            goto label_16e788;
        }
    }
    ctx->pc = 0x16E6F8u;
    // 0x16e6f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e6fc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16e6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16e700: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x16e700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x16e704: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16e704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e708: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16e708u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e70c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16e70cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e710: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16E710u;
    SET_GPR_U32(ctx, 31, 0x16E718u);
    ctx->pc = 0x16E714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E710u;
    // 0x16e714: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16E710u, 0x16E718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E718u;
label_16e718:
    // 0x16e718: 0x9622025e  lhu         $v0, 0x25E($s1)
    ctx->pc = 0x16e718u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 606)));
    // 0x16e71c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16e71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16e720: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x16e720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16e724: 0xa622025e  sh          $v0, 0x25E($s1)
    ctx->pc = 0x16e724u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 606), (uint16_t)GPR_U32(ctx, 2));
    // 0x16e728: 0x32403  sra         $a0, $v1, 16
    ctx->pc = 0x16e728u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 16));
    // 0x16e72c: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x16e72cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x16e730: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16E730u;
    {
        const bool branch_taken_0x16e730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E730u;
        // 0x16e734: 0x3c170060  lui         $s7, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e730) {
            ctx->pc = 0x16E74Cu;
            goto label_16e74c;
        }
    }
    ctx->pc = 0x16E738u;
    // 0x16e738: 0x26e3ec58  addiu       $v1, $s7, -0x13A8
    ctx->pc = 0x16e738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962264));
    // 0x16e73c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x16e73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x16e740: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x16e740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16e744: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16E744u;
    {
        const bool branch_taken_0x16e744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E744u;
        // 0x16e748: 0x26c274a0  addiu       $v0, $s6, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e744) {
            ctx->pc = 0x16E788u;
            goto label_16e788;
        }
    }
    ctx->pc = 0x16E74Cu;
label_16e74c:
    // 0x16e74c: 0x96220260  lhu         $v0, 0x260($s1)
    ctx->pc = 0x16e74cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x16e750: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x16e750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16e754: 0xa623025e  sh          $v1, 0x25E($s1)
    ctx->pc = 0x16e754u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 606), (uint16_t)GPR_U32(ctx, 3));
    // 0x16e758: 0x26e4ec58  addiu       $a0, $s7, -0x13A8
    ctx->pc = 0x16e758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962264));
    // 0x16e75c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16e760: 0xa6220260  sh          $v0, 0x260($s1)
    ctx->pc = 0x16e760u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 608), (uint16_t)GPR_U32(ctx, 2));
    // 0x16e764: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16e764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16e768: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x16e768u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x16e76c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x16e76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x16e770: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x16e770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x16e774: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x16e774u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16e778: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16E778u;
    {
        const bool branch_taken_0x16e778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E778u;
        // 0x16e77c: 0x26c274a0  addiu       $v0, $s6, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e778) {
            ctx->pc = 0x16E788u;
            goto label_16e788;
        }
    }
    ctx->pc = 0x16E780u;
    // 0x16e780: 0xa620025e  sh          $zero, 0x25E($s1)
    ctx->pc = 0x16e780u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 606), (uint16_t)GPR_U32(ctx, 0));
    // 0x16e784: 0xa6200260  sh          $zero, 0x260($s1)
    ctx->pc = 0x16e784u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 608), (uint16_t)GPR_U32(ctx, 0));
label_16e788:
    // 0x16e788: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x16e788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x16e78c: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x16e78cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x16e790: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x16e790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x16e794: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x16e794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x16e798: 0xdc4301b0  ld          $v1, 0x1B0($v0)
    ctx->pc = 0x16e798u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x16e79c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x16e79cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x16e7a0: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x16E7A0u;
    {
        const bool branch_taken_0x16e7a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E7A0u;
        // 0x16e7a4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e7a0) {
            ctx->pc = 0x16E844u;
            goto label_16e844;
        }
    }
    ctx->pc = 0x16E7A8u;
    // 0x16e7a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e7ac: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16e7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16e7b0: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x16e7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x16e7b4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16e7b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e7b8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16e7b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e7bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16e7bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e7c0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16E7C0u;
    SET_GPR_U32(ctx, 31, 0x16E7C8u);
    ctx->pc = 0x16E7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E7C0u;
    // 0x16e7c4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16E7C0u, 0x16E7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E7C8u;
label_16e7c8:
    // 0x16e7c8: 0x9623025e  lhu         $v1, 0x25E($s1)
    ctx->pc = 0x16e7c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 606)));
    // 0x16e7cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16e7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16e7d0: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x16e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x16e7d4: 0x441001b  bgez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x16E7D4u;
    {
        const bool branch_taken_0x16e7d4 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x16E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E7D4u;
        // 0x16e7d8: 0xa623025e  sh          $v1, 0x25E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 606), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e7d4) {
            ctx->pc = 0x16E844u;
            goto label_16e844;
        }
    }
    ctx->pc = 0x16E7DCu;
    // 0x16e7dc: 0x96220260  lhu         $v0, 0x260($s1)
    ctx->pc = 0x16e7dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x16e7e0: 0xa620025e  sh          $zero, 0x25E($s1)
    ctx->pc = 0x16e7e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 606), (uint16_t)GPR_U32(ctx, 0));
    // 0x16e7e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16e7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16e7e8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x16e7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16e7ec: 0x4610015  bgez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x16E7ECu;
    {
        const bool branch_taken_0x16e7ec = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x16E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E7ECu;
        // 0x16e7f0: 0xa6220260  sh          $v0, 0x260($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 608), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e7ec) {
            ctx->pc = 0x16E844u;
            goto label_16e844;
        }
    }
    ctx->pc = 0x16E7F4u;
    // 0x16e7f4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x16e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16e7f8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x16e7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x16e7fc: 0xa622025e  sh          $v0, 0x25E($s1)
    ctx->pc = 0x16e7fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 606), (uint16_t)GPR_U32(ctx, 2));
    // 0x16e800: 0x2463ec58  addiu       $v1, $v1, -0x13A8
    ctx->pc = 0x16e800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962264));
    // 0x16e804: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x16e804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16e808: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x16e808u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FEC68u));
    // 0x16e80c: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x16e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x16e810: 0xa6220260  sh          $v0, 0x260($s1)
    ctx->pc = 0x16e810u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 608), (uint16_t)GPR_U32(ctx, 2));
    // 0x16e814: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x16e814u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FEC68u));
    // 0x16e818: 0x82202b  sltu        $a0, $a0, $v0
    ctx->pc = 0x16e818u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16e81c: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x16E81Cu;
    {
        const bool branch_taken_0x16e81c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e81c) {
            ctx->pc = 0x16E820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E81Cu;
            // 0x16e820: 0x86220260  lh          $v0, 0x260($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E830u;
            goto label_16e830;
        }
    }
    ctx->pc = 0x16E824u;
    // 0x16e824: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16e824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16e828: 0xa622025e  sh          $v0, 0x25E($s1)
    ctx->pc = 0x16e828u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 606), (uint16_t)GPR_U32(ctx, 2));
    // 0x16e82c: 0x86220260  lh          $v0, 0x260($s1)
    ctx->pc = 0x16e82cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 608)));
label_16e830:
    // 0x16e830: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x16E830u;
    {
        const bool branch_taken_0x16e830 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x16e830) {
            ctx->pc = 0x16E834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E830u;
            // 0x16e834: 0xa6200260  sh          $zero, 0x260($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 608), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E838u;
            goto label_16e838;
        }
    }
    ctx->pc = 0x16E838u;
label_16e838:
    // 0x16e838: 0x8622025e  lh          $v0, 0x25E($s1)
    ctx->pc = 0x16e838u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 606)));
    // 0x16e83c: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x16E83Cu;
    {
        const bool branch_taken_0x16e83c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x16e83c) {
            ctx->pc = 0x16E840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E83Cu;
            // 0x16e840: 0xa620025e  sh          $zero, 0x25E($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 606), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E844u;
            goto label_16e844;
        }
    }
    ctx->pc = 0x16E844u;
label_16e844:
    // 0x16e844: 0x26c274a0  addiu       $v0, $s6, 0x74A0
    ctx->pc = 0x16e844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
    // 0x16e848: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x16e848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x16e84c: 0x42678  dsll        $a0, $a0, 25
    ctx->pc = 0x16e84cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 25);
    // 0x16e850: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x16e850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x16e854: 0x422f8  dsll        $a0, $a0, 11
    ctx->pc = 0x16e854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 11);
    // 0x16e858: 0xdc4301b0  ld          $v1, 0x1B0($v0)
    ctx->pc = 0x16e858u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x16e85c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x16e85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x16e860: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x16E860u;
    {
        const bool branch_taken_0x16e860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E860u;
        // 0x16e864: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e860) {
            ctx->pc = 0x16E944u;
            goto label_16e944;
        }
    }
    ctx->pc = 0x16E868u;
    // 0x16e868: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16e868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e86c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16e86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16e870: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e874: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x16e874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x16e878: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16e878u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e87c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16e87cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e880: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16E880u;
    SET_GPR_U32(ctx, 31, 0x16E888u);
    ctx->pc = 0x16E884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E880u;
    // 0x16e884: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16E880u, 0x16E888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E888u;
label_16e888:
    // 0x16e888: 0x96230260  lhu         $v1, 0x260($s1)
    ctx->pc = 0x16e888u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x16e88c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x16e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x16e890: 0x2447ec58  addiu       $a3, $v0, -0x13A8
    ctx->pc = 0x16e890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x16e894: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x16e894u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e898: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x16e898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x16e89c: 0xa6230260  sh          $v1, 0x260($s1)
    ctx->pc = 0x16e89cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 608), (uint16_t)GPR_U32(ctx, 3));
    // 0x16e8a0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x16e8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x16e8a4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x16e8a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x16e8a8: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x16e8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x16e8ac: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x16e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x16e8b0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x16e8b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16e8b4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x16E8B4u;
    {
        const bool branch_taken_0x16e8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8B4u;
        // 0x16e8b8: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e8b4) {
            ctx->pc = 0x16E920u;
            goto label_16e920;
        }
    }
    ctx->pc = 0x16E8BCu;
    // 0x16e8bc: 0x8625025e  lh          $a1, 0x25E($s1)
    ctx->pc = 0x16e8bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 606)));
    // 0x16e8c0: 0x10a20017  beq         $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x16E8C0u;
    {
        const bool branch_taken_0x16e8c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x16E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8C0u;
        // 0x16e8c4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e8c0) {
            ctx->pc = 0x16E920u;
            goto label_16e920;
        }
    }
    ctx->pc = 0x16E8C8u;
    // 0x16e8c8: 0x10a60015  beq         $a1, $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x16E8C8u;
    {
        const bool branch_taken_0x16e8c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x16E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8C8u;
        // 0x16e8cc: 0x2462fff8  addiu       $v0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e8c8) {
            ctx->pc = 0x16E920u;
            goto label_16e920;
        }
    }
    ctx->pc = 0x16E8D0u;
    // 0x16e8d0: 0x10440014  beq         $v0, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x16E8D0u;
    {
        const bool branch_taken_0x16e8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x16E8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8D0u;
        // 0x16e8d4: 0x26e2ec58  addiu       $v0, $s7, -0x13A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e8d0) {
            ctx->pc = 0x16E924u;
            goto label_16e924;
        }
    }
    ctx->pc = 0x16E8D8u;
    // 0x16e8d8: 0xa626025e  sh          $a2, 0x25E($s1)
    ctx->pc = 0x16e8d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 606), (uint16_t)GPR_U32(ctx, 6));
    // 0x16e8dc: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x16e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x16e8e0: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x16e8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x16e8e4: 0xa6220260  sh          $v0, 0x260($s1)
    ctx->pc = 0x16e8e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 608), (uint16_t)GPR_U32(ctx, 2));
    // 0x16e8e8: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x16e8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x16e8ec: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x16e8ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x16e8f0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16E8F0u;
    {
        const bool branch_taken_0x16e8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8F0u;
        // 0x16e8f4: 0x2c620009  sltiu       $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e8f0) {
            ctx->pc = 0x16E904u;
            goto label_16e904;
        }
    }
    ctx->pc = 0x16E8F8u;
    // 0x16e8f8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x16e8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16e8fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16E8FCu;
    {
        const bool branch_taken_0x16e8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8FCu;
        // 0x16e900: 0xa622025e  sh          $v0, 0x25E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 606), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e8fc) {
            ctx->pc = 0x16E90Cu;
            goto label_16e90c;
        }
    }
    ctx->pc = 0x16E904u;
label_16e904:
    // 0x16e904: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16E904u;
    {
        const bool branch_taken_0x16e904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e904) {
            ctx->pc = 0x16E908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E904u;
            // 0x16e908: 0xa620025e  sh          $zero, 0x25E($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 606), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E90Cu;
            goto label_16e90c;
        }
    }
    ctx->pc = 0x16E90Cu;
label_16e90c:
    // 0x16e90c: 0x86220260  lh          $v0, 0x260($s1)
    ctx->pc = 0x16e90cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x16e910: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x16E910u;
    {
        const bool branch_taken_0x16e910 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x16E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E910u;
        // 0x16e914: 0x26c274a0  addiu       $v0, $s6, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e910) {
            ctx->pc = 0x16E944u;
            goto label_16e944;
        }
    }
    ctx->pc = 0x16E918u;
    // 0x16e918: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16E918u;
    {
        const bool branch_taken_0x16e918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E918u;
        // 0x16e91c: 0xa6200260  sh          $zero, 0x260($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 608), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e918) {
            ctx->pc = 0x16E944u;
            goto label_16e944;
        }
    }
    ctx->pc = 0x16E920u;
label_16e920:
    // 0x16e920: 0x26e2ec58  addiu       $v0, $s7, -0x13A8
    ctx->pc = 0x16e920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962264));
label_16e924:
    // 0x16e924: 0x86230260  lh          $v1, 0x260($s1)
    ctx->pc = 0x16e924u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x16e928: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x16e928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16e92c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x16e92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x16e930: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x16e930u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x16e934: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16E934u;
    {
        const bool branch_taken_0x16e934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E934u;
        // 0x16e938: 0x26c274a0  addiu       $v0, $s6, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e934) {
            ctx->pc = 0x16E944u;
            goto label_16e944;
        }
    }
    ctx->pc = 0x16E93Cu;
    // 0x16e93c: 0xa620025e  sh          $zero, 0x25E($s1)
    ctx->pc = 0x16e93cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 606), (uint16_t)GPR_U32(ctx, 0));
    // 0x16e940: 0xa6200260  sh          $zero, 0x260($s1)
    ctx->pc = 0x16e940u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 608), (uint16_t)GPR_U32(ctx, 0));
label_16e944:
    // 0x16e944: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x16e944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x16e948: 0x425f8  dsll        $a0, $a0, 23
    ctx->pc = 0x16e948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 23);
    // 0x16e94c: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x16e94cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x16e950: 0x42338  dsll        $a0, $a0, 12
    ctx->pc = 0x16e950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 12);
    // 0x16e954: 0xdc4301b0  ld          $v1, 0x1B0($v0)
    ctx->pc = 0x16e954u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x16e958: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x16e958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x16e95c: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x16E95Cu;
    {
        const bool branch_taken_0x16e95c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E95Cu;
        // 0x16e960: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e95c) {
            ctx->pc = 0x16E9FCu;
            goto label_16e9fc;
        }
    }
    ctx->pc = 0x16E964u;
    // 0x16e964: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e968: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16e968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16e96c: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x16e96cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x16e970: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16e970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e974: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16e974u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e978: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16e978u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e97c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16E97Cu;
    SET_GPR_U32(ctx, 31, 0x16E984u);
    ctx->pc = 0x16E980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E97Cu;
    // 0x16e980: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16E97Cu, 0x16E984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E984u;
label_16e984:
    // 0x16e984: 0x96230260  lhu         $v1, 0x260($s1)
    ctx->pc = 0x16e984u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x16e988: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x16e988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x16e98c: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x16e98cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x16e990: 0x441001a  bgez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x16E990u;
    {
        const bool branch_taken_0x16e990 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x16E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E990u;
        // 0x16e994: 0xa6230260  sh          $v1, 0x260($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 608), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e990) {
            ctx->pc = 0x16E9FCu;
            goto label_16e9fc;
        }
    }
    ctx->pc = 0x16E998u;
    // 0x16e998: 0x8622025e  lh          $v0, 0x25E($s1)
    ctx->pc = 0x16e998u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 606)));
    // 0x16e99c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16E99Cu;
    {
        const bool branch_taken_0x16e99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E99Cu;
        // 0x16e9a0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e99c) {
            ctx->pc = 0x16E9B0u;
            goto label_16e9b0;
        }
    }
    ctx->pc = 0x16E9A4u;
    // 0x16e9a4: 0xa620025e  sh          $zero, 0x25E($s1)
    ctx->pc = 0x16e9a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 606), (uint16_t)GPR_U32(ctx, 0));
    // 0x16e9a8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x16E9A8u;
    {
        const bool branch_taken_0x16e9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E9A8u;
        // 0x16e9ac: 0xa6200260  sh          $zero, 0x260($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 608), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e9a8) {
            ctx->pc = 0x16E9FCu;
            goto label_16e9fc;
        }
    }
    ctx->pc = 0x16E9B0u;
label_16e9b0:
    // 0x16e9b0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x16e9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x16e9b4: 0xa622025e  sh          $v0, 0x25E($s1)
    ctx->pc = 0x16e9b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 606), (uint16_t)GPR_U32(ctx, 2));
    // 0x16e9b8: 0x2463ec58  addiu       $v1, $v1, -0x13A8
    ctx->pc = 0x16e9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962264));
    // 0x16e9bc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x16e9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16e9c0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x16e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FEC68u));
    // 0x16e9c4: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x16e9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x16e9c8: 0xa6220260  sh          $v0, 0x260($s1)
    ctx->pc = 0x16e9c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 608), (uint16_t)GPR_U32(ctx, 2));
    // 0x16e9cc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x16e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FEC68u));
    // 0x16e9d0: 0x82202b  sltu        $a0, $a0, $v0
    ctx->pc = 0x16e9d0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16e9d4: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x16E9D4u;
    {
        const bool branch_taken_0x16e9d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e9d4) {
            ctx->pc = 0x16E9D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E9D4u;
            // 0x16e9d8: 0x86220260  lh          $v0, 0x260($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E9E8u;
            goto label_16e9e8;
        }
    }
    ctx->pc = 0x16E9DCu;
    // 0x16e9dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16e9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16e9e0: 0xa622025e  sh          $v0, 0x25E($s1)
    ctx->pc = 0x16e9e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 606), (uint16_t)GPR_U32(ctx, 2));
    // 0x16e9e4: 0x86220260  lh          $v0, 0x260($s1)
    ctx->pc = 0x16e9e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 608)));
label_16e9e8:
    // 0x16e9e8: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x16E9E8u;
    {
        const bool branch_taken_0x16e9e8 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x16e9e8) {
            ctx->pc = 0x16E9ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E9E8u;
            // 0x16e9ec: 0xa6200260  sh          $zero, 0x260($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 608), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E9F0u;
            goto label_16e9f0;
        }
    }
    ctx->pc = 0x16E9F0u;
label_16e9f0:
    // 0x16e9f0: 0x8622025e  lh          $v0, 0x25E($s1)
    ctx->pc = 0x16e9f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 606)));
    // 0x16e9f4: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x16E9F4u;
    {
        const bool branch_taken_0x16e9f4 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x16e9f4) {
            ctx->pc = 0x16E9F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E9F4u;
            // 0x16e9f8: 0xa620025e  sh          $zero, 0x25E($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 606), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E9FCu;
            goto label_16e9fc;
        }
    }
    ctx->pc = 0x16E9FCu;
label_16e9fc:
    // 0x16e9fc: 0x26c274a0  addiu       $v0, $s6, 0x74A0
    ctx->pc = 0x16e9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
    // 0x16ea00: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x16ea00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x16ea04: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x16ea04u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x16ea08: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x16ea08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x16ea0c: 0x506000ca  beql        $v1, $zero, . + 4 + (0xCA << 2)
    ctx->pc = 0x16EA0Cu;
    {
        const bool branch_taken_0x16ea0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ea0c) {
            ctx->pc = 0x16EA10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EA0Cu;
            // 0x16ea10: 0x3c042000  lui         $a0, 0x2000 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16ED38u;
            goto label_16ed38;
        }
    }
    ctx->pc = 0x16EA14u;
    // 0x16ea14: 0x82220284  lb          $v0, 0x284($s1)
    ctx->pc = 0x16ea14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 644)));
    // 0x16ea18: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x16EA18u;
    {
        const bool branch_taken_0x16ea18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16EA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA18u;
        // 0x16ea1c: 0x263001c0  addiu       $s0, $s1, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ea18) {
            ctx->pc = 0x16EA98u;
            goto label_16ea98;
        }
    }
    ctx->pc = 0x16EA20u;
    // 0x16ea20: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x16ea20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x16ea24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16ea24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ea28: 0xc07ee0c  jal         func_1FB830
    ctx->pc = 0x16EA28u;
    SET_GPR_U32(ctx, 31, 0x16EA30u);
    ctx->pc = 0x16EA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EA28u;
    // 0x16ea2c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB830u, 0x16EA28u, 0x16EA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EA30u;
label_16ea30:
    // 0x16ea30: 0x8223025c  lb          $v1, 0x25C($s1)
    ctx->pc = 0x16ea30u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x16ea34: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x16ea34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16ea38: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x16EA38u;
    {
        const bool branch_taken_0x16ea38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA38u;
        // 0x16ea3c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ea38) {
            ctx->pc = 0x16EA9Cu;
            goto label_16ea9c;
        }
    }
    ctx->pc = 0x16EA40u;
    // 0x16ea40: 0x8622025e  lh          $v0, 0x25E($s1)
    ctx->pc = 0x16ea40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 606)));
    // 0x16ea44: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x16ea44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x16ea48: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x16ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x16ea4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16ea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16ea50: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x16ea50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x16ea54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16ea54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ea58: 0x9064008b  lbu         $a0, 0x8B($v1)
    ctx->pc = 0x16ea58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 139)));
    // 0x16ea5c: 0x1485000f  bne         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x16EA5Cu;
    {
        const bool branch_taken_0x16ea5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x16EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA5Cu;
        // 0x16ea60: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ea5c) {
            ctx->pc = 0x16EA9Cu;
            goto label_16ea9c;
        }
    }
    ctx->pc = 0x16EA64u;
    // 0x16ea64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16ea64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ea68: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16ea68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16ea6c: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x16ea6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x16ea70: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16ea70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16ea74: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16ea74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16ea78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16ea78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ea7c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16EA7Cu;
    SET_GPR_U32(ctx, 31, 0x16EA84u);
    ctx->pc = 0x16EA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EA7Cu;
    // 0x16ea80: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16EA7Cu, 0x16EA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EA84u;
label_16ea84:
    // 0x16ea84: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x16EA84u;
    {
        const bool branch_taken_0x16ea84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA84u;
        // 0x16ea88: 0x26c274a0  addiu       $v0, $s6, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ea84) {
            ctx->pc = 0x16ED70u;
            goto label_16ed70;
        }
    }
    ctx->pc = 0x16EA8Cu;
label_16ea8c:
    // 0x16ea8c: 0x8226025c  lb          $a2, 0x25C($s1)
    ctx->pc = 0x16ea8cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x16ea90: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x16EA90u;
    {
        const bool branch_taken_0x16ea90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA90u;
        // 0x16ea94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ea90) {
            ctx->pc = 0x16EBF4u;
            goto label_16ebf4;
        }
    }
    ctx->pc = 0x16EA98u;
label_16ea98:
    // 0x16ea98: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x16ea98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_16ea9c:
    // 0x16ea9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16ea9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eaa0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16eaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16eaa4: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x16eaa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x16eaa8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16eaa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16eaac: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16eaacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16eab0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16eab0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eab4: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16EAB4u;
    SET_GPR_U32(ctx, 31, 0x16EABCu);
    ctx->pc = 0x16EAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EAB4u;
    // 0x16eab8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16EAB4u, 0x16EABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EABCu;
label_16eabc:
    // 0x16eabc: 0x8622025e  lh          $v0, 0x25E($s1)
    ctx->pc = 0x16eabcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 606)));
    // 0x16eac0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x16eac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x16eac4: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x16eac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x16eac8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16eac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16eacc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x16eaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x16ead0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16ead0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ead4: 0x9064008b  lbu         $a0, 0x8B($v1)
    ctx->pc = 0x16ead4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 139)));
    // 0x16ead8: 0x1485005a  bne         $a0, $a1, . + 4 + (0x5A << 2)
    ctx->pc = 0x16EAD8u;
    {
        const bool branch_taken_0x16ead8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x16EADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EAD8u;
        // 0x16eadc: 0x3c170060  lui         $s7, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ead8) {
            ctx->pc = 0x16EC44u;
            goto label_16ec44;
        }
    }
    ctx->pc = 0x16EAE0u;
    // 0x16eae0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x16eae0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eae4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16eae4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eae8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x16EAE8u;
    {
        const bool branch_taken_0x16eae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EAE8u;
        // 0x16eaec: 0x3c150057  lui         $s5, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eae8) {
            ctx->pc = 0x16EB74u;
            goto label_16eb74;
        }
    }
    ctx->pc = 0x16EAF0u;
label_16eaf0:
    // 0x16eaf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16eaf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eaf4: 0xc07edb2  jal         func_1FB6C8
    ctx->pc = 0x16EAF4u;
    SET_GPR_U32(ctx, 31, 0x16EAFCu);
    ctx->pc = 0x16EAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EAF4u;
    // 0x16eaf8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6C8u, 0x16EAF4u, 0x16EAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EAFCu;
label_16eafc:
    // 0x16eafc: 0x86030018  lh          $v1, 0x18($s0)
    ctx->pc = 0x16eafcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16eb00: 0x5443001c  bnel        $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x16EB00u;
    {
        const bool branch_taken_0x16eb00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16eb00) {
            ctx->pc = 0x16EB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EB00u;
            // 0x16eb04: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EB74u;
            goto label_16eb74;
        }
    }
    ctx->pc = 0x16EB08u;
    // 0x16eb08: 0x82220284  lb          $v0, 0x284($s1)
    ctx->pc = 0x16eb08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 644)));
    // 0x16eb0c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x16EB0Cu;
    {
        const bool branch_taken_0x16eb0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16eb0c) {
            ctx->pc = 0x16EB10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EB0Cu;
            // 0x16eb10: 0x8225025c  lb          $a1, 0x25C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EB44u;
            goto label_16eb44;
        }
    }
    ctx->pc = 0x16EB14u;
    // 0x16eb14: 0x8226025c  lb          $a2, 0x25C($s1)
    ctx->pc = 0x16eb14u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x16eb18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16eb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eb1c: 0xc07edb2  jal         func_1FB6C8
    ctx->pc = 0x16EB1Cu;
    SET_GPR_U32(ctx, 31, 0x16EB24u);
    ctx->pc = 0x16EB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EB1Cu;
    // 0x16eb20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6C8u, 0x16EB1Cu, 0x16EB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EB24u;
label_16eb24:
    // 0x16eb24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16eb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eb28: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x16eb28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eb2c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x16eb2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eb30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16eb30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eb34: 0xc07edf6  jal         func_1FB7D8
    ctx->pc = 0x16EB34u;
    SET_GPR_U32(ctx, 31, 0x16EB3Cu);
    ctx->pc = 0x16EB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EB34u;
    // 0x16eb38: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7D8u, 0x16EB34u, 0x16EB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EB3Cu;
label_16eb3c:
    // 0x16eb3c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x16EB3Cu;
    {
        const bool branch_taken_0x16eb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB3Cu;
        // 0x16eb40: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb3c) {
            ctx->pc = 0x16EBACu;
            goto label_16ebac;
        }
    }
    ctx->pc = 0x16EB44u;
label_16eb44:
    // 0x16eb44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16eb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eb48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16eb48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eb4c: 0xc07edb2  jal         func_1FB6C8
    ctx->pc = 0x16EB4Cu;
    SET_GPR_U32(ctx, 31, 0x16EB54u);
    ctx->pc = 0x16EB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EB4Cu;
    // 0x16eb50: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6C8u, 0x16EB4Cu, 0x16EB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EB54u;
label_16eb54:
    // 0x16eb54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16eb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eb58: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x16eb58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eb5c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x16eb5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eb60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16eb60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eb64: 0xc07edf6  jal         func_1FB7D8
    ctx->pc = 0x16EB64u;
    SET_GPR_U32(ctx, 31, 0x16EB6Cu);
    ctx->pc = 0x16EB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EB64u;
    // 0x16eb68: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7D8u, 0x16EB64u, 0x16EB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EB6Cu;
label_16eb6c:
    // 0x16eb6c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x16EB6Cu;
    {
        const bool branch_taken_0x16eb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB6Cu;
        // 0x16eb70: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb6c) {
            ctx->pc = 0x16EBACu;
            goto label_16ebac;
        }
    }
    ctx->pc = 0x16EB74u;
label_16eb74:
    // 0x16eb74: 0x26b29b70  addiu       $s2, $s5, -0x6490
    ctx->pc = 0x16eb74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
    // 0x16eb78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16eb78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eb7c: 0xc07ee0c  jal         func_1FB830
    ctx->pc = 0x16EB7Cu;
    SET_GPR_U32(ctx, 31, 0x16EB84u);
    ctx->pc = 0x16EB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EB7Cu;
    // 0x16eb80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB830u, 0x16EB7Cu, 0x16EB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EB84u;
label_16eb84:
    // 0x16eb84: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x16eb84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16eb88: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16EB88u;
    {
        const bool branch_taken_0x16eb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB88u;
        // 0x16eb8c: 0x26e4ec58  addiu       $a0, $s7, -0x13A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb88) {
            ctx->pc = 0x16EBACu;
            goto label_16ebac;
        }
    }
    ctx->pc = 0x16EB90u;
    // 0x16eb90: 0x86220260  lh          $v0, 0x260($s1)
    ctx->pc = 0x16eb90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x16eb94: 0x8625025e  lh          $a1, 0x25E($s1)
    ctx->pc = 0x16eb94u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 606)));
    // 0x16eb98: 0xc0b2402  jal         func_2C9008
    ctx->pc = 0x16EB98u;
    SET_GPR_U32(ctx, 31, 0x16EBA0u);
    ctx->pc = 0x16EB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EB98u;
    // 0x16eb9c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9008u, 0x16EB98u, 0x16EBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EBA0u;
label_16eba0:
    // 0x16eba0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16eba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eba4: 0x1600ffd2  bnez        $s0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x16EBA4u;
    {
        const bool branch_taken_0x16eba4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16EBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EBA4u;
        // 0x16eba8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eba4) {
            ctx->pc = 0x16EAF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16eaf0;
        }
    }
    ctx->pc = 0x16EBACu;
label_16ebac:
    // 0x16ebac: 0x56800026  bnel        $s4, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x16EBACu;
    {
        const bool branch_taken_0x16ebac = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ebac) {
            ctx->pc = 0x16EBB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EBACu;
            // 0x16ebb0: 0x82220284  lb          $v0, 0x284($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 644)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EC48u;
            goto label_16ec48;
        }
    }
    ctx->pc = 0x16EBB4u;
    // 0x16ebb4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x16EBB4u;
    {
        const bool branch_taken_0x16ebb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EBB4u;
        // 0x16ebb8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ebb4) {
            ctx->pc = 0x16EC1Cu;
            goto label_16ec1c;
        }
    }
    ctx->pc = 0x16EBBCu;
    // 0x16ebbc: 0x0  nop
    ctx->pc = 0x16ebbcu;
    // NOP
label_16ebc0:
    // 0x16ebc0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16ebc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ebc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16ebc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ebc8: 0xc07edb2  jal         func_1FB6C8
    ctx->pc = 0x16EBC8u;
    SET_GPR_U32(ctx, 31, 0x16EBD0u);
    ctx->pc = 0x16EBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EBC8u;
    // 0x16ebcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6C8u, 0x16EBC8u, 0x16EBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EBD0u;
label_16ebd0:
    // 0x16ebd0: 0x86030018  lh          $v1, 0x18($s0)
    ctx->pc = 0x16ebd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16ebd4: 0x54430011  bnel        $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x16EBD4u;
    {
        const bool branch_taken_0x16ebd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16ebd4) {
            ctx->pc = 0x16EBD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EBD4u;
            // 0x16ebd8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EC1Cu;
            goto label_16ec1c;
        }
    }
    ctx->pc = 0x16EBDCu;
    // 0x16ebdc: 0x82220284  lb          $v0, 0x284($s1)
    ctx->pc = 0x16ebdcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 644)));
    // 0x16ebe0: 0x1040ffaa  beqz        $v0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x16EBE0u;
    {
        const bool branch_taken_0x16ebe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EBE0u;
        // 0x16ebe4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ebe0) {
            ctx->pc = 0x16EA8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ea8c;
        }
    }
    ctx->pc = 0x16EBE8u;
    // 0x16ebe8: 0x8225025c  lb          $a1, 0x25C($s1)
    ctx->pc = 0x16ebe8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x16ebec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16ebecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ebf0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x16ebf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_16ebf4:
    // 0x16ebf4: 0xc07edb2  jal         func_1FB6C8
    ctx->pc = 0x16EBF4u;
    SET_GPR_U32(ctx, 31, 0x16EBFCu);
    ctx->pc = 0x1FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6C8u, 0x16EBF4u, 0x16EBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EBFCu;
label_16ebfc:
    // 0x16ebfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16ebfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ec00: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16ec00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ec04: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x16ec04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ec08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16ec08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ec0c: 0xc07edf6  jal         func_1FB7D8
    ctx->pc = 0x16EC0Cu;
    SET_GPR_U32(ctx, 31, 0x16EC14u);
    ctx->pc = 0x16EC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EC0Cu;
    // 0x16ec10: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7D8u, 0x16EC0Cu, 0x16EC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EC14u;
label_16ec14:
    // 0x16ec14: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16EC14u;
    {
        const bool branch_taken_0x16ec14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EC14u;
        // 0x16ec18: 0x82220284  lb          $v0, 0x284($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 644)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ec14) {
            ctx->pc = 0x16EC48u;
            goto label_16ec48;
        }
    }
    ctx->pc = 0x16EC1Cu;
label_16ec1c:
    // 0x16ec1c: 0x2e620006  sltiu       $v0, $s3, 0x6
    ctx->pc = 0x16ec1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x16ec20: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16EC20u;
    {
        const bool branch_taken_0x16ec20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EC20u;
        // 0x16ec24: 0x26e4ec58  addiu       $a0, $s7, -0x13A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ec20) {
            ctx->pc = 0x16EC44u;
            goto label_16ec44;
        }
    }
    ctx->pc = 0x16EC28u;
    // 0x16ec28: 0x86220260  lh          $v0, 0x260($s1)
    ctx->pc = 0x16ec28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x16ec2c: 0x8625025e  lh          $a1, 0x25E($s1)
    ctx->pc = 0x16ec2cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 606)));
    // 0x16ec30: 0xc0b2402  jal         func_2C9008
    ctx->pc = 0x16EC30u;
    SET_GPR_U32(ctx, 31, 0x16EC38u);
    ctx->pc = 0x16EC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EC30u;
    // 0x16ec34: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9008u, 0x16EC30u, 0x16EC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EC38u;
label_16ec38:
    // 0x16ec38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16ec38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ec3c: 0x1600ffe0  bnez        $s0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x16EC3Cu;
    {
        const bool branch_taken_0x16ec3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EC3Cu;
        // 0x16ec40: 0x26b29b70  addiu       $s2, $s5, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ec3c) {
            ctx->pc = 0x16EBC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ebc0;
        }
    }
    ctx->pc = 0x16EC44u;
label_16ec44:
    // 0x16ec44: 0x82220284  lb          $v0, 0x284($s1)
    ctx->pc = 0x16ec44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 644)));
label_16ec48:
    // 0x16ec48: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x16EC48u;
    {
        const bool branch_taken_0x16ec48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16EC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EC48u;
        // 0x16ec4c: 0x86220260  lh          $v0, 0x260($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ec48) {
            ctx->pc = 0x16ECE0u;
            goto label_16ece0;
        }
    }
    ctx->pc = 0x16EC50u;
    // 0x16ec50: 0x26e4ec58  addiu       $a0, $s7, -0x13A8
    ctx->pc = 0x16ec50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962264));
    // 0x16ec54: 0x8625025e  lh          $a1, 0x25E($s1)
    ctx->pc = 0x16ec54u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 606)));
    // 0x16ec58: 0xc0b2402  jal         func_2C9008
    ctx->pc = 0x16EC58u;
    SET_GPR_U32(ctx, 31, 0x16EC60u);
    ctx->pc = 0x16EC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EC58u;
    // 0x16ec5c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9008u, 0x16EC58u, 0x16EC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EC60u;
label_16ec60:
    // 0x16ec60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16ec60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ec64: 0x12000041  beqz        $s0, . + 4 + (0x41 << 2)
    ctx->pc = 0x16EC64u;
    {
        const bool branch_taken_0x16ec64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EC64u;
        // 0x16ec68: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ec64) {
            ctx->pc = 0x16ED6Cu;
            goto label_16ed6c;
        }
    }
    ctx->pc = 0x16EC6Cu;
    // 0x16ec6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16ec6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ec70: 0x24529b70  addiu       $s2, $v0, -0x6490
    ctx->pc = 0x16ec70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x16ec74: 0xc07ee0c  jal         func_1FB830
    ctx->pc = 0x16EC74u;
    SET_GPR_U32(ctx, 31, 0x16EC7Cu);
    ctx->pc = 0x16EC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EC74u;
    // 0x16ec78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB830u, 0x16EC74u, 0x16EC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EC7Cu;
label_16ec7c:
    // 0x16ec7c: 0x8226025c  lb          $a2, 0x25C($s1)
    ctx->pc = 0x16ec7cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x16ec80: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x16ec80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16ec84: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x16EC84u;
    {
        const bool branch_taken_0x16ec84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ec84) {
            ctx->pc = 0x16EC88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EC84u;
            // 0x16ec88: 0x86070018  lh          $a3, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16ECA0u;
            goto label_16eca0;
        }
    }
    ctx->pc = 0x16EC8Cu;
    // 0x16ec8c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x16ec8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x16ec90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16ec90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ec94: 0xc07ee1a  jal         func_1FB868
    ctx->pc = 0x16EC94u;
    SET_GPR_U32(ctx, 31, 0x16EC9Cu);
    ctx->pc = 0x16EC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EC94u;
    // 0x16ec98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB868u, 0x16EC94u, 0x16EC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EC9Cu;
label_16ec9c:
    // 0x16ec9c: 0x86070018  lh          $a3, 0x18($s0)
    ctx->pc = 0x16ec9cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_16eca0:
    // 0x16eca0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16eca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eca4: 0x8226025c  lb          $a2, 0x25C($s1)
    ctx->pc = 0x16eca4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x16eca8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16eca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ecac: 0xc07edf6  jal         func_1FB7D8
    ctx->pc = 0x16ECACu;
    SET_GPR_U32(ctx, 31, 0x16ECB4u);
    ctx->pc = 0x16ECB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ECACu;
    // 0x16ecb0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7D8u, 0x16ECACu, 0x16ECB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ECB4u;
label_16ecb4:
    // 0x16ecb4: 0x9224025c  lbu         $a0, 0x25C($s1)
    ctx->pc = 0x16ecb4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x16ecb8: 0x8223025d  lb          $v1, 0x25D($s1)
    ctx->pc = 0x16ecb8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 605)));
    // 0x16ecbc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x16ecbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x16ecc0: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x16ecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x16ecc4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16ecc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16ecc8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x16ecc8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x16eccc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x16ecccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16ecd0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x16ECD0u;
    {
        const bool branch_taken_0x16ecd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ECD0u;
        // 0x16ecd4: 0xa224025c  sb          $a0, 0x25C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 604), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ecd0) {
            ctx->pc = 0x16ED1Cu;
            goto label_16ed1c;
        }
    }
    ctx->pc = 0x16ECD8u;
    // 0x16ecd8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x16ECD8u;
    {
        const bool branch_taken_0x16ecd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ECD8u;
        // 0x16ecdc: 0xa220025c  sb          $zero, 0x25C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 604), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ecd8) {
            ctx->pc = 0x16ED18u;
            goto label_16ed18;
        }
    }
    ctx->pc = 0x16ECE0u;
label_16ece0:
    // 0x16ece0: 0x26e4ec58  addiu       $a0, $s7, -0x13A8
    ctx->pc = 0x16ece0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962264));
    // 0x16ece4: 0x8625025e  lh          $a1, 0x25E($s1)
    ctx->pc = 0x16ece4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 606)));
    // 0x16ece8: 0xc0b2402  jal         func_2C9008
    ctx->pc = 0x16ECE8u;
    SET_GPR_U32(ctx, 31, 0x16ECF0u);
    ctx->pc = 0x16ECECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ECE8u;
    // 0x16ecec: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9008u, 0x16ECE8u, 0x16ECF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ECF0u;
label_16ecf0:
    // 0x16ecf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16ecf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ecf4: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x16ECF4u;
    {
        const bool branch_taken_0x16ecf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ECF4u;
        // 0x16ecf8: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ecf4) {
            ctx->pc = 0x16ED6Cu;
            goto label_16ed6c;
        }
    }
    ctx->pc = 0x16ECFCu;
    // 0x16ecfc: 0x8225025c  lb          $a1, 0x25C($s1)
    ctx->pc = 0x16ecfcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x16ed00: 0x86070018  lh          $a3, 0x18($s0)
    ctx->pc = 0x16ed00u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16ed04: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x16ed04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x16ed08: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x16ed08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x16ed0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16ed0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed10: 0xc07edf6  jal         func_1FB7D8
    ctx->pc = 0x16ED10u;
    SET_GPR_U32(ctx, 31, 0x16ED18u);
    ctx->pc = 0x16ED14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ED10u;
    // 0x16ed14: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7D8u, 0x16ED10u, 0x16ED18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ED18u;
label_16ed18:
    // 0x16ed18: 0xa220005a  sb          $zero, 0x5A($s1)
    ctx->pc = 0x16ed18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 0));
label_16ed1c:
    // 0x16ed1c: 0x86220260  lh          $v0, 0x260($s1)
    ctx->pc = 0x16ed1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x16ed20: 0x26e4ec58  addiu       $a0, $s7, -0x13A8
    ctx->pc = 0x16ed20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962264));
    // 0x16ed24: 0x8625025e  lh          $a1, 0x25E($s1)
    ctx->pc = 0x16ed24u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 606)));
    // 0x16ed28: 0xc0b26c4  jal         func_2C9B10
    ctx->pc = 0x16ED28u;
    SET_GPR_U32(ctx, 31, 0x16ED30u);
    ctx->pc = 0x16ED2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ED28u;
    // 0x16ed2c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9B10u, 0x16ED28u, 0x16ED30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ED30u;
label_16ed30:
    // 0x16ed30: 0x26c274a0  addiu       $v0, $s6, 0x74A0
    ctx->pc = 0x16ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
    // 0x16ed34: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x16ed34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
label_16ed38:
    // 0x16ed38: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x16ed38u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x16ed3c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x16ed3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x16ed40: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x16ED40u;
    {
        const bool branch_taken_0x16ed40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED40u;
        // 0x16ed44: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ed40) {
            ctx->pc = 0x16ED6Cu;
            goto label_16ed6c;
        }
    }
    ctx->pc = 0x16ED48u;
    // 0x16ed48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16ed48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed4c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16ed4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16ed50: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x16ed50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x16ed54: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16ed54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16ed58: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16ed58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16ed5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16ed5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed60: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16ED60u;
    SET_GPR_U32(ctx, 31, 0x16ED68u);
    ctx->pc = 0x16ED64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ED60u;
    // 0x16ed64: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16ED60u, 0x16ED68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ED68u;
label_16ed68:
    // 0x16ed68: 0xa220005a  sb          $zero, 0x5A($s1)
    ctx->pc = 0x16ed68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 0));
label_16ed6c:
    // 0x16ed6c: 0x26c274a0  addiu       $v0, $s6, 0x74A0
    ctx->pc = 0x16ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
label_16ed70:
    // 0x16ed70: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x16ed70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x16ed74: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x16ed74u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x16ed78: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x16ed78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x16ed7c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x16ED7Cu;
    {
        const bool branch_taken_0x16ed7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED7Cu;
        // 0x16ed80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ed7c) {
            ctx->pc = 0x16EDB4u;
            goto label_16edb4;
        }
    }
    ctx->pc = 0x16ED84u;
    // 0x16ed84: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x16ed84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x16ed88: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16ed88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16ed8c: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x16ed8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x16ed90: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16ed90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16ed94: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16ed94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16ed98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16ed98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed9c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16ED9Cu;
    SET_GPR_U32(ctx, 31, 0x16EDA4u);
    ctx->pc = 0x16EDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ED9Cu;
    // 0x16eda0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16ED9Cu, 0x16EDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EDA4u;
label_16eda4:
    // 0x16eda4: 0xc05bb78  jal         func_16EDE0
    ctx->pc = 0x16EDA4u;
    SET_GPR_U32(ctx, 31, 0x16EDACu);
    ctx->pc = 0x16EDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EDA4u;
    // 0x16eda8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16EDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16EDE0u, 0x16EDA4u, 0x16EDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EDACu;
label_16edac:
    // 0x16edac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16edacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16edb0: 0xa222005a  sb          $v0, 0x5A($s1)
    ctx->pc = 0x16edb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 2));
label_16edb4:
    // 0x16edb4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x16edb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16edb8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x16edb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16edbc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x16edbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16edc0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x16edc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16edc4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16edc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16edc8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x16edc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16edcc: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x16edccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16edd0: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x16edd0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16edd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16edd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16edd8: 0x3e00008  jr          $ra
    ctx->pc = 0x16EDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EDD8u;
        // 0x16eddc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EDD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16EDE0u;
}
