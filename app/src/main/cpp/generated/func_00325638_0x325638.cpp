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

// Function: func_00325638
// Address: 0x325638 - 0x3257c8
void func_00325638_0x325638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00325638_0x325638");
#endif

    switch (ctx->pc) {
        case 0x325680u: goto label_325680;
        case 0x325690u: goto label_325690;
        case 0x3256a0u: goto label_3256a0;
        case 0x325740u: goto label_325740;
        case 0x325754u: goto label_325754;
        case 0x325764u: goto label_325764;
        case 0x32576cu: goto label_32576c;
        case 0x325774u: goto label_325774;
        case 0x32577cu: goto label_32577c;
        case 0x32578cu: goto label_32578c;
        case 0x3257a0u: goto label_3257a0;
        default: break;
    }

    ctx->pc = 0x325638u;

    // 0x325638: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x325638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32563c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x32563cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x325640: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x325640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x325644: 0x3c12003d  lui         $s2, 0x3D
    ctx->pc = 0x325644u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)61 << 16));
    // 0x325648: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x325648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x32564c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32564cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325650: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x325650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x325654: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x325654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x325658: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x325658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x32565c: 0x244280a0  addiu       $v0, $v0, -0x7F60
    ctx->pc = 0x32565cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934688));
    // 0x325660: 0x8e4580a4  lw          $a1, -0x7F5C($s2)
    ctx->pc = 0x325660u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C80A4u));
    // 0x325664: 0x246380fc  addiu       $v1, $v1, -0x7F04
    ctx->pc = 0x325664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934780));
    // 0x325668: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x325668u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C80A0u));
    // 0x32566c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x32566cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3C80FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C80FCu, _value); } while (0);
    // 0x325670: 0x54a0004c  bnel        $a1, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x325670u;
    {
        const bool branch_taken_0x325670 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x325670) {
            ctx->pc = 0x325674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325670u;
            // 0x325674: 0x264380a4  addiu       $v1, $s2, -0x7F5C (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294934692));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3257A4u;
            goto label_3257a4;
        }
    }
    ctx->pc = 0x325678u;
    // 0x325678: 0xc0cefa0  jal         func_33BE80
    ctx->pc = 0x325678u;
    SET_GPR_U32(ctx, 31, 0x325680u);
    ctx->pc = 0x33BE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BE80u, 0x325678u, 0x325680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325680u;
label_325680:
    // 0x325680: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x325680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x325684: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x325684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325688: 0xc0cef06  jal         func_33BC18
    ctx->pc = 0x325688u;
    SET_GPR_U32(ctx, 31, 0x325690u);
    ctx->pc = 0x32568Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325688u;
    // 0x32568c: 0x24844c90  addiu       $a0, $a0, 0x4C90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BC18u, 0x325688u, 0x325690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325690u;
label_325690:
    // 0x325690: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x325690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x325694: 0x24844d18  addiu       $a0, $a0, 0x4D18
    ctx->pc = 0x325694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19736));
    // 0x325698: 0xc0cef0c  jal         func_33BC30
    ctx->pc = 0x325698u;
    SET_GPR_U32(ctx, 31, 0x3256A0u);
    ctx->pc = 0x32569Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325698u;
    // 0x32569c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BC30u, 0x325698u, 0x3256A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3256A0u;
label_3256a0:
    // 0x3256a0: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x3256a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x3256a4: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x3256a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x3256a8: 0x24425c20  addiu       $v0, $v0, 0x5C20
    ctx->pc = 0x3256a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23584));
    // 0x3256ac: 0x24635c28  addiu       $v1, $v1, 0x5C28
    ctx->pc = 0x3256acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23592));
    // 0x3256b0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3256b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x755C24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x755C24u, _value); } while (0);
    // 0x3256b4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3256b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x755C20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x755C20u, _value); } while (0);
    // 0x3256b8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3256b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x755C2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x755C2Cu, _value); } while (0);
    // 0x3256bc: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3256BCu;
    {
        const bool branch_taken_0x3256bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3256C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3256BCu;
        // 0x3256c0: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3256bc) {
            ctx->pc = 0x325700u;
            goto label_325700;
        }
    }
    ctx->pc = 0x3256C4u;
    // 0x3256c4: 0x3c11003d  lui         $s1, 0x3D
    ctx->pc = 0x3256c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)61 << 16));
    // 0x3256c8: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x3256c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x3256cc: 0x262480b0  addiu       $a0, $s1, -0x7F50
    ctx->pc = 0x3256ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934704));
    // 0x3256d0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x3256d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3256d4: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x3256d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3C80C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C80C8u, _value); } while (0);
    // 0x3256d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3256d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3256dc: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x3256dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3C80C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C80C4u, _value); } while (0);
    // 0x3256e0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3256e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3256e4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3256e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3C80B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C80B0u, _value); } while (0);
    // 0x3256e8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3256e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3256ec: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x3256ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3C80B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C80B4u, _value); } while (0);
    // 0x3256f0: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x3256f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3256f4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3256f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3C80BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C80BCu, _value); } while (0);
    // 0x3256f8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3256F8u;
    {
        const bool branch_taken_0x3256f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3256FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3256F8u;
        // 0x3256fc: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3256f8) {
            ctx->pc = 0x325738u;
            goto label_325738;
        }
    }
    ctx->pc = 0x325700u;
label_325700:
    // 0x325700: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x325700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x325704: 0x3c11003d  lui         $s1, 0x3D
    ctx->pc = 0x325704u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)61 << 16));
    // 0x325708: 0x262480b0  addiu       $a0, $s1, -0x7F50
    ctx->pc = 0x325708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934704));
    // 0x32570c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x32570cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3C80C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C80C4u, _value); } while (0);
    // 0x325710: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x325710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x325714: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x325714u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3C80B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C80B0u, _value); } while (0);
    // 0x325718: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x325718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32571c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x32571cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3C80B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C80B4u, _value); } while (0);
    // 0x325720: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x325720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x325724: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x325724u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3C80BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C80BCu, _value); } while (0);
    // 0x325728: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x325728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32572c: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x32572cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3C80C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C80C0u, _value); } while (0);
    // 0x325730: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x325730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x325734: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x325734u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3C80C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C80C8u, _value); } while (0);
label_325738:
    // 0x325738: 0xc0ebee4  jal         func_3AFB90
    ctx->pc = 0x325738u;
    SET_GPR_U32(ctx, 31, 0x325740u);
    ctx->pc = 0x32573Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325738u;
    // 0x32573c: 0x3c10003d  lui         $s0, 0x3D (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)61 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFB90u, 0x325738u, 0x325740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325740u;
label_325740:
    // 0x325740: 0x26108148  addiu       $s0, $s0, -0x7EB8
    ctx->pc = 0x325740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934856));
    // 0x325744: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x325744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325748: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x325748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32574c: 0xc0ebee8  jal         func_3AFBA0
    ctx->pc = 0x32574Cu;
    SET_GPR_U32(ctx, 31, 0x325754u);
    ctx->pc = 0x325750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32574Cu;
    // 0x325750: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFBA0u, 0x32574Cu, 0x325754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325754u;
label_325754:
    // 0x325754: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x325754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x325758: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x325758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32575c: 0xc0c94f0  jal         func_3253C0
    ctx->pc = 0x32575Cu;
    SET_GPR_U32(ctx, 31, 0x325764u);
    ctx->pc = 0x325760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32575Cu;
    // 0x325760: 0xac62f9d8  sw          $v0, -0x628($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965720), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3253C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3253C0u, 0x32575Cu, 0x325764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325764u;
label_325764:
    // 0x325764: 0xc0c951a  jal         func_325468
    ctx->pc = 0x325764u;
    SET_GPR_U32(ctx, 31, 0x32576Cu);
    ctx->pc = 0x325468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325468u, 0x325764u, 0x32576Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32576Cu;
label_32576c:
    // 0x32576c: 0xc0c953c  jal         func_3254F0
    ctx->pc = 0x32576Cu;
    SET_GPR_U32(ctx, 31, 0x325774u);
    ctx->pc = 0x3254F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3254F0u, 0x32576Cu, 0x325774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325774u;
label_325774:
    // 0x325774: 0xc0c955e  jal         func_325578
    ctx->pc = 0x325774u;
    SET_GPR_U32(ctx, 31, 0x32577Cu);
    ctx->pc = 0x325578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325578u, 0x325774u, 0x32577Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32577Cu;
label_32577c:
    // 0x32577c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x32577cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x325780: 0x262280b0  addiu       $v0, $s1, -0x7F50
    ctx->pc = 0x325780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934704));
    // 0x325784: 0xc0ebecc  jal         func_3AFB30
    ctx->pc = 0x325784u;
    SET_GPR_U32(ctx, 31, 0x32578Cu);
    ctx->pc = 0x325788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325784u;
    // 0x325788: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFB30u, 0x325784u, 0x32578Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32578Cu;
label_32578c:
    // 0x32578c: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x32578cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x325790: 0x24a54e70  addiu       $a1, $a1, 0x4E70
    ctx->pc = 0x325790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20080));
    // 0x325794: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x325794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x325798: 0xc0ceee0  jal         func_33BB80
    ctx->pc = 0x325798u;
    SET_GPR_U32(ctx, 31, 0x3257A0u);
    ctx->pc = 0x32579Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325798u;
    // 0x32579c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BB80u, 0x325798u, 0x3257A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3257A0u;
label_3257a0:
    // 0x3257a0: 0x264380a4  addiu       $v1, $s2, -0x7F5C
    ctx->pc = 0x3257a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294934692));
label_3257a4:
    // 0x3257a4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x3257a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3257a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3257a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3257ac: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3257acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3257b0: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x3257b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3257b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3257b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3257b8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x3257b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3257bc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3257bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3257c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3257C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3257C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3257C0u;
        // 0x3257c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3257C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3257C8u;
}
