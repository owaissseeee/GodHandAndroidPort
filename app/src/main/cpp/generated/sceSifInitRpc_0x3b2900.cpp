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

// Function: sceSifInitRpc
// Address: 0x3b2900 - 0x3b2aa0
void sceSifInitRpc_0x3b2900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifInitRpc_0x3b2900");
#endif

    switch (ctx->pc) {
        case 0x3b2918u: goto label_3b2918;
        case 0x3b2948u: goto label_3b2948;
        case 0x3b2950u: goto label_3b2950;
        case 0x3b2958u: goto label_3b2958;
        case 0x3b29ccu: goto label_3b29cc;
        case 0x3b29e4u: goto label_3b29e4;
        case 0x3b29fcu: goto label_3b29fc;
        case 0x3b2a14u: goto label_3b2a14;
        case 0x3b2a1cu: goto label_3b2a1c;
        case 0x3b2a28u: goto label_3b2a28;
        case 0x3b2a54u: goto label_3b2a54;
        case 0x3b2a58u: goto label_3b2a58;
        case 0x3b2a60u: goto label_3b2a60;
        default: break;
    }

    ctx->pc = 0x3b2900u;

    // 0x3b2900: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b2900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b2904: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b2904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b2908: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b2908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3b290c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b290cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b2910: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3B2910u;
    SET_GPR_U32(ctx, 31, 0x3B2918u);
    ctx->pc = 0x3B2914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2910u;
    // 0x3b2914: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3B2910u, 0x3B2918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2918u;
label_3b2918:
    // 0x3b2918: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3b2918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3b291c: 0x8c62ae54  lw          $v0, -0x51AC($v1)
    ctx->pc = 0x3b291cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAE54u));
    // 0x3b2920: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B2920u;
    {
        const bool branch_taken_0x3b2920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2920u;
        // 0x3b2924: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2920) {
            ctx->pc = 0x3B2940u;
            goto label_3b2940;
        }
    }
    ctx->pc = 0x3B2928u;
    // 0x3b2928: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b2928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b292c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b292cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b2930: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b2930u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b2934: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b2934u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b2938: 0x80ed8fc  j           func_3B63F0
    ctx->pc = 0x3B2938u;
    ctx->pc = 0x3B293Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2938u;
    // 0x3b293c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B2938u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B2940u;
label_3b2940:
    // 0x3b2940: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3B2940u;
    SET_GPR_U32(ctx, 31, 0x3B2948u);
    ctx->pc = 0x3B2944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2940u;
    // 0x3b2944: 0xac71ae54  sw          $s1, -0x51AC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294946388), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B2940u, 0x3B2948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2948u;
label_3b2948:
    // 0x3b2948: 0xc0ec874  jal         func_3B21D0
    ctx->pc = 0x3B2948u;
    SET_GPR_U32(ctx, 31, 0x3B2950u);
    ctx->pc = 0x3B21D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B21D0u, 0x3B2948u, 0x3B2950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2950u;
label_3b2950:
    // 0x3b2950: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3B2950u;
    SET_GPR_U32(ctx, 31, 0x3B2958u);
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3B2950u, 0x3B2958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2958u;
label_3b2958:
    // 0x3b2958: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x3b2958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x3b295c: 0x3c080078  lui         $t0, 0x78
    ctx->pc = 0x3b295cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)120 << 16));
    // 0x3b2960: 0x2472e740  addiu       $s2, $v1, -0x18C0
    ctx->pc = 0x3b2960u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960960));
    // 0x3b2964: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x3b2964u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x3b2968: 0x3c070078  lui         $a3, 0x78
    ctx->pc = 0x3b2968u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)120 << 16));
    // 0x3b296c: 0x2510ff40  addiu       $s0, $t0, -0xC0
    ctx->pc = 0x3b296cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967104));
    // 0x3b2970: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3b2970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3b2974: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3b2974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3b2978: 0x24c6ef40  addiu       $a2, $a2, -0x10C0
    ctx->pc = 0x3b2978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963008));
    // 0x3b297c: 0x24e7f740  addiu       $a3, $a3, -0x8C0
    ctx->pc = 0x3b297cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965056));
    // 0x3b2980: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3b2980u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3b2984: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x3b2984u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3b2988: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x3b2988u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x77FF60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77FF60u, _value); } while (0);
    // 0x3b298c: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x3b298cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x3b2990: 0xad11ff40  sw          $s1, -0xC0($t0)
    ctx->pc = 0x3b2990u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x77FF40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77FF40u, _value); } while (0);
    // 0x3b2994: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x3b2994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x3b2998: 0xae060014  sw          $a2, 0x14($s0)
    ctx->pc = 0x3b2998u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x77FF54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77FF54u, _value); } while (0);
    // 0x3b299c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3b299cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3b29a0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3b29a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x77FF44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77FF44u, _value); } while (0);
    // 0x3b29a4: 0x24a52c00  addiu       $a1, $a1, 0x2C00
    ctx->pc = 0x3b29a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11264));
    // 0x3b29a8: 0xae07001c  sw          $a3, 0x1C($s0)
    ctx->pc = 0x3b29a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x77FF5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77FF5Cu, _value); } while (0);
    // 0x3b29ac: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x3b29acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x3b29b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3b29b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b29b4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x3b29b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x77FF48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77FF48u, _value); } while (0);
    // 0x3b29b8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3b29b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x77FF4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77FF4Cu, _value); } while (0);
    // 0x3b29bc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x3b29bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x77FF50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77FF50u, _value); } while (0);
    // 0x3b29c0: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x3b29c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x77FF58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77FF58u, _value); } while (0);
    // 0x3b29c4: 0xc0ec922  jal         func_3B2488
    ctx->pc = 0x3B29C4u;
    SET_GPR_U32(ctx, 31, 0x3B29CCu);
    ctx->pc = 0x3B29C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B29C4u;
    // 0x3b29c8: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2488u, 0x3B29C4u, 0x3B29CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B29CCu;
label_3b29cc:
    // 0x3b29cc: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x3b29ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x3b29d0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3b29d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3b29d4: 0x24a52e78  addiu       $a1, $a1, 0x2E78
    ctx->pc = 0x3b29d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11896));
    // 0x3b29d8: 0x34840009  ori         $a0, $a0, 0x9
    ctx->pc = 0x3b29d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    // 0x3b29dc: 0xc0ec922  jal         func_3B2488
    ctx->pc = 0x3B29DCu;
    SET_GPR_U32(ctx, 31, 0x3B29E4u);
    ctx->pc = 0x3B29E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B29DCu;
    // 0x3b29e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2488u, 0x3B29DCu, 0x3B29E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B29E4u;
label_3b29e4:
    // 0x3b29e4: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x3b29e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x3b29e8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3b29e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3b29ec: 0x24a53098  addiu       $a1, $a1, 0x3098
    ctx->pc = 0x3b29ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12440));
    // 0x3b29f0: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x3b29f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x3b29f4: 0xc0ec922  jal         func_3B2488
    ctx->pc = 0x3B29F4u;
    SET_GPR_U32(ctx, 31, 0x3B29FCu);
    ctx->pc = 0x3B29F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B29F4u;
    // 0x3b29f8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2488u, 0x3B29F4u, 0x3B29FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B29FCu;
label_3b29fc:
    // 0x3b29fc: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x3b29fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x3b2a00: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3b2a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3b2a04: 0x24a52d10  addiu       $a1, $a1, 0x2D10
    ctx->pc = 0x3b2a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11536));
    // 0x3b2a08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3b2a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2a0c: 0xc0ec922  jal         func_3B2488
    ctx->pc = 0x3B2A0Cu;
    SET_GPR_U32(ctx, 31, 0x3B2A14u);
    ctx->pc = 0x3B2A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2A0Cu;
    // 0x3b2a10: 0x3484000c  ori         $a0, $a0, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2488u, 0x3B2A0Cu, 0x3B2A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2A14u;
label_3b2a14:
    // 0x3b2a14: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3B2A14u;
    SET_GPR_U32(ctx, 31, 0x3B2A1Cu);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B2A14u, 0x3B2A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2A1Cu;
label_3b2a1c:
    // 0x3b2a1c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3b2a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3b2a20: 0xc0ec02c  jal         func_3B00B0
    ctx->pc = 0x3B2A20u;
    SET_GPR_U32(ctx, 31, 0x3B2A28u);
    ctx->pc = 0x3B2A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2A20u;
    // 0x3b2a24: 0x34840002  ori         $a0, $a0, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B00B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B00B0u, 0x3B2A20u, 0x3B2A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2A28u;
label_3b2a28:
    // 0x3b2a28: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3B2A28u;
    {
        const bool branch_taken_0x3b2a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2A28u;
        // 0x3b2a2c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2a28) {
            ctx->pc = 0x3B2A88u;
            goto label_3b2a88;
        }
    }
    ctx->pc = 0x3B2A30u;
    // 0x3b2a30: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x3b2a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x3b2a34: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3b2a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3b2a38: 0xacb1000c  sw          $s1, 0xC($a1)
    ctx->pc = 0x3b2a38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 17));
    // 0x3b2a3c: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x3b2a3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x3b2a40: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3b2a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b2a44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b2a44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2a48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3b2a48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2a4c: 0xc0ec9a2  jal         func_3B2688
    ctx->pc = 0x3B2A4Cu;
    SET_GPR_U32(ctx, 31, 0x3B2A54u);
    ctx->pc = 0x3B2A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2A4Cu;
    // 0x3b2a50: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2688u, 0x3B2A4Cu, 0x3B2A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2A54u;
label_3b2a54:
    // 0x3b2a54: 0x0  nop
    ctx->pc = 0x3b2a54u;
    // NOP
label_3b2a58:
    // 0x3b2a58: 0xc0ec816  jal         func_3B2058
    ctx->pc = 0x3B2A58u;
    SET_GPR_U32(ctx, 31, 0x3B2A60u);
    ctx->pc = 0x3B2A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2A58u;
    // 0x3b2a5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2058u, 0x3B2A58u, 0x3B2A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2A60u;
label_3b2a60:
    // 0x3b2a60: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x3B2A60u;
    {
        const bool branch_taken_0x3b2a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2A60u;
        // 0x3b2a64: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2a60) {
            ctx->pc = 0x3B2A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b2a58;
        }
    }
    ctx->pc = 0x3B2A68u;
    // 0x3b2a68: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3b2a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3b2a6c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b2a6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b2a70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b2a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b2a74: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b2a74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b2a78: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x3b2a78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x3b2a7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b2a7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b2a80: 0x80ec028  j           func_3B00A0
    ctx->pc = 0x3B2A80u;
    ctx->pc = 0x3B2A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2A80u;
    // 0x3b2a84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B00A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B00A0u, 0x3B2A80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B2A88u;
label_3b2a88:
    // 0x3b2a88: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b2a88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b2a8c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b2a8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b2a90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b2a90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b2a94: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2A94u;
        // 0x3b2a98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2A9Cu;
    // 0x3b2a9c: 0x0  nop
    ctx->pc = 0x3b2a9cu;
    // NOP
    ctx->pc = 0x3b2aa0u;
}
