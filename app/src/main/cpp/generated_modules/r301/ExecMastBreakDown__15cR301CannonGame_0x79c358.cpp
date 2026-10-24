#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: ExecMastBreakDown__15cR301CannonGame
// Address: 0x79c358 - 0x79c500
void ExecMastBreakDown__15cR301CannonGame_0x79c358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExecMastBreakDown__15cR301CannonGame_0x79c358");
#endif

    switch (ctx->pc) {
        case 0x79c3e0u: goto label_79c3e0;
        case 0x79c458u: goto label_79c458;
        case 0x79c464u: goto label_79c464;
        case 0x79c47cu: goto label_79c47c;
        case 0x79c48cu: goto label_79c48c;
        case 0x79c4a0u: goto label_79c4a0;
        case 0x79c4a8u: goto label_79c4a8;
        case 0x79c4c8u: goto label_79c4c8;
        default: break;
    }

    ctx->pc = 0x79c358u;

    // 0x79c358: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79c358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79c35c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79c35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x79c360: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x79c360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79c364: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x79c364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c368: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x79c368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x79c36c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79c36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79c370: 0x8e230098  lw          $v1, 0x98($s1)
    ctx->pc = 0x79c370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x79c374: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x79c374u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x79c378: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x79C378u;
    {
        const bool branch_taken_0x79c378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C378u;
        // 0x79c37c: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c378) {
            ctx->pc = 0x79C4E8u;
            goto label_79c4e8;
        }
    }
    ctx->pc = 0x79C380u;
    // 0x79c380: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79c380u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79c384: 0x2442df20  addiu       $v0, $v0, -0x20E0
    ctx->pc = 0x79c384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958880));
    // 0x79c388: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79c388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79c38c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79c38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79c390: 0x800008  jr          $a0
    ctx->pc = 0x79C390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79C398u: goto label_79c398;
            case 0x79C3F8u: goto label_79c3f8;
            case 0x79C428u: goto label_79c428;
            case 0x79C4C8u: goto label_79c4c8;
            case 0x79C4D8u: goto label_79c4d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C390u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79C398u;
label_79c398:
    // 0x79c398: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x79c398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x79c39c: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x79c39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x79c3a0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x79c3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x79c3a4: 0xae22009c  sw          $v0, 0x9C($s1)
    ctx->pc = 0x79c3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
    // 0x79c3a8: 0x908302f4  lbu         $v1, 0x2F4($a0)
    ctx->pc = 0x79c3a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 756)));
    // 0x79c3ac: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x79C3ACu;
    {
        const bool branch_taken_0x79c3ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79c3ac) {
            ctx->pc = 0x79C3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C3ACu;
            // 0x79c3b0: 0x8e220064  lw          $v0, 0x64($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C3C0u;
            goto label_79c3c0;
        }
    }
    ctx->pc = 0x79C3B4u;
    // 0x79c3b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c3b8: 0xa08202f4  sb          $v0, 0x2F4($a0)
    ctx->pc = 0x79c3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x79c3bc: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x79c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_79c3c0:
    // 0x79c3c0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79c3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79c3c4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79c3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79c3c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79c3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79c3cc: 0x8c4700f0  lw          $a3, 0xF0($v0)
    ctx->pc = 0x79c3ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79c3d0: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x79c3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x79c3d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79c3d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c3d8: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x79C3D8u;
    SET_GPR_U32(ctx, 31, 0x79C3E0u);
    ctx->pc = 0x79C3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C3D8u;
    // 0x79c3dc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x79C3D8u, 0x79C3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C3E0u;
label_79c3e0:
    // 0x79c3e0: 0x8e230098  lw          $v1, 0x98($s1)
    ctx->pc = 0x79c3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x79c3e4: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x79c3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x79c3e8: 0xae220090  sw          $v0, 0x90($s1)
    ctx->pc = 0x79c3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
    // 0x79c3ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x79c3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79c3f0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x79C3F0u;
    {
        const bool branch_taken_0x79c3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C3F0u;
        // 0x79c3f4: 0xae230098  sw          $v1, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c3f0) {
            ctx->pc = 0x79C4E8u;
            goto label_79c4e8;
        }
    }
    ctx->pc = 0x79C3F8u;
label_79c3f8:
    // 0x79c3f8: 0x9e22009c  lwu         $v0, 0x9C($s1)
    ctx->pc = 0x79c3f8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x79c3fc: 0x2117b  dsra        $v0, $v0, 5
    ctx->pc = 0x79c3fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 5);
    // 0x79c400: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79c400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79c404: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x79C404u;
    {
        const bool branch_taken_0x79c404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C404u;
        // 0x79c408: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c404) {
            ctx->pc = 0x79C4E8u;
            goto label_79c4e8;
        }
    }
    ctx->pc = 0x79C40Cu;
    // 0x79c40c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79c40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c410: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x79c410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x79c414: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x79c414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79c418: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79c418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c41c: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x79c41cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x79c420: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x79C420u;
    {
        const bool branch_taken_0x79c420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C420u;
        // 0x79c424: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c420) {
            ctx->pc = 0x79C4C0u;
            goto label_79c4c0;
        }
    }
    ctx->pc = 0x79C428u;
label_79c428:
    // 0x79c428: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x79c428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x79c42c: 0x24727470  addiu       $s2, $v1, 0x7470
    ctx->pc = 0x79c42cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 29808));
    // 0x79c430: 0x9242001c  lbu         $v0, 0x1C($s2)
    ctx->pc = 0x79c430u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x79c434: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x79c434u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x79c438: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79c438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79c43c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x79C43Cu;
    {
        const bool branch_taken_0x79c43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C43Cu;
        // 0x79c440: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c43c) {
            ctx->pc = 0x79C4E8u;
            goto label_79c4e8;
        }
    }
    ctx->pc = 0x79C444u;
    // 0x79c444: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x79c444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x79c448: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79c448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c44c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79c44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c450: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79C450u;
    SET_GPR_U32(ctx, 31, 0x79C458u);
    ctx->pc = 0x79C454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C450u;
    // 0x79c454: 0xa06202f4  sb          $v0, 0x2F4($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 756), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79C450u, 0x79C458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C458u;
label_79c458:
    // 0x79c458: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x79c458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79c45c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79C45Cu;
    SET_GPR_U32(ctx, 31, 0x79C464u);
    ctx->pc = 0x79C460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C45Cu;
    // 0x79c460: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79C45Cu, 0x79C464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C464u;
label_79c464:
    // 0x79c464: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x79c464u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x79c468: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79c468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c46c: 0x2610ae50  addiu       $s0, $s0, -0x51B0
    ctx->pc = 0x79c46cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946384));
    // 0x79c470: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79c470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c474: 0xc04cccc  jal         func_133330
    ctx->pc = 0x79C474u;
    SET_GPR_U32(ctx, 31, 0x79C47Cu);
    ctx->pc = 0x79C478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C474u;
    // 0x79c478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x79C474u, 0x79C47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C47Cu;
label_79c47c:
    // 0x79c47c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79c47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79c480: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79c480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c484: 0xc04cccc  jal         func_133330
    ctx->pc = 0x79C484u;
    SET_GPR_U32(ctx, 31, 0x79C48Cu);
    ctx->pc = 0x79C488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C484u;
    // 0x79c488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x79C484u, 0x79C48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C48Cu;
label_79c48c:
    // 0x79c48c: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x79c48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x79c490: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79c490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c494: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x79c494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x79c498: 0xc1e744c  jal         func_79D130
    ctx->pc = 0x79C498u;
    SET_GPR_U32(ctx, 31, 0x79C4A0u);
    ctx->pc = 0x79C49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C498u;
    // 0x79c49c: 0xae22009c  sw          $v0, 0x9C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79D130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79D130u, 0x79C498u, 0x79C4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C4A0u;
label_79c4a0:
    // 0x79c4a0: 0xc1e74fe  jal         func_79D3F8
    ctx->pc = 0x79C4A0u;
    SET_GPR_U32(ctx, 31, 0x79C4A8u);
    ctx->pc = 0x79C4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C4A0u;
    // 0x79c4a4: 0x26240100  addiu       $a0, $s1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79D3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79D3F8u, 0x79C4A0u, 0x79C4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C4A8u;
label_79c4a8:
    // 0x79c4a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79c4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c4ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79c4acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c4b0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x79c4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79c4b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79c4b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c4b8: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x79c4b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x79c4bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79c4bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79c4c0:
    // 0x79c4c0: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x79C4C0u;
    SET_GPR_U32(ctx, 31, 0x79C4C8u);
    ctx->pc = 0x79C4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C4C0u;
    // 0x79c4c4: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x79C4C0u, 0x79C4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C4C8u;
label_79c4c8:
    // 0x79c4c8: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x79c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x79c4cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79c4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79c4d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79C4D0u;
    {
        const bool branch_taken_0x79c4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C4D0u;
        // 0x79c4d4: 0xae220098  sw          $v0, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c4d0) {
            ctx->pc = 0x79C4E8u;
            goto label_79c4e8;
        }
    }
    ctx->pc = 0x79C4D8u;
label_79c4d8:
    // 0x79c4d8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x79c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79c4dc: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x79c4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
    // 0x79c4e0: 0xae220094  sw          $v0, 0x94($s1)
    ctx->pc = 0x79c4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
    // 0x79c4e4: 0xae200098  sw          $zero, 0x98($s1)
    ctx->pc = 0x79c4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
label_79c4e8:
    // 0x79c4e8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79c4e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79c4ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79c4ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79c4f0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x79c4f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79c4f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79c4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79c4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x79C4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C4F8u;
        // 0x79c4fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C500u;
}
} // namespace gh_r301
