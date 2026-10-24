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

// Function: cCockMiddleBoss_roomInit
// Address: 0x13f330 - 0x13f510
void cCockMiddleBoss_roomInit_0x13f330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCockMiddleBoss_roomInit_0x13f330");
#endif

    switch (ctx->pc) {
        case 0x13f388u: goto label_13f388;
        case 0x13f3c4u: goto label_13f3c4;
        case 0x13f3dcu: goto label_13f3dc;
        case 0x13f404u: goto label_13f404;
        case 0x13f414u: goto label_13f414;
        case 0x13f41cu: goto label_13f41c;
        case 0x13f428u: goto label_13f428;
        case 0x13f440u: goto label_13f440;
        case 0x13f460u: goto label_13f460;
        case 0x13f468u: goto label_13f468;
        case 0x13f4acu: goto label_13f4ac;
        case 0x13f4bcu: goto label_13f4bc;
        default: break;
    }

    ctx->pc = 0x13f330u;

    // 0x13f330: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x13f330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x13f334: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x13f334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x13f338: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x13f338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x13f33c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13f33cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f340: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x13f340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x13f344: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x13f344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x13f348: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x13f348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x13f34c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x13f34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x13f350: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x13f350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x13f354: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x13f354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x13f358: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x13f358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x13f35c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13f35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13f360: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x13f360u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x13f364: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x13f364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x13f368: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x13F368u;
    {
        const bool branch_taken_0x13f368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F368u;
        // 0x13f36c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f368) {
            ctx->pc = 0x13F4D4u;
            goto label_13f4d4;
        }
    }
    ctx->pc = 0x13F370u;
    // 0x13f370: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x13f370u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
    // 0x13f374: 0x8c442388  lw          $a0, 0x2388($v0)
    ctx->pc = 0x13f374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9096)));
    // 0x13f378: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13f378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f37c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x13f37cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13f380: 0xc0ab3ea  jal         func_2ACFA8
    ctx->pc = 0x13F380u;
    SET_GPR_U32(ctx, 31, 0x13F388u);
    ctx->pc = 0x13F384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F380u;
    // 0x13f384: 0x24c6e190  addiu       $a2, $a2, -0x1E70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACFA8u, 0x13F380u, 0x13F388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F388u;
label_13f388:
    // 0x13f388: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13f388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13f38c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x13f38cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13f390: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x13f390u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x13f394: 0x3c070075  lui         $a3, 0x75
    ctx->pc = 0x13f394u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)117 << 16));
    // 0x13f398: 0x26103f20  addiu       $s0, $s0, 0x3F20
    ctx->pc = 0x13f398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16160));
    // 0x13f39c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13f39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f3a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13f3a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f3a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x13f3a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f3a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x13f3a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f3ac: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x13f3acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f3b0: 0x24e74220  addiu       $a3, $a3, 0x4220
    ctx->pc = 0x13f3b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16928));
    // 0x13f3b4: 0x262600a0  addiu       $a2, $s1, 0xA0
    ctx->pc = 0x13f3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x13f3b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13f3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f3bc: 0xc08032c  jal         func_200CB0
    ctx->pc = 0x13F3BCu;
    SET_GPR_U32(ctx, 31, 0x13F3C4u);
    ctx->pc = 0x13F3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F3BCu;
    // 0x13f3c0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x13F3BCu, 0x13F3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F3C4u;
label_13f3c4:
    // 0x13f3c4: 0x263e02c0  addiu       $fp, $s1, 0x2C0
    ctx->pc = 0x13f3c4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
    // 0x13f3c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13f3c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f3cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13f3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f3d0: 0xae2200a4  sw          $v0, 0xA4($s1)
    ctx->pc = 0x13f3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
    // 0x13f3d4: 0xc080458  jal         func_201160
    ctx->pc = 0x13F3D4u;
    SET_GPR_U32(ctx, 31, 0x13F3DCu);
    ctx->pc = 0x13F3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F3D4u;
    // 0x13f3d8: 0x263702d4  addiu       $s7, $s1, 0x2D4 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 724));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201160u, 0x13F3D4u, 0x13F3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F3DCu;
label_13f3dc:
    // 0x13f3dc: 0x263602e8  addiu       $s6, $s1, 0x2E8
    ctx->pc = 0x13f3dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 744));
    // 0x13f3e0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x13f3e4: 0x8e2600a0  lw          $a2, 0xA0($s1)
    ctx->pc = 0x13f3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x13f3e8: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x13f3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x13f3ec: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x13f3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13f3f0: 0x263502fc  addiu       $s5, $s1, 0x2FC
    ctx->pc = 0x13f3f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 764));
    // 0x13f3f4: 0x26340370  addiu       $s4, $s1, 0x370
    ctx->pc = 0x13f3f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 880));
    // 0x13f3f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x13f3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13f3fc: 0xc0ab33e  jal         func_2ACCF8
    ctx->pc = 0x13F3FCu;
    SET_GPR_U32(ctx, 31, 0x13F404u);
    ctx->pc = 0x13F400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F3FCu;
    // 0x13f400: 0x263300a8  addiu       $s3, $s1, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCF8u, 0x13F3FCu, 0x13F404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F404u;
label_13f404:
    // 0x13f404: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x13f404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13f408: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13f408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f40c: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x13F40Cu;
    SET_GPR_U32(ctx, 31, 0x13F414u);
    ctx->pc = 0x13F410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F40Cu;
    // 0x13f410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x13F40Cu, 0x13F414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F414u;
label_13f414:
    // 0x13f414: 0xc0aae9e  jal         func_2ABA78
    ctx->pc = 0x13F414u;
    SET_GPR_U32(ctx, 31, 0x13F41Cu);
    ctx->pc = 0x13F418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F414u;
    // 0x13f418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABA78u, 0x13F414u, 0x13F41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F41Cu;
label_13f41c:
    // 0x13f41c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13f41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f420: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x13F420u;
    SET_GPR_U32(ctx, 31, 0x13F428u);
    ctx->pc = 0x13F424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F420u;
    // 0x13f424: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x13F420u, 0x13F428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F428u;
label_13f428:
    // 0x13f428: 0x3c01c2c8  lui         $at, 0xC2C8
    ctx->pc = 0x13f428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49864 << 16));
    // 0x13f42c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13f42cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f430: 0x0  nop
    ctx->pc = 0x13f430u;
    // NOP
    // 0x13f434: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x13f434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x13f438: 0xae200090  sw          $zero, 0x90($s1)
    ctx->pc = 0x13f438u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    // 0x13f43c: 0x0  nop
    ctx->pc = 0x13f43cu;
    // NOP
label_13f440:
    // 0x13f440: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x13f440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x13f444: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13f444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f448: 0x2428018  mult        $s0, $s2, $v0
    ctx->pc = 0x13f448u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x13f44c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x13f44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13f450: 0x261000c0  addiu       $s0, $s0, 0xC0
    ctx->pc = 0x13f450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x13f454: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x13f454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x13f458: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x13F458u;
    SET_GPR_U32(ctx, 31, 0x13F460u);
    ctx->pc = 0x13F45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F458u;
    // 0x13f45c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x13F458u, 0x13F460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F460u;
label_13f460:
    // 0x13f460: 0xc0aae9e  jal         func_2ABA78
    ctx->pc = 0x13F460u;
    SET_GPR_U32(ctx, 31, 0x13F468u);
    ctx->pc = 0x13F464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F460u;
    // 0x13f464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABA78u, 0x13F460u, 0x13F468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F468u;
label_13f468:
    // 0x13f468: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x13f468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13f46c: 0x122040  sll         $a0, $s2, 1
    ctx->pc = 0x13f46cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x13f470: 0x3c21821  addu        $v1, $fp, $v0
    ctx->pc = 0x13f470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x13f474: 0x2e22821  addu        $a1, $s7, $v0
    ctx->pc = 0x13f474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x13f478: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x13f478u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x13f47c: 0x2c23021  addu        $a2, $s6, $v0
    ctx->pc = 0x13f47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x13f480: 0xe4b40000  swc1        $f20, 0x0($a1)
    ctx->pc = 0x13f480u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x13f484: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x13f484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x13f488: 0xe4d40000  swc1        $f20, 0x0($a2)
    ctx->pc = 0x13f488u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x13f48c: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x13f48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x13f490: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x13f490u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x13f494: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13f494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13f498: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x13f498u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x13f49c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13f49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f4a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13f4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f4a4: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x13F4A4u;
    SET_GPR_U32(ctx, 31, 0x13F4ACu);
    ctx->pc = 0x13F4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F4A4u;
    // 0x13f4a8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x13F4A4u, 0x13F4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F4ACu;
label_13f4ac:
    // 0x13f4ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13f4acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f4b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13f4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f4b4: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x13F4B4u;
    SET_GPR_U32(ctx, 31, 0x13F4BCu);
    ctx->pc = 0x13F4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F4B4u;
    // 0x13f4b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x13F4B4u, 0x13F4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F4BCu;
label_13f4bc:
    // 0x13f4bc: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x13f4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f4c0: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x13f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x13f4c4: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x13f4c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13f4c8: 0x2e420005  sltiu       $v0, $s2, 0x5
    ctx->pc = 0x13f4c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x13f4cc: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x13F4CCu;
    {
        const bool branch_taken_0x13f4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F4CCu;
        // 0x13f4d0: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f4cc) {
            ctx->pc = 0x13F440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13f440;
        }
    }
    ctx->pc = 0x13F4D4u;
label_13f4d4:
    // 0x13f4d4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x13f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x13f4d8: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x13f4d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13f4dc: 0xae220090  sw          $v0, 0x90($s1)
    ctx->pc = 0x13f4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
    // 0x13f4e0: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x13f4e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13f4e4: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x13f4e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13f4e8: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x13f4e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13f4ec: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x13f4ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13f4f0: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x13f4f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13f4f4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x13f4f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13f4f8: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x13f4f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13f4fc: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x13f4fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13f500: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13f500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13f504: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x13f504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13f508: 0x3e00008  jr          $ra
    ctx->pc = 0x13F508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F508u;
        // 0x13f50c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F510u;
}
