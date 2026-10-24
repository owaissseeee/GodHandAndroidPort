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

// Function: func_002508D8
// Address: 0x2508d8 - 0x252070
void func_002508D8_0x2508d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002508D8_0x2508d8");
#endif

    switch (ctx->pc) {
        case 0x250974u: goto label_250974;
        case 0x250988u: goto label_250988;
        case 0x2509ccu: goto label_2509cc;
        case 0x2509e0u: goto label_2509e0;
        case 0x250a38u: goto label_250a38;
        case 0x250a98u: goto label_250a98;
        case 0x250aa8u: goto label_250aa8;
        case 0x250ac8u: goto label_250ac8;
        case 0x250b80u: goto label_250b80;
        case 0x250bacu: goto label_250bac;
        case 0x250becu: goto label_250bec;
        case 0x250c1cu: goto label_250c1c;
        case 0x250c98u: goto label_250c98;
        case 0x250d38u: goto label_250d38;
        case 0x250d64u: goto label_250d64;
        case 0x250da4u: goto label_250da4;
        case 0x250dd4u: goto label_250dd4;
        case 0x250e50u: goto label_250e50;
        case 0x250e68u: goto label_250e68;
        case 0x250e80u: goto label_250e80;
        case 0x250eacu: goto label_250eac;
        case 0x250eb8u: goto label_250eb8;
        case 0x250ec0u: goto label_250ec0;
        case 0x250f30u: goto label_250f30;
        case 0x250f54u: goto label_250f54;
        case 0x250f84u: goto label_250f84;
        case 0x250fa0u: goto label_250fa0;
        case 0x250fbcu: goto label_250fbc;
        case 0x250fe0u: goto label_250fe0;
        case 0x250ff8u: goto label_250ff8;
        case 0x251048u: goto label_251048;
        case 0x251058u: goto label_251058;
        case 0x2510bcu: goto label_2510bc;
        case 0x2510c8u: goto label_2510c8;
        case 0x2510f0u: goto label_2510f0;
        case 0x2510f8u: goto label_2510f8;
        case 0x251114u: goto label_251114;
        case 0x2511c4u: goto label_2511c4;
        case 0x251320u: goto label_251320;
        case 0x251494u: goto label_251494;
        case 0x2514c8u: goto label_2514c8;
        case 0x2514d8u: goto label_2514d8;
        case 0x2515a8u: goto label_2515a8;
        case 0x2515bcu: goto label_2515bc;
        case 0x2515e4u: goto label_2515e4;
        case 0x251628u: goto label_251628;
        case 0x25167cu: goto label_25167c;
        case 0x251688u: goto label_251688;
        case 0x2516d0u: goto label_2516d0;
        case 0x2516e0u: goto label_2516e0;
        case 0x2517ecu: goto label_2517ec;
        case 0x251924u: goto label_251924;
        case 0x251958u: goto label_251958;
        case 0x251968u: goto label_251968;
        case 0x2519e4u: goto label_2519e4;
        case 0x251a00u: goto label_251a00;
        case 0x251a98u: goto label_251a98;
        case 0x251ae8u: goto label_251ae8;
        case 0x251b00u: goto label_251b00;
        case 0x251b0cu: goto label_251b0c;
        case 0x251b78u: goto label_251b78;
        case 0x251c14u: goto label_251c14;
        case 0x251c44u: goto label_251c44;
        case 0x251c58u: goto label_251c58;
        case 0x251c94u: goto label_251c94;
        case 0x251e7cu: goto label_251e7c;
        case 0x251e90u: goto label_251e90;
        case 0x251ef0u: goto label_251ef0;
        case 0x251f10u: goto label_251f10;
        case 0x251f20u: goto label_251f20;
        case 0x251fa0u: goto label_251fa0;
        case 0x251facu: goto label_251fac;
        case 0x252018u: goto label_252018;
        default: break;
    }

    ctx->pc = 0x2508d8u;

    // 0x2508d8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2508d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2508dc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2508dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2508e0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2508e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2508e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2508e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2508e8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2508e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2508ec: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2508ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2508f0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2508f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2508f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2508f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2508f8: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x2508f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2508fc: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2508fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x250900: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x250900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x250904: 0x924402f6  lbu         $a0, 0x2F6($s2)
    ctx->pc = 0x250904u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x250908: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x250908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x25090c: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x25090cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x250910: 0x106005cd  beqz        $v1, . + 4 + (0x5CD << 2)
    ctx->pc = 0x250910u;
    {
        const bool branch_taken_0x250910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x250914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250910u;
        // 0x250914: 0xae4216d0  sw          $v0, 0x16D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250910) {
            ctx->pc = 0x252048u;
            goto label_252048;
        }
    }
    ctx->pc = 0x250918u;
    // 0x250918: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x250918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x25091c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25091cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x250920: 0x2442ec20  addiu       $v0, $v0, -0x13E0
    ctx->pc = 0x250920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962208));
    // 0x250924: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x250924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x250928: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x250928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25092c: 0x800008  jr          $a0
    ctx->pc = 0x25092Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x250934u: goto label_250934;
            case 0x250FC8u: goto label_250fc8;
            case 0x2511BCu: goto label_2511bc;
            case 0x251614u: goto label_251614;
            case 0x2516D8u: goto label_2516d8;
            case 0x2519F8u: goto label_2519f8;
            case 0x251C8Cu: goto label_251c8c;
            case 0x251E88u: goto label_251e88;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25092Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x250934u;
label_250934:
    // 0x250934: 0x8e4206ec  lw          $v0, 0x6EC($s2)
    ctx->pc = 0x250934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
    // 0x250938: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x250938u;
    {
        const bool branch_taken_0x250938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250938) {
            ctx->pc = 0x25093Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250938u;
            // 0x25093c: 0x8e420698  lw          $v0, 0x698($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25098Cu;
            goto label_25098c;
        }
    }
    ctx->pc = 0x250940u;
    // 0x250940: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x250940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x250944: 0x2444fdd9  addiu       $a0, $v0, -0x227
    ctx->pc = 0x250944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966745));
    // 0x250948: 0x2c830034  sltiu       $v1, $a0, 0x34
    ctx->pc = 0x250948u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)52) ? 1 : 0);
    // 0x25094c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25094Cu;
    {
        const bool branch_taken_0x25094c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x250950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25094Cu;
        // 0x250950: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25094c) {
            ctx->pc = 0x25096Cu;
            goto label_25096c;
        }
    }
    ctx->pc = 0x250954u;
    // 0x250954: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x250954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x250958: 0x2442ec40  addiu       $v0, $v0, -0x13C0
    ctx->pc = 0x250958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962240));
    // 0x25095c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25095cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x250960: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x250960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x250964: 0x800008  jr          $a0
    ctx->pc = 0x250964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25096Cu: goto label_25096c;
            case 0x250988u: goto label_250988;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250964u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25096Cu;
label_25096c:
    // 0x25096c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x25096Cu;
    SET_GPR_U32(ctx, 31, 0x250974u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x25096Cu, 0x250974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250974u;
label_250974:
    // 0x250974: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x250974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x250978: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x250978u;
    {
        const bool branch_taken_0x250978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x250978) {
            ctx->pc = 0x25097Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250978u;
            // 0x25097c: 0x8e420698  lw          $v0, 0x698($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25098Cu;
            goto label_25098c;
        }
    }
    ctx->pc = 0x250980u;
    // 0x250980: 0xc09ac7a  jal         func_26B1E8
    ctx->pc = 0x250980u;
    SET_GPR_U32(ctx, 31, 0x250988u);
    ctx->pc = 0x250984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250980u;
    // 0x250984: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x250980u, 0x250988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250988u;
label_250988:
    // 0x250988: 0x8e420698  lw          $v0, 0x698($s2)
    ctx->pc = 0x250988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
label_25098c:
    // 0x25098c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x25098Cu;
    {
        const bool branch_taken_0x25098c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25098Cu;
        // 0x250990: 0xae401710  sw          $zero, 0x1710($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25098c) {
            ctx->pc = 0x250A64u;
            goto label_250a64;
        }
    }
    ctx->pc = 0x250994u;
    // 0x250994: 0x924302f7  lbu         $v1, 0x2F7($s2)
    ctx->pc = 0x250994u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x250998: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x250998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25099c: 0x10700031  beq         $v1, $s0, . + 4 + (0x31 << 2)
    ctx->pc = 0x25099Cu;
    {
        const bool branch_taken_0x25099c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x25099c) {
            ctx->pc = 0x250A64u;
            goto label_250a64;
        }
    }
    ctx->pc = 0x2509A4u;
    // 0x2509a4: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2509A4u;
    {
        const bool branch_taken_0x2509a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2509A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2509A4u;
        // 0x2509a8: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2509a4) {
            ctx->pc = 0x250A3Cu;
            goto label_250a3c;
        }
    }
    ctx->pc = 0x2509ACu;
    // 0x2509ac: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2509acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2509b0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2509b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2509b4: 0xc7ad0008  lwc1        $f13, 0x8($sp)
    ctx->pc = 0x2509b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2509b8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2509b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2509bc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2509bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2509c0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2509c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2509c4: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x2509C4u;
    SET_GPR_U32(ctx, 31, 0x2509CCu);
    ctx->pc = 0x2509C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2509C4u;
    // 0x2509c8: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x2509C4u, 0x2509CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2509CCu;
label_2509cc:
    // 0x2509cc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2509ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2509d0: 0xc64c0104  lwc1        $f12, 0x104($s2)
    ctx->pc = 0x2509d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2509d4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2509d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2509d8: 0xc0b687e  jal         func_2DA1F8
    ctx->pc = 0x2509D8u;
    SET_GPR_U32(ctx, 31, 0x2509E0u);
    ctx->pc = 0x2509DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2509D8u;
    // 0x2509dc: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x2509D8u, 0x2509E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2509E0u;
label_2509e0:
    // 0x2509e0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2509e0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2509e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2509e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2509e8: 0x0  nop
    ctx->pc = 0x2509e8u;
    // NOP
    // 0x2509ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2509ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2509f0: 0x0  nop
    ctx->pc = 0x2509f0u;
    // NOP
    // 0x2509f4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2509F4u;
    {
        const bool branch_taken_0x2509f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2509F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2509F4u;
        // 0x2509f8: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2509f4) {
            ctx->pc = 0x250A00u;
            goto label_250a00;
        }
    }
    ctx->pc = 0x2509FCu;
    // 0x2509fc: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x2509fcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
label_250a00:
    // 0x250a00: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x250a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x250a04: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x250a04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x250a08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x250a08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250a0c: 0x0  nop
    ctx->pc = 0x250a0cu;
    // NOP
    // 0x250a10: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x250a10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250a14: 0x0  nop
    ctx->pc = 0x250a14u;
    // NOP
    // 0x250a18: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x250A18u;
    {
        const bool branch_taken_0x250a18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x250a18) {
            ctx->pc = 0x250A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250A18u;
            // 0x250a1c: 0x4615a000  add.s       $f0, $f20, $f21 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x250A2Cu;
            goto label_250a2c;
        }
    }
    ctx->pc = 0x250A20u;
    // 0x250a20: 0xa25002f7  sb          $s0, 0x2F7($s2)
    ctx->pc = 0x250a20u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 16));
    // 0x250a24: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x250A24u;
    {
        const bool branch_taken_0x250a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250A24u;
        // 0x250a28: 0xe6540104  swc1        $f20, 0x104($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x250a24) {
            ctx->pc = 0x250A3Cu;
            goto label_250a3c;
        }
    }
    ctx->pc = 0x250A2Cu;
label_250a2c:
    // 0x250a2c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x250a2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x250a30: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x250A30u;
    SET_GPR_U32(ctx, 31, 0x250A38u);
    ctx->pc = 0x250A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250A30u;
    // 0x250a34: 0xe6400104  swc1        $f0, 0x104($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x250A30u, 0x250A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250A38u;
label_250a38:
    // 0x250a38: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x250a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
label_250a3c:
    // 0x250a3c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x250a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x250a40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x250a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250a44: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x250a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x250a48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x250a48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x250a4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x250a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x250a50: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x250a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x250a54: 0xe6400604  swc1        $f0, 0x604($s2)
    ctx->pc = 0x250a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1540), bits); }
    // 0x250a58: 0xe64105c8  swc1        $f1, 0x5C8($s2)
    ctx->pc = 0x250a58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1480), bits); }
    // 0x250a5c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x250A5Cu;
    {
        const bool branch_taken_0x250a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250A5Cu;
        // 0x250a60: 0xe64205cc  swc1        $f2, 0x5CC($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1484), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x250a5c) {
            ctx->pc = 0x250A88u;
            goto label_250a88;
        }
    }
    ctx->pc = 0x250A64u;
label_250a64:
    // 0x250a64: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x250a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x250a68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x250a68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250a6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x250a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x250a70: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x250a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x250a74: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x250a74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x250a78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x250a78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x250a7c: 0xe6400604  swc1        $f0, 0x604($s2)
    ctx->pc = 0x250a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1540), bits); }
    // 0x250a80: 0xe64105c8  swc1        $f1, 0x5C8($s2)
    ctx->pc = 0x250a80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1480), bits); }
    // 0x250a84: 0xa24202f7  sb          $v0, 0x2F7($s2)
    ctx->pc = 0x250a84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 2));
label_250a88:
    // 0x250a88: 0xae4005c0  sw          $zero, 0x5C0($s2)
    ctx->pc = 0x250a88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1472), GPR_U32(ctx, 0));
    // 0x250a8c: 0xae4005c4  sw          $zero, 0x5C4($s2)
    ctx->pc = 0x250a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1476), GPR_U32(ctx, 0));
    // 0x250a90: 0xc09d036  jal         func_2740D8
    ctx->pc = 0x250A90u;
    SET_GPR_U32(ctx, 31, 0x250A98u);
    ctx->pc = 0x250A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250A90u;
    // 0x250a94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2740D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2740D8u, 0x250A90u, 0x250A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250A98u;
label_250a98:
    // 0x250a98: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x250A98u;
    {
        const bool branch_taken_0x250a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250a98) {
            ctx->pc = 0x250AC0u;
            goto label_250ac0;
        }
    }
    ctx->pc = 0x250AA0u;
    // 0x250aa0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x250AA0u;
    SET_GPR_U32(ctx, 31, 0x250AA8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x250AA0u, 0x250AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250AA8u;
label_250aa8:
    // 0x250aa8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x250aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x250aac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x250AACu;
    {
        const bool branch_taken_0x250aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250AACu;
        // 0x250ab0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250aac) {
            ctx->pc = 0x250ABCu;
            goto label_250abc;
        }
    }
    ctx->pc = 0x250AB4u;
    // 0x250ab4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x250AB4u;
    {
        const bool branch_taken_0x250ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250AB4u;
        // 0x250ab8: 0xa24217c3  sb          $v0, 0x17C3($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 6083), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250ab4) {
            ctx->pc = 0x250AC0u;
            goto label_250ac0;
        }
    }
    ctx->pc = 0x250ABCu;
label_250abc:
    // 0x250abc: 0xa24017c3  sb          $zero, 0x17C3($s2)
    ctx->pc = 0x250abcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6083), (uint8_t)GPR_U32(ctx, 0));
label_250ac0:
    // 0x250ac0: 0xc09d91a  jal         func_276468
    ctx->pc = 0x250AC0u;
    SET_GPR_U32(ctx, 31, 0x250AC8u);
    ctx->pc = 0x250AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250AC0u;
    // 0x250ac4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x250AC0u, 0x250AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250AC8u;
label_250ac8:
    // 0x250ac8: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x250ac8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x250acc: 0x924302f7  lbu         $v1, 0x2F7($s2)
    ctx->pc = 0x250accu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x250ad0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x250ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x250ad4: 0x10620074  beq         $v1, $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x250AD4u;
    {
        const bool branch_taken_0x250ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x250AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250AD4u;
        // 0x250ad8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250ad4) {
            ctx->pc = 0x250CA8u;
            goto label_250ca8;
        }
    }
    ctx->pc = 0x250ADCu;
    // 0x250adc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x250ADCu;
    {
        const bool branch_taken_0x250adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x250adc) {
            ctx->pc = 0x250AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250ADCu;
            // 0x250ae0: 0x8e420564  lw          $v0, 0x564($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250AF4u;
            goto label_250af4;
        }
    }
    ctx->pc = 0x250AE4u;
    // 0x250ae4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x250ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x250ae8: 0x506200db  beql        $v1, $v0, . + 4 + (0xDB << 2)
    ctx->pc = 0x250AE8u;
    {
        const bool branch_taken_0x250ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x250ae8) {
            ctx->pc = 0x250AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250AE8u;
            // 0x250aec: 0xc64005c8  lwc1        $f0, 0x5C8($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x250E58u;
            goto label_250e58;
        }
    }
    ctx->pc = 0x250AF0u;
    // 0x250af0: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x250af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
label_250af4:
    // 0x250af4: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x250af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
    // 0x250af8: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x250af8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x250afc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x250AFCu;
    {
        const bool branch_taken_0x250afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x250B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250AFCu;
        // 0x250b00: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250afc) {
            ctx->pc = 0x250B1Cu;
            goto label_250b1c;
        }
    }
    ctx->pc = 0x250B04u;
    // 0x250b04: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x250b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x250b08: 0x2442ed10  addiu       $v0, $v0, -0x12F0
    ctx->pc = 0x250b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962448));
    // 0x250b0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x250b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x250b10: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x250b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x250b14: 0x800008  jr          $a0
    ctx->pc = 0x250B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x250B1Cu: goto label_250b1c;
            case 0x250B2Cu: goto label_250b2c;
            case 0x250B3Cu: goto label_250b3c;
            case 0x250B4Cu: goto label_250b4c;
            case 0x250B5Cu: goto label_250b5c;
            case 0x250BB4u: goto label_250bb4;
            case 0x250BC4u: goto label_250bc4;
            case 0x250BF4u: goto label_250bf4;
            case 0x250C24u: goto label_250c24;
            case 0x250C34u: goto label_250c34;
            case 0x250C44u: goto label_250c44;
            case 0x250C54u: goto label_250c54;
            case 0x250C64u: goto label_250c64;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250B14u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x250B1Cu;
label_250b1c:
    // 0x250b1c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x250b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x250b20: 0x8c430570  lw          $v1, 0x570($v0)
    ctx->pc = 0x250b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1392)));
    // 0x250b24: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x250B24u;
    {
        const bool branch_taken_0x250b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B24u;
        // 0x250b28: 0x8c440574  lw          $a0, 0x574($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250b24) {
            ctx->pc = 0x250C70u;
            goto label_250c70;
        }
    }
    ctx->pc = 0x250B2Cu;
label_250b2c:
    // 0x250b2c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x250b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x250b30: 0x8c430570  lw          $v1, 0x570($v0)
    ctx->pc = 0x250b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1392)));
    // 0x250b34: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x250B34u;
    {
        const bool branch_taken_0x250b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B34u;
        // 0x250b38: 0x8c440574  lw          $a0, 0x574($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250b34) {
            ctx->pc = 0x250C70u;
            goto label_250c70;
        }
    }
    ctx->pc = 0x250B3Cu;
label_250b3c:
    // 0x250b3c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x250b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x250b40: 0x8c430e6c  lw          $v1, 0xE6C($v0)
    ctx->pc = 0x250b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3692)));
    // 0x250b44: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x250B44u;
    {
        const bool branch_taken_0x250b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B44u;
        // 0x250b48: 0x8c440e70  lw          $a0, 0xE70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250b44) {
            ctx->pc = 0x250C70u;
            goto label_250c70;
        }
    }
    ctx->pc = 0x250B4Cu;
label_250b4c:
    // 0x250b4c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x250b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x250b50: 0x8c430a28  lw          $v1, 0xA28($v0)
    ctx->pc = 0x250b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2600)));
    // 0x250b54: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x250B54u;
    {
        const bool branch_taken_0x250b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B54u;
        // 0x250b58: 0x8c440a2c  lw          $a0, 0xA2C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250b54) {
            ctx->pc = 0x250C70u;
            goto label_250c70;
        }
    }
    ctx->pc = 0x250B5Cu;
label_250b5c:
    // 0x250b5c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x250b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x250b60: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x250b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x250b64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x250b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250b68: 0x2470ee00  addiu       $s0, $v1, -0x1200
    ctx->pc = 0x250b68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962688));
    // 0x250b6c: 0x8c460a28  lw          $a2, 0xA28($v0)
    ctx->pc = 0x250b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2600)));
    // 0x250b70: 0x8c450a2c  lw          $a1, 0xA2C($v0)
    ctx->pc = 0x250b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2604)));
    // 0x250b74: 0xc29821  addu        $s3, $a2, $v0
    ctx->pc = 0x250b74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x250b78: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x250B78u;
    SET_GPR_U32(ctx, 31, 0x250B80u);
    ctx->pc = 0x250B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250B78u;
    // 0x250b7c: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x250B78u, 0x250B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250B80u;
label_250b80:
    // 0x250b80: 0x24420023  addiu       $v0, $v0, 0x23
    ctx->pc = 0x250b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
    // 0x250b84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x250b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250b88: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x250b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x250b8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x250b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x250b90: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x250b90u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x250b94: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x250b94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250b98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x250b98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250b9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x250b9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250ba0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x250ba0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250ba4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x250BA4u;
    SET_GPR_U32(ctx, 31, 0x250BACu);
    ctx->pc = 0x250BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250BA4u;
    // 0x250ba8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x250BA4u, 0x250BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250BACu;
label_250bac:
    // 0x250bac: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x250BACu;
    {
        const bool branch_taken_0x250bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250bac) {
            ctx->pc = 0x250C78u;
            goto label_250c78;
        }
    }
    ctx->pc = 0x250BB4u;
label_250bb4:
    // 0x250bb4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x250bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x250bb8: 0x8c433164  lw          $v1, 0x3164($v0)
    ctx->pc = 0x250bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12644)));
    // 0x250bbc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x250BBCu;
    {
        const bool branch_taken_0x250bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250BBCu;
        // 0x250bc0: 0x8c443168  lw          $a0, 0x3168($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250bbc) {
            ctx->pc = 0x250C70u;
            goto label_250c70;
        }
    }
    ctx->pc = 0x250BC4u;
label_250bc4:
    // 0x250bc4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x250bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x250bc8: 0x8e470740  lw          $a3, 0x740($s2)
    ctx->pc = 0x250bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1856)));
    // 0x250bcc: 0x8c433338  lw          $v1, 0x3338($v0)
    ctx->pc = 0x250bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13112)));
    // 0x250bd0: 0x8c44333c  lw          $a0, 0x333C($v0)
    ctx->pc = 0x250bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13116)));
    // 0x250bd4: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x250bd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x250bd8: 0x10e00027  beqz        $a3, . + 4 + (0x27 << 2)
    ctx->pc = 0x250BD8u;
    {
        const bool branch_taken_0x250bd8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x250BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250BD8u;
        // 0x250bdc: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250bd8) {
            ctx->pc = 0x250C78u;
            goto label_250c78;
        }
    }
    ctx->pc = 0x250BE0u;
    // 0x250be0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x250be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250be4: 0xc09f6d4  jal         func_27DB50
    ctx->pc = 0x250BE4u;
    SET_GPR_U32(ctx, 31, 0x250BECu);
    ctx->pc = 0x250BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250BE4u;
    // 0x250be8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DB50u, 0x250BE4u, 0x250BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250BECu;
label_250bec:
    // 0x250bec: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x250BECu;
    {
        const bool branch_taken_0x250bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250bec) {
            ctx->pc = 0x250C78u;
            goto label_250c78;
        }
    }
    ctx->pc = 0x250BF4u;
label_250bf4:
    // 0x250bf4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x250bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x250bf8: 0x8e470744  lw          $a3, 0x744($s2)
    ctx->pc = 0x250bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1860)));
    // 0x250bfc: 0x8c433850  lw          $v1, 0x3850($v0)
    ctx->pc = 0x250bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14416)));
    // 0x250c00: 0x8c443854  lw          $a0, 0x3854($v0)
    ctx->pc = 0x250c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14420)));
    // 0x250c04: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x250c04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x250c08: 0x10e0001b  beqz        $a3, . + 4 + (0x1B << 2)
    ctx->pc = 0x250C08u;
    {
        const bool branch_taken_0x250c08 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x250C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C08u;
        // 0x250c0c: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c08) {
            ctx->pc = 0x250C78u;
            goto label_250c78;
        }
    }
    ctx->pc = 0x250C10u;
    // 0x250c10: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x250c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250c14: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x250C14u;
    SET_GPR_U32(ctx, 31, 0x250C1Cu);
    ctx->pc = 0x250C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250C14u;
    // 0x250c18: 0x2405002a  addiu       $a1, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x250C14u, 0x250C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250C1Cu;
label_250c1c:
    // 0x250c1c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x250C1Cu;
    {
        const bool branch_taken_0x250c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250c1c) {
            ctx->pc = 0x250C78u;
            goto label_250c78;
        }
    }
    ctx->pc = 0x250C24u;
label_250c24:
    // 0x250c24: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x250c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x250c28: 0x8c4316d0  lw          $v1, 0x16D0($v0)
    ctx->pc = 0x250c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5840)));
    // 0x250c2c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x250C2Cu;
    {
        const bool branch_taken_0x250c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C2Cu;
        // 0x250c30: 0x8c4416d4  lw          $a0, 0x16D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c2c) {
            ctx->pc = 0x250C70u;
            goto label_250c70;
        }
    }
    ctx->pc = 0x250C34u;
label_250c34:
    // 0x250c34: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x250c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x250c38: 0x8c4316d0  lw          $v1, 0x16D0($v0)
    ctx->pc = 0x250c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5840)));
    // 0x250c3c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x250C3Cu;
    {
        const bool branch_taken_0x250c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C3Cu;
        // 0x250c40: 0x8c4416d4  lw          $a0, 0x16D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c3c) {
            ctx->pc = 0x250C70u;
            goto label_250c70;
        }
    }
    ctx->pc = 0x250C44u;
label_250c44:
    // 0x250c44: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x250c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x250c48: 0x8c430570  lw          $v1, 0x570($v0)
    ctx->pc = 0x250c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1392)));
    // 0x250c4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x250C4Cu;
    {
        const bool branch_taken_0x250c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C4Cu;
        // 0x250c50: 0x8c440574  lw          $a0, 0x574($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c4c) {
            ctx->pc = 0x250C70u;
            goto label_250c70;
        }
    }
    ctx->pc = 0x250C54u;
label_250c54:
    // 0x250c54: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x250c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x250c58: 0x8c432e84  lw          $v1, 0x2E84($v0)
    ctx->pc = 0x250c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11908)));
    // 0x250c5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x250C5Cu;
    {
        const bool branch_taken_0x250c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C5Cu;
        // 0x250c60: 0x8c442e88  lw          $a0, 0x2E88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c5c) {
            ctx->pc = 0x250C70u;
            goto label_250c70;
        }
    }
    ctx->pc = 0x250C64u;
label_250c64:
    // 0x250c64: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x250c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x250c68: 0x8c431298  lw          $v1, 0x1298($v0)
    ctx->pc = 0x250c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
    // 0x250c6c: 0x8c44129c  lw          $a0, 0x129C($v0)
    ctx->pc = 0x250c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4764)));
label_250c70:
    // 0x250c70: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x250c70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x250c74: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x250c74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_250c78:
    // 0x250c78: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x250c78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x250c7c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x250c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250c80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x250c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250c84: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x250c84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250c88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x250c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250c8c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x250c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x250c90: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x250C90u;
    SET_GPR_U32(ctx, 31, 0x250C98u);
    ctx->pc = 0x250C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250C90u;
    // 0x250c94: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x250C90u, 0x250C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250C98u;
label_250c98:
    // 0x250c98: 0xc64005c8  lwc1        $f0, 0x5C8($s2)
    ctx->pc = 0x250c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250c9c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x250c9cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x250ca0: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x250CA0u;
    {
        const bool branch_taken_0x250ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CA0u;
        // 0x250ca4: 0xe64005c8  swc1        $f0, 0x5C8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x250ca0) {
            ctx->pc = 0x250E68u;
            goto label_250e68;
        }
    }
    ctx->pc = 0x250CA8u;
label_250ca8:
    // 0x250ca8: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x250ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x250cac: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x250cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
    // 0x250cb0: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x250cb0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x250cb4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x250CB4u;
    {
        const bool branch_taken_0x250cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x250CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CB4u;
        // 0x250cb8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250cb4) {
            ctx->pc = 0x250CD4u;
            goto label_250cd4;
        }
    }
    ctx->pc = 0x250CBCu;
    // 0x250cbc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x250cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x250cc0: 0x2442ef10  addiu       $v0, $v0, -0x10F0
    ctx->pc = 0x250cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962960));
    // 0x250cc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x250cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x250cc8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x250cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x250ccc: 0x800008  jr          $a0
    ctx->pc = 0x250CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x250CD4u: goto label_250cd4;
            case 0x250CE4u: goto label_250ce4;
            case 0x250CF4u: goto label_250cf4;
            case 0x250D04u: goto label_250d04;
            case 0x250D14u: goto label_250d14;
            case 0x250D6Cu: goto label_250d6c;
            case 0x250D7Cu: goto label_250d7c;
            case 0x250DACu: goto label_250dac;
            case 0x250DDCu: goto label_250ddc;
            case 0x250DECu: goto label_250dec;
            case 0x250DFCu: goto label_250dfc;
            case 0x250E0Cu: goto label_250e0c;
            case 0x250E1Cu: goto label_250e1c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250CCCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x250CD4u;
label_250cd4:
    // 0x250cd4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x250cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x250cd8: 0x8c430594  lw          $v1, 0x594($v0)
    ctx->pc = 0x250cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1428)));
    // 0x250cdc: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x250CDCu;
    {
        const bool branch_taken_0x250cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CDCu;
        // 0x250ce0: 0x8c440598  lw          $a0, 0x598($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250cdc) {
            ctx->pc = 0x250E28u;
            goto label_250e28;
        }
    }
    ctx->pc = 0x250CE4u;
label_250ce4:
    // 0x250ce4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x250ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x250ce8: 0x8c430594  lw          $v1, 0x594($v0)
    ctx->pc = 0x250ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1428)));
    // 0x250cec: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x250CECu;
    {
        const bool branch_taken_0x250cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CECu;
        // 0x250cf0: 0x8c440598  lw          $a0, 0x598($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250cec) {
            ctx->pc = 0x250E28u;
            goto label_250e28;
        }
    }
    ctx->pc = 0x250CF4u;
label_250cf4:
    // 0x250cf4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x250cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x250cf8: 0x8c430e8c  lw          $v1, 0xE8C($v0)
    ctx->pc = 0x250cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3724)));
    // 0x250cfc: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x250CFCu;
    {
        const bool branch_taken_0x250cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CFCu;
        // 0x250d00: 0x8c440e90  lw          $a0, 0xE90($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250cfc) {
            ctx->pc = 0x250E28u;
            goto label_250e28;
        }
    }
    ctx->pc = 0x250D04u;
label_250d04:
    // 0x250d04: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x250d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x250d08: 0x8c430a48  lw          $v1, 0xA48($v0)
    ctx->pc = 0x250d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2632)));
    // 0x250d0c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x250D0Cu;
    {
        const bool branch_taken_0x250d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D0Cu;
        // 0x250d10: 0x8c440a4c  lw          $a0, 0xA4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250d0c) {
            ctx->pc = 0x250E28u;
            goto label_250e28;
        }
    }
    ctx->pc = 0x250D14u;
label_250d14:
    // 0x250d14: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x250d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x250d18: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x250d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x250d1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x250d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250d20: 0x2470ee00  addiu       $s0, $v1, -0x1200
    ctx->pc = 0x250d20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962688));
    // 0x250d24: 0x8c460a48  lw          $a2, 0xA48($v0)
    ctx->pc = 0x250d24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2632)));
    // 0x250d28: 0x8c450a4c  lw          $a1, 0xA4C($v0)
    ctx->pc = 0x250d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2636)));
    // 0x250d2c: 0xc29821  addu        $s3, $a2, $v0
    ctx->pc = 0x250d2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x250d30: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x250D30u;
    SET_GPR_U32(ctx, 31, 0x250D38u);
    ctx->pc = 0x250D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250D30u;
    // 0x250d34: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x250D30u, 0x250D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250D38u;
label_250d38:
    // 0x250d38: 0x24420023  addiu       $v0, $v0, 0x23
    ctx->pc = 0x250d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
    // 0x250d3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x250d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250d40: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x250d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x250d44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x250d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x250d48: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x250d48u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x250d4c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x250d4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250d50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x250d50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250d54: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x250d54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250d58: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x250d58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250d5c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x250D5Cu;
    SET_GPR_U32(ctx, 31, 0x250D64u);
    ctx->pc = 0x250D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250D5Cu;
    // 0x250d60: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x250D5Cu, 0x250D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250D64u;
label_250d64:
    // 0x250d64: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x250D64u;
    {
        const bool branch_taken_0x250d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250d64) {
            ctx->pc = 0x250E30u;
            goto label_250e30;
        }
    }
    ctx->pc = 0x250D6Cu;
label_250d6c:
    // 0x250d6c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x250d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x250d70: 0x8c433164  lw          $v1, 0x3164($v0)
    ctx->pc = 0x250d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12644)));
    // 0x250d74: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x250D74u;
    {
        const bool branch_taken_0x250d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D74u;
        // 0x250d78: 0x8c443168  lw          $a0, 0x3168($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250d74) {
            ctx->pc = 0x250E28u;
            goto label_250e28;
        }
    }
    ctx->pc = 0x250D7Cu;
label_250d7c:
    // 0x250d7c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x250d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x250d80: 0x8e470740  lw          $a3, 0x740($s2)
    ctx->pc = 0x250d80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1856)));
    // 0x250d84: 0x8c433350  lw          $v1, 0x3350($v0)
    ctx->pc = 0x250d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13136)));
    // 0x250d88: 0x8c443354  lw          $a0, 0x3354($v0)
    ctx->pc = 0x250d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13140)));
    // 0x250d8c: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x250d8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x250d90: 0x10e00027  beqz        $a3, . + 4 + (0x27 << 2)
    ctx->pc = 0x250D90u;
    {
        const bool branch_taken_0x250d90 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x250D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D90u;
        // 0x250d94: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250d90) {
            ctx->pc = 0x250E30u;
            goto label_250e30;
        }
    }
    ctx->pc = 0x250D98u;
    // 0x250d98: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x250d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250d9c: 0xc09f6d4  jal         func_27DB50
    ctx->pc = 0x250D9Cu;
    SET_GPR_U32(ctx, 31, 0x250DA4u);
    ctx->pc = 0x250DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250D9Cu;
    // 0x250da0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DB50u, 0x250D9Cu, 0x250DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250DA4u;
label_250da4:
    // 0x250da4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x250DA4u;
    {
        const bool branch_taken_0x250da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250da4) {
            ctx->pc = 0x250E30u;
            goto label_250e30;
        }
    }
    ctx->pc = 0x250DACu;
label_250dac:
    // 0x250dac: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x250dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x250db0: 0x8e470744  lw          $a3, 0x744($s2)
    ctx->pc = 0x250db0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1860)));
    // 0x250db4: 0x8c433868  lw          $v1, 0x3868($v0)
    ctx->pc = 0x250db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14440)));
    // 0x250db8: 0x8c44386c  lw          $a0, 0x386C($v0)
    ctx->pc = 0x250db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14444)));
    // 0x250dbc: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x250dbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x250dc0: 0x10e0001b  beqz        $a3, . + 4 + (0x1B << 2)
    ctx->pc = 0x250DC0u;
    {
        const bool branch_taken_0x250dc0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x250DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250DC0u;
        // 0x250dc4: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250dc0) {
            ctx->pc = 0x250E30u;
            goto label_250e30;
        }
    }
    ctx->pc = 0x250DC8u;
    // 0x250dc8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x250dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250dcc: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x250DCCu;
    SET_GPR_U32(ctx, 31, 0x250DD4u);
    ctx->pc = 0x250DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250DCCu;
    // 0x250dd0: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x250DCCu, 0x250DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250DD4u;
label_250dd4:
    // 0x250dd4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x250DD4u;
    {
        const bool branch_taken_0x250dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250dd4) {
            ctx->pc = 0x250E30u;
            goto label_250e30;
        }
    }
    ctx->pc = 0x250DDCu;
label_250ddc:
    // 0x250ddc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x250ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x250de0: 0x8c4316f0  lw          $v1, 0x16F0($v0)
    ctx->pc = 0x250de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5872)));
    // 0x250de4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x250DE4u;
    {
        const bool branch_taken_0x250de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250DE4u;
        // 0x250de8: 0x8c4416f4  lw          $a0, 0x16F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250de4) {
            ctx->pc = 0x250E28u;
            goto label_250e28;
        }
    }
    ctx->pc = 0x250DECu;
label_250dec:
    // 0x250dec: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x250decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x250df0: 0x8c4316f0  lw          $v1, 0x16F0($v0)
    ctx->pc = 0x250df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5872)));
    // 0x250df4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x250DF4u;
    {
        const bool branch_taken_0x250df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250DF4u;
        // 0x250df8: 0x8c4416f4  lw          $a0, 0x16F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250df4) {
            ctx->pc = 0x250E28u;
            goto label_250e28;
        }
    }
    ctx->pc = 0x250DFCu;
label_250dfc:
    // 0x250dfc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x250dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x250e00: 0x8c430594  lw          $v1, 0x594($v0)
    ctx->pc = 0x250e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1428)));
    // 0x250e04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x250E04u;
    {
        const bool branch_taken_0x250e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E04u;
        // 0x250e08: 0x8c440598  lw          $a0, 0x598($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250e04) {
            ctx->pc = 0x250E28u;
            goto label_250e28;
        }
    }
    ctx->pc = 0x250E0Cu;
label_250e0c:
    // 0x250e0c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x250e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x250e10: 0x8c432e84  lw          $v1, 0x2E84($v0)
    ctx->pc = 0x250e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11908)));
    // 0x250e14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x250E14u;
    {
        const bool branch_taken_0x250e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E14u;
        // 0x250e18: 0x8c442e88  lw          $a0, 0x2E88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250e14) {
            ctx->pc = 0x250E28u;
            goto label_250e28;
        }
    }
    ctx->pc = 0x250E1Cu;
label_250e1c:
    // 0x250e1c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x250e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x250e20: 0x8c4312b8  lw          $v1, 0x12B8($v0)
    ctx->pc = 0x250e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4792)));
    // 0x250e24: 0x8c4412bc  lw          $a0, 0x12BC($v0)
    ctx->pc = 0x250e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4796)));
label_250e28:
    // 0x250e28: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x250e28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x250e2c: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x250e2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_250e30:
    // 0x250e30: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x250e30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x250e34: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x250e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250e38: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x250e38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250e3c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x250e3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250e40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x250e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250e44: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x250e44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x250e48: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x250E48u;
    SET_GPR_U32(ctx, 31, 0x250E50u);
    ctx->pc = 0x250E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250E48u;
    // 0x250e4c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x250E48u, 0x250E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E50u;
label_250e50:
    // 0x250e50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x250E50u;
    {
        const bool branch_taken_0x250e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E50u;
        // 0x250e54: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250e50) {
            ctx->pc = 0x250E6Cu;
            goto label_250e6c;
        }
    }
    ctx->pc = 0x250E58u;
label_250e58:
    // 0x250e58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x250e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250e5c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x250e5cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x250e60: 0xc055f06  jal         func_157C18
    ctx->pc = 0x250E60u;
    SET_GPR_U32(ctx, 31, 0x250E68u);
    ctx->pc = 0x250E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250E60u;
    // 0x250e64: 0xe64005c8  swc1        $f0, 0x5C8($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1480), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x250E60u, 0x250E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E68u;
label_250e68:
    // 0x250e68: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x250e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_250e6c:
    // 0x250e6c: 0xae400600  sw          $zero, 0x600($s2)
    ctx->pc = 0x250e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1536), GPR_U32(ctx, 0));
    // 0x250e70: 0xae4005f4  sw          $zero, 0x5F4($s2)
    ctx->pc = 0x250e70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 0));
    // 0x250e74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x250e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250e78: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x250E78u;
    SET_GPR_U32(ctx, 31, 0x250E80u);
    ctx->pc = 0x250E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250E78u;
    // 0x250e7c: 0x2450ee00  addiu       $s0, $v0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x250E78u, 0x250E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E80u;
label_250e80:
    // 0x250e80: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x250e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x250e84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x250e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250e88: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x250e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x250e8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x250e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x250e90: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x250e90u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x250e94: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x250e94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250e98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x250e98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250e9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x250e9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250ea0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x250ea0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250ea4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x250EA4u;
    SET_GPR_U32(ctx, 31, 0x250EACu);
    ctx->pc = 0x250EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250EA4u;
    // 0x250ea8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x250EA4u, 0x250EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250EACu;
label_250eac:
    // 0x250eac: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x250eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x250eb0: 0xc0a4ba0  jal         func_292E80
    ctx->pc = 0x250EB0u;
    SET_GPR_U32(ctx, 31, 0x250EB8u);
    ctx->pc = 0x250EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250EB0u;
    // 0x250eb4: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292E80u, 0x250EB0u, 0x250EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250EB8u;
label_250eb8:
    // 0x250eb8: 0xc09c5f4  jal         func_2717D0
    ctx->pc = 0x250EB8u;
    SET_GPR_U32(ctx, 31, 0x250EC0u);
    ctx->pc = 0x250EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250EB8u;
    // 0x250ebc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717D0u, 0x250EB8u, 0x250EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250EC0u;
label_250ec0:
    // 0x250ec0: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x250ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x250ec4: 0x24020226  addiu       $v0, $zero, 0x226
    ctx->pc = 0x250ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    // 0x250ec8: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x250EC8u;
    {
        const bool branch_taken_0x250ec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x250ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250EC8u;
        // 0x250ecc: 0x28620227  slti        $v0, $v1, 0x227 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)551) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250ec8) {
            ctx->pc = 0x250F5Cu;
            goto label_250f5c;
        }
    }
    ctx->pc = 0x250ED0u;
    // 0x250ed0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x250ED0u;
    {
        const bool branch_taken_0x250ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250ED0u;
        // 0x250ed4: 0x28620212  slti        $v0, $v1, 0x212 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)530) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250ed0) {
            ctx->pc = 0x250EF0u;
            goto label_250ef0;
        }
    }
    ctx->pc = 0x250ED8u;
    // 0x250ed8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x250ED8u;
    {
        const bool branch_taken_0x250ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250ED8u;
        // 0x250edc: 0x2862020f  slti        $v0, $v1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)527) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250ed8) {
            ctx->pc = 0x250F04u;
            goto label_250f04;
        }
    }
    ctx->pc = 0x250EE0u;
    // 0x250ee0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x250EE0u;
    {
        const bool branch_taken_0x250ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x250EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250EE0u;
        // 0x250ee4: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250ee0) {
            ctx->pc = 0x250F08u;
            goto label_250f08;
        }
    }
    ctx->pc = 0x250EE8u;
    // 0x250ee8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x250EE8u;
    {
        const bool branch_taken_0x250ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250EE8u;
        // 0x250eec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250ee8) {
            ctx->pc = 0x250F64u;
            goto label_250f64;
        }
    }
    ctx->pc = 0x250EF0u;
label_250ef0:
    // 0x250ef0: 0x28620275  slti        $v0, $v1, 0x275
    ctx->pc = 0x250ef0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
    // 0x250ef4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x250EF4u;
    {
        const bool branch_taken_0x250ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250EF4u;
        // 0x250ef8: 0x28620270  slti        $v0, $v1, 0x270 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)624) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250ef4) {
            ctx->pc = 0x250F04u;
            goto label_250f04;
        }
    }
    ctx->pc = 0x250EFCu;
    // 0x250efc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x250EFCu;
    {
        const bool branch_taken_0x250efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250EFCu;
        // 0x250f00: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250efc) {
            ctx->pc = 0x250F60u;
            goto label_250f60;
        }
    }
    ctx->pc = 0x250F04u;
label_250f04:
    // 0x250f04: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x250f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_250f08:
    // 0x250f08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x250f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250f0c: 0x2450ee00  addiu       $s0, $v0, -0x1200
    ctx->pc = 0x250f0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x250f10: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x250f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x250f14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x250f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250f18: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x250f18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250f1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x250f1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250f20: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x250f20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250f24: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x250f24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250f28: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x250F28u;
    SET_GPR_U32(ctx, 31, 0x250F30u);
    ctx->pc = 0x250F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250F28u;
    // 0x250f2c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x250F28u, 0x250F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250F30u;
label_250f30:
    // 0x250f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x250f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250f34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x250f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250f38: 0x2406002e  addiu       $a2, $zero, 0x2E
    ctx->pc = 0x250f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x250f3c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x250f3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250f40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x250f40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250f44: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x250f44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250f48: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x250f48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250f4c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x250F4Cu;
    SET_GPR_U32(ctx, 31, 0x250F54u);
    ctx->pc = 0x250F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250F4Cu;
    // 0x250f50: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x250F4Cu, 0x250F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250F54u;
label_250f54:
    // 0x250f54: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x250F54u;
    {
        const bool branch_taken_0x250f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F54u;
        // 0x250f58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250f54) {
            ctx->pc = 0x250F88u;
            goto label_250f88;
        }
    }
    ctx->pc = 0x250F5Cu;
label_250f5c:
    // 0x250f5c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x250f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_250f60:
    // 0x250f60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x250f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_250f64:
    // 0x250f64: 0x2444ee00  addiu       $a0, $v0, -0x1200
    ctx->pc = 0x250f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x250f68: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x250f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x250f6c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x250f6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250f70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x250f70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250f74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x250f74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250f78: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x250f78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250f7c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x250F7Cu;
    SET_GPR_U32(ctx, 31, 0x250F84u);
    ctx->pc = 0x250F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250F7Cu;
    // 0x250f80: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x250F7Cu, 0x250F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250F84u;
label_250f84:
    // 0x250f84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x250f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_250f88:
    // 0x250f88: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x250f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x250f8c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x250f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x250f90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x250f90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250f94: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x250f94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x250f98: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x250F98u;
    SET_GPR_U32(ctx, 31, 0x250FA0u);
    ctx->pc = 0x250F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250F98u;
    // 0x250f9c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x250F98u, 0x250FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250FA0u;
label_250fa0:
    // 0x250fa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x250fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250fa4: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x250fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x250fa8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x250fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x250fac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x250facu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250fb0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x250fb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x250fb4: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x250FB4u;
    SET_GPR_U32(ctx, 31, 0x250FBCu);
    ctx->pc = 0x250FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250FB4u;
    // 0x250fb8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x250FB4u, 0x250FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250FBCu;
label_250fbc:
    // 0x250fbc: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x250fbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x250fc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x250fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x250fc4: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x250fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_250fc8:
    // 0x250fc8: 0x925002f7  lbu         $s0, 0x2F7($s2)
    ctx->pc = 0x250fc8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x250fcc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x250fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x250fd0: 0x1602001f  bne         $s0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x250FD0u;
    {
        const bool branch_taken_0x250fd0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x250fd0) {
            ctx->pc = 0x251050u;
            goto label_251050;
        }
    }
    ctx->pc = 0x250FD8u;
    // 0x250fd8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x250FD8u;
    SET_GPR_U32(ctx, 31, 0x250FE0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x250FD8u, 0x250FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250FE0u;
label_250fe0:
    // 0x250fe0: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x250fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x250fe4: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x250fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x250fe8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x250fe8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x250fec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x250fecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x250ff0: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x250FF0u;
    SET_GPR_U32(ctx, 31, 0x250FF8u);
    ctx->pc = 0x250FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250FF0u;
    // 0x250ff4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x250FF0u, 0x250FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250FF8u;
label_250ff8:
    // 0x250ff8: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x250ff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x250ffc: 0x14500014  bne         $v0, $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x250FFCu;
    {
        const bool branch_taken_0x250ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x250ffc) {
            ctx->pc = 0x251050u;
            goto label_251050;
        }
    }
    ctx->pc = 0x251004u;
    // 0x251004: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x251004u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x251008: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x251008u;
    {
        const bool branch_taken_0x251008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251008u;
        // 0x25100c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251008) {
            ctx->pc = 0x25101Cu;
            goto label_25101c;
        }
    }
    ctx->pc = 0x251010u;
    // 0x251010: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x251010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x251014: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x251014u;
    {
        const bool branch_taken_0x251014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251014u;
        // 0x251018: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251014) {
            ctx->pc = 0x251020u;
            goto label_251020;
        }
    }
    ctx->pc = 0x25101Cu;
label_25101c:
    // 0x25101c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x25101cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_251020:
    // 0x251020: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x251020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251024: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x251024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x251028: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x251028u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x25102c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x25102cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x251030: 0xc6010108  lwc1        $f1, 0x108($s0)
    ctx->pc = 0x251030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251034: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x251034u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x251038: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x251038u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25103c: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x25103cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x251040: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x251040u;
    SET_GPR_U32(ctx, 31, 0x251048u);
    ctx->pc = 0x251044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251040u;
    // 0x251044: 0xe6010108  swc1        $f1, 0x108($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x251040u, 0x251048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251048u;
label_251048:
    // 0x251048: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x251048u;
    {
        const bool branch_taken_0x251048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251048u;
        // 0x25104c: 0xe6000108  swc1        $f0, 0x108($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x251048) {
            ctx->pc = 0x251058u;
            goto label_251058;
        }
    }
    ctx->pc = 0x251050u;
label_251050:
    // 0x251050: 0xc055f06  jal         func_157C18
    ctx->pc = 0x251050u;
    SET_GPR_U32(ctx, 31, 0x251058u);
    ctx->pc = 0x251054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251050u;
    // 0x251054: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x251050u, 0x251058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251058u;
label_251058:
    // 0x251058: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x251058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25105c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x25105cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x251060: 0x264205c0  addiu       $v0, $s2, 0x5C0
    ctx->pc = 0x251060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
    // 0x251064: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x251064u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x251068: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x251068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25106c: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x25106cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251070: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x251070u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x251074: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x251074u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x251078: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x251078u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25107c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x25107cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x251080: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x251080u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x251084: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x251084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x251088: 0x26420330  addiu       $v0, $s2, 0x330
    ctx->pc = 0x251088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
    // 0x25108c: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x25108Cu;
    {
        const bool branch_taken_0x25108c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x251090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25108Cu;
        // 0x251090: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25108c) {
            ctx->pc = 0x2510A8u;
            goto label_2510a8;
        }
    }
    ctx->pc = 0x251094u;
    // 0x251094: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x251094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251098: 0xe6400330  swc1        $f0, 0x330($s2)
    ctx->pc = 0x251098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 816), bits); }
    // 0x25109c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x25109cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2510a0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2510a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2510a4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2510a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2510a8:
    // 0x2510a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2510a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2510ac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2510acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2510b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2510b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2510b4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2510B4u;
    SET_GPR_U32(ctx, 31, 0x2510BCu);
    ctx->pc = 0x2510B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2510B4u;
    // 0x2510b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2510B4u, 0x2510BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2510BCu;
label_2510bc:
    // 0x2510bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2510bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2510c0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2510C0u;
    SET_GPR_U32(ctx, 31, 0x2510C8u);
    ctx->pc = 0x2510C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2510C0u;
    // 0x2510c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2510C0u, 0x2510C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2510C8u;
label_2510c8:
    // 0x2510c8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2510c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2510cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2510ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2510d0: 0xc640054c  lwc1        $f0, 0x54C($s2)
    ctx->pc = 0x2510d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2510d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2510d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2510d8: 0x0  nop
    ctx->pc = 0x2510d8u;
    // NOP
    // 0x2510dc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2510DCu;
    {
        const bool branch_taken_0x2510dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2510dc) {
            ctx->pc = 0x2510E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2510DCu;
            // 0x2510e0: 0xe641054c  swc1        $f1, 0x54C($s2) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2510E4u;
            goto label_2510e4;
        }
    }
    ctx->pc = 0x2510E4u;
label_2510e4:
    // 0x2510e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2510e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2510e8: 0xc0989d4  jal         func_262750
    ctx->pc = 0x2510E8u;
    SET_GPR_U32(ctx, 31, 0x2510F0u);
    ctx->pc = 0x2510ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2510E8u;
    // 0x2510ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262750u, 0x2510E8u, 0x2510F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2510F0u;
label_2510f0:
    // 0x2510f0: 0xc09c7ac  jal         func_271EB0
    ctx->pc = 0x2510F0u;
    SET_GPR_U32(ctx, 31, 0x2510F8u);
    ctx->pc = 0x2510F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2510F0u;
    // 0x2510f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271EB0u, 0x2510F0u, 0x2510F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2510F8u;
label_2510f8:
    // 0x2510f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2510F8u;
    {
        const bool branch_taken_0x2510f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2510FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510F8u;
        // 0x2510fc: 0x2c420003  sltiu       $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2510f8) {
            ctx->pc = 0x251108u;
            goto label_251108;
        }
    }
    ctx->pc = 0x251100u;
    // 0x251100: 0x144003d2  bnez        $v0, . + 4 + (0x3D2 << 2)
    ctx->pc = 0x251100u;
    {
        const bool branch_taken_0x251100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251100u;
        // 0x251104: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251100) {
            ctx->pc = 0x25204Cu;
            goto label_25204c;
        }
    }
    ctx->pc = 0x251108u;
label_251108:
    // 0x251108: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x251108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x25110c: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x25110Cu;
    SET_GPR_U32(ctx, 31, 0x251114u);
    ctx->pc = 0x251110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25110Cu;
    // 0x251110: 0x26440490  addiu       $a0, $s2, 0x490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x25110Cu, 0x251114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251114u;
label_251114:
    // 0x251114: 0xc64105a8  lwc1        $f1, 0x5A8($s2)
    ctx->pc = 0x251114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251118: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x251118u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x25111c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25111cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251120: 0x0  nop
    ctx->pc = 0x251120u;
    // NOP
    // 0x251124: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x251124u;
    {
        const bool branch_taken_0x251124 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x251124) {
            ctx->pc = 0x251128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251124u;
            // 0x251128: 0xc6400600  lwc1        $f0, 0x600($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x251150u;
            goto label_251150;
        }
    }
    ctx->pc = 0x25112Cu;
    // 0x25112c: 0x8e4205f4  lw          $v0, 0x5F4($s2)
    ctx->pc = 0x25112cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1524)));
    // 0x251130: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x251130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x251134: 0x28430006  slti        $v1, $v0, 0x6
    ctx->pc = 0x251134u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x251138: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x251138u;
    {
        const bool branch_taken_0x251138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251138u;
        // 0x25113c: 0xae4205f4  sw          $v0, 0x5F4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251138) {
            ctx->pc = 0x25114Cu;
            goto label_25114c;
        }
    }
    ctx->pc = 0x251140u;
    // 0x251140: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x251140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x251144: 0x100003c0  b           . + 4 + (0x3C0 << 2)
    ctx->pc = 0x251144u;
    {
        const bool branch_taken_0x251144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251144u;
        // 0x251148: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251144) {
            ctx->pc = 0x252048u;
            goto label_252048;
        }
    }
    ctx->pc = 0x25114Cu;
label_25114c:
    // 0x25114c: 0xc6400600  lwc1        $f0, 0x600($s2)
    ctx->pc = 0x25114cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_251150:
    // 0x251150: 0xc64105a8  lwc1        $f1, 0x5A8($s2)
    ctx->pc = 0x251150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251154: 0xc6420604  lwc1        $f2, 0x604($s2)
    ctx->pc = 0x251154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x251158: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x251158u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25115c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x25115cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251160: 0x0  nop
    ctx->pc = 0x251160u;
    // NOP
    // 0x251164: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x251164u;
    {
        const bool branch_taken_0x251164 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x251168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251164u;
        // 0x251168: 0xe6400600  swc1        $f0, 0x600($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x251164) {
            ctx->pc = 0x251188u;
            goto label_251188;
        }
    }
    ctx->pc = 0x25116Cu;
    // 0x25116c: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x25116cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x251170: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x251170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x251174: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x251174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x251178: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x251178u;
    {
        const bool branch_taken_0x251178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251178u;
        // 0x25117c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251178) {
            ctx->pc = 0x251188u;
            goto label_251188;
        }
    }
    ctx->pc = 0x251180u;
    // 0x251180: 0x100003b1  b           . + 4 + (0x3B1 << 2)
    ctx->pc = 0x251180u;
    {
        const bool branch_taken_0x251180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251180u;
        // 0x251184: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251180) {
            ctx->pc = 0x252048u;
            goto label_252048;
        }
    }
    ctx->pc = 0x251188u;
label_251188:
    // 0x251188: 0xc6410600  lwc1        $f1, 0x600($s2)
    ctx->pc = 0x251188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25118c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x25118cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x251190: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x251190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251194: 0x0  nop
    ctx->pc = 0x251194u;
    // NOP
    // 0x251198: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x251198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25119c: 0x0  nop
    ctx->pc = 0x25119cu;
    // NOP
    // 0x2511a0: 0x450003a9  bc1f        . + 4 + (0x3A9 << 2)
    ctx->pc = 0x2511A0u;
    {
        const bool branch_taken_0x2511a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2511A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2511A0u;
        // 0x2511a4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2511a0) {
            ctx->pc = 0x252048u;
            goto label_252048;
        }
    }
    ctx->pc = 0x2511A8u;
    // 0x2511a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2511a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2511ac: 0xa24202f7  sb          $v0, 0x2F7($s2)
    ctx->pc = 0x2511acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x2511b0: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x2511b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x2511b4: 0x100003a3  b           . + 4 + (0x3A3 << 2)
    ctx->pc = 0x2511B4u;
    {
        const bool branch_taken_0x2511b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2511B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2511B4u;
        // 0x2511b8: 0xa24302f4  sb          $v1, 0x2F4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2511b4) {
            ctx->pc = 0x252044u;
            goto label_252044;
        }
    }
    ctx->pc = 0x2511BCu;
label_2511bc:
    // 0x2511bc: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2511BCu;
    SET_GPR_U32(ctx, 31, 0x2511C4u);
    ctx->pc = 0x2511C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2511BCu;
    // 0x2511c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2511BCu, 0x2511C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2511C4u;
label_2511c4:
    // 0x2511c4: 0x924302f7  lbu         $v1, 0x2F7($s2)
    ctx->pc = 0x2511c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x2511c8: 0x1460007f  bnez        $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x2511C8u;
    {
        const bool branch_taken_0x2511c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2511CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2511C8u;
        // 0x2511cc: 0x3054ffff  andi        $s4, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2511c8) {
            ctx->pc = 0x2513C8u;
            goto label_2513c8;
        }
    }
    ctx->pc = 0x2511D0u;
    // 0x2511d0: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x2511d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x2511d4: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x2511d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
    // 0x2511d8: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x2511d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x2511dc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2511DCu;
    {
        const bool branch_taken_0x2511dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2511E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2511DCu;
        // 0x2511e0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2511dc) {
            ctx->pc = 0x2511FCu;
            goto label_2511fc;
        }
    }
    ctx->pc = 0x2511E4u;
    // 0x2511e4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2511e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2511e8: 0x2442f110  addiu       $v0, $v0, -0xEF0
    ctx->pc = 0x2511e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963472));
    // 0x2511ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2511ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2511f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2511f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2511f4: 0x800008  jr          $a0
    ctx->pc = 0x2511F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2511FCu: goto label_2511fc;
            case 0x251234u: goto label_251234;
            case 0x2512A8u: goto label_2512a8;
            case 0x2512B8u: goto label_2512b8;
            case 0x2512C8u: goto label_2512c8;
            case 0x2512D8u: goto label_2512d8;
            case 0x2512E8u: goto label_2512e8;
            case 0x2512F8u: goto label_2512f8;
            case 0x251328u: goto label_251328;
            case 0x251350u: goto label_251350;
            case 0x251360u: goto label_251360;
            case 0x251370u: goto label_251370;
            case 0x2513A8u: goto label_2513a8;
            case 0x2513B8u: goto label_2513b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2511F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2511FCu;
label_2511fc:
    // 0x2511fc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2511fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x251200: 0x24030801  addiu       $v1, $zero, 0x801
    ctx->pc = 0x251200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
    // 0x251204: 0x94447a50  lhu         $a0, 0x7A50($v0)
    ctx->pc = 0x251204u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x747A50u));
    // 0x251208: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x251208u;
    {
        const bool branch_taken_0x251208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x25120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251208u;
        // 0x25120c: 0x24020806  addiu       $v0, $zero, 0x806 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251208) {
            ctx->pc = 0x251218u;
            goto label_251218;
        }
    }
    ctx->pc = 0x251210u;
    // 0x251210: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x251210u;
    {
        const bool branch_taken_0x251210 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x251210) {
            ctx->pc = 0x251214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251210u;
            // 0x251214: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251228u;
            goto label_251228;
        }
    }
    ctx->pc = 0x251218u;
label_251218:
    // 0x251218: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x25121c: 0x8c430578  lw          $v1, 0x578($v0)
    ctx->pc = 0x25121cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1400)));
    // 0x251220: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x251220u;
    {
        const bool branch_taken_0x251220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251220u;
        // 0x251224: 0x8c440580  lw          $a0, 0x580($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251220) {
            ctx->pc = 0x251564u;
            goto label_251564;
        }
    }
    ctx->pc = 0x251228u;
label_251228:
    // 0x251228: 0x8c430578  lw          $v1, 0x578($v0)
    ctx->pc = 0x251228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1400)));
    // 0x25122c: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x25122Cu;
    {
        const bool branch_taken_0x25122c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25122Cu;
        // 0x251230: 0x8c44057c  lw          $a0, 0x57C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25122c) {
            ctx->pc = 0x251564u;
            goto label_251564;
        }
    }
    ctx->pc = 0x251234u;
label_251234:
    // 0x251234: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x251234u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
    // 0x251238: 0x1c40000e  bgtz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x251238u;
    {
        const bool branch_taken_0x251238 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x25123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251238u;
        // 0x25123c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251238) {
            ctx->pc = 0x251274u;
            goto label_251274;
        }
    }
    ctx->pc = 0x251240u;
    // 0x251240: 0x24030801  addiu       $v1, $zero, 0x801
    ctx->pc = 0x251240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
    // 0x251244: 0x94447a50  lhu         $a0, 0x7A50($v0)
    ctx->pc = 0x251244u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 31312)));
    // 0x251248: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x251248u;
    {
        const bool branch_taken_0x251248 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x25124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251248u;
        // 0x25124c: 0x24020806  addiu       $v0, $zero, 0x806 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251248) {
            ctx->pc = 0x251258u;
            goto label_251258;
        }
    }
    ctx->pc = 0x251250u;
    // 0x251250: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x251250u;
    {
        const bool branch_taken_0x251250 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x251250) {
            ctx->pc = 0x251254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251250u;
            // 0x251254: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251268u;
            goto label_251268;
        }
    }
    ctx->pc = 0x251258u;
label_251258:
    // 0x251258: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x25125c: 0x8c430578  lw          $v1, 0x578($v0)
    ctx->pc = 0x25125cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1400)));
    // 0x251260: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x251260u;
    {
        const bool branch_taken_0x251260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251260u;
        // 0x251264: 0x8c440580  lw          $a0, 0x580($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251260) {
            ctx->pc = 0x251564u;
            goto label_251564;
        }
    }
    ctx->pc = 0x251268u;
label_251268:
    // 0x251268: 0x8c430578  lw          $v1, 0x578($v0)
    ctx->pc = 0x251268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1400)));
    // 0x25126c: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x25126Cu;
    {
        const bool branch_taken_0x25126c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25126Cu;
        // 0x251270: 0x8c44057c  lw          $a0, 0x57C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25126c) {
            ctx->pc = 0x251564u;
            goto label_251564;
        }
    }
    ctx->pc = 0x251274u;
label_251274:
    // 0x251274: 0x24030801  addiu       $v1, $zero, 0x801
    ctx->pc = 0x251274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
    // 0x251278: 0x94447a50  lhu         $a0, 0x7A50($v0)
    ctx->pc = 0x251278u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 31312)));
    // 0x25127c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25127Cu;
    {
        const bool branch_taken_0x25127c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x251280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25127Cu;
        // 0x251280: 0x24020806  addiu       $v0, $zero, 0x806 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25127c) {
            ctx->pc = 0x25128Cu;
            goto label_25128c;
        }
    }
    ctx->pc = 0x251284u;
    // 0x251284: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x251284u;
    {
        const bool branch_taken_0x251284 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x251284) {
            ctx->pc = 0x251288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251284u;
            // 0x251288: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25129Cu;
            goto label_25129c;
        }
    }
    ctx->pc = 0x25128Cu;
label_25128c:
    // 0x25128c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25128cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251290: 0x8c432c1c  lw          $v1, 0x2C1C($v0)
    ctx->pc = 0x251290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11292)));
    // 0x251294: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x251294u;
    {
        const bool branch_taken_0x251294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251294u;
        // 0x251298: 0x8c442c24  lw          $a0, 0x2C24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251294) {
            ctx->pc = 0x251564u;
            goto label_251564;
        }
    }
    ctx->pc = 0x25129Cu;
label_25129c:
    // 0x25129c: 0x8c432c1c  lw          $v1, 0x2C1C($v0)
    ctx->pc = 0x25129cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11292)));
    // 0x2512a0: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x2512A0u;
    {
        const bool branch_taken_0x2512a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2512A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2512A0u;
        // 0x2512a4: 0x8c442c20  lw          $a0, 0x2C20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2512a0) {
            ctx->pc = 0x251564u;
            goto label_251564;
        }
    }
    ctx->pc = 0x2512A8u;
label_2512a8:
    // 0x2512a8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2512a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2512ac: 0x8c430578  lw          $v1, 0x578($v0)
    ctx->pc = 0x2512acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1400)));
    // 0x2512b0: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x2512B0u;
    {
        const bool branch_taken_0x2512b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2512B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2512B0u;
        // 0x2512b4: 0x8c44057c  lw          $a0, 0x57C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2512b0) {
            ctx->pc = 0x251564u;
            goto label_251564;
        }
    }
    ctx->pc = 0x2512B8u;
label_2512b8:
    // 0x2512b8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2512b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2512bc: 0x8c430e74  lw          $v1, 0xE74($v0)
    ctx->pc = 0x2512bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3700)));
    // 0x2512c0: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x2512C0u;
    {
        const bool branch_taken_0x2512c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2512C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2512C0u;
        // 0x2512c4: 0x8c440e78  lw          $a0, 0xE78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2512c0) {
            ctx->pc = 0x251564u;
            goto label_251564;
        }
    }
    ctx->pc = 0x2512C8u;
label_2512c8:
    // 0x2512c8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2512c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2512cc: 0x8c430a30  lw          $v1, 0xA30($v0)
    ctx->pc = 0x2512ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2608)));
    // 0x2512d0: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x2512D0u;
    {
        const bool branch_taken_0x2512d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2512D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2512D0u;
        // 0x2512d4: 0x8c440a34  lw          $a0, 0xA34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2512d0) {
            ctx->pc = 0x251564u;
            goto label_251564;
        }
    }
    ctx->pc = 0x2512D8u;
label_2512d8:
    // 0x2512d8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2512d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2512dc: 0x8c4320ac  lw          $v1, 0x20AC($v0)
    ctx->pc = 0x2512dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2512e0: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x2512E0u;
    {
        const bool branch_taken_0x2512e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2512E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2512E0u;
        // 0x2512e4: 0x8c4420b0  lw          $a0, 0x20B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2512e0) {
            ctx->pc = 0x251564u;
            goto label_251564;
        }
    }
    ctx->pc = 0x2512E8u;
label_2512e8:
    // 0x2512e8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2512e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2512ec: 0x8c43316c  lw          $v1, 0x316C($v0)
    ctx->pc = 0x2512ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12652)));
    // 0x2512f0: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x2512F0u;
    {
        const bool branch_taken_0x2512f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2512F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2512F0u;
        // 0x2512f4: 0x8c443170  lw          $a0, 0x3170($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2512f0) {
            ctx->pc = 0x251564u;
            goto label_251564;
        }
    }
    ctx->pc = 0x2512F8u;
label_2512f8:
    // 0x2512f8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2512f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2512fc: 0x8e470740  lw          $a3, 0x740($s2)
    ctx->pc = 0x2512fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1856)));
    // 0x251300: 0x8c433340  lw          $v1, 0x3340($v0)
    ctx->pc = 0x251300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13120)));
    // 0x251304: 0x8c443344  lw          $a0, 0x3344($v0)
    ctx->pc = 0x251304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13124)));
    // 0x251308: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x251308u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25130c: 0x10e00097  beqz        $a3, . + 4 + (0x97 << 2)
    ctx->pc = 0x25130Cu;
    {
        const bool branch_taken_0x25130c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x251310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25130Cu;
        // 0x251310: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25130c) {
            ctx->pc = 0x25156Cu;
            goto label_25156c;
        }
    }
    ctx->pc = 0x251314u;
    // 0x251314: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x251314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251318: 0xc09f6d4  jal         func_27DB50
    ctx->pc = 0x251318u;
    SET_GPR_U32(ctx, 31, 0x251320u);
    ctx->pc = 0x25131Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251318u;
    // 0x25131c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DB50u, 0x251318u, 0x251320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251320u;
label_251320:
    // 0x251320: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x251320u;
    {
        const bool branch_taken_0x251320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251320u;
        // 0x251324: 0x8e4206f4  lw          $v0, 0x6F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1780)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251320) {
            ctx->pc = 0x251570u;
            goto label_251570;
        }
    }
    ctx->pc = 0x251328u;
label_251328:
    // 0x251328: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x25132c: 0x8e470744  lw          $a3, 0x744($s2)
    ctx->pc = 0x25132cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1860)));
    // 0x251330: 0x8c433858  lw          $v1, 0x3858($v0)
    ctx->pc = 0x251330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14424)));
    // 0x251334: 0x8c44385c  lw          $a0, 0x385C($v0)
    ctx->pc = 0x251334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14428)));
    // 0x251338: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x251338u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25133c: 0x10e00062  beqz        $a3, . + 4 + (0x62 << 2)
    ctx->pc = 0x25133Cu;
    {
        const bool branch_taken_0x25133c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x251340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25133Cu;
        // 0x251340: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25133c) {
            ctx->pc = 0x2514C8u;
            goto label_2514c8;
        }
    }
    ctx->pc = 0x251344u;
    // 0x251344: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x251344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251348: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x251348u;
    {
        const bool branch_taken_0x251348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251348u;
        // 0x25134c: 0x2405002b  addiu       $a1, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251348) {
            ctx->pc = 0x2514C0u;
            goto label_2514c0;
        }
    }
    ctx->pc = 0x251350u;
label_251350:
    // 0x251350: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251354: 0x8c4316d8  lw          $v1, 0x16D8($v0)
    ctx->pc = 0x251354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5848)));
    // 0x251358: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x251358u;
    {
        const bool branch_taken_0x251358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251358u;
        // 0x25135c: 0x8c4416dc  lw          $a0, 0x16DC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5852)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251358) {
            ctx->pc = 0x251564u;
            goto label_251564;
        }
    }
    ctx->pc = 0x251360u;
label_251360:
    // 0x251360: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251364: 0x8c4316d8  lw          $v1, 0x16D8($v0)
    ctx->pc = 0x251364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5848)));
    // 0x251368: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x251368u;
    {
        const bool branch_taken_0x251368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251368u;
        // 0x25136c: 0x8c4416dc  lw          $a0, 0x16DC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5852)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251368) {
            ctx->pc = 0x251564u;
            goto label_251564;
        }
    }
    ctx->pc = 0x251370u;
label_251370:
    // 0x251370: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x251370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x251374: 0x24030801  addiu       $v1, $zero, 0x801
    ctx->pc = 0x251374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
    // 0x251378: 0x94447a50  lhu         $a0, 0x7A50($v0)
    ctx->pc = 0x251378u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x747A50u));
    // 0x25137c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25137Cu;
    {
        const bool branch_taken_0x25137c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x251380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25137Cu;
        // 0x251380: 0x24020806  addiu       $v0, $zero, 0x806 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25137c) {
            ctx->pc = 0x25138Cu;
            goto label_25138c;
        }
    }
    ctx->pc = 0x251384u;
    // 0x251384: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x251384u;
    {
        const bool branch_taken_0x251384 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x251384) {
            ctx->pc = 0x251388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251384u;
            // 0x251388: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25139Cu;
            goto label_25139c;
        }
    }
    ctx->pc = 0x25138Cu;
label_25138c:
    // 0x25138c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25138cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251390: 0x8c430578  lw          $v1, 0x578($v0)
    ctx->pc = 0x251390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1400)));
    // 0x251394: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x251394u;
    {
        const bool branch_taken_0x251394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251394u;
        // 0x251398: 0x8c440580  lw          $a0, 0x580($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251394) {
            ctx->pc = 0x251564u;
            goto label_251564;
        }
    }
    ctx->pc = 0x25139Cu;
label_25139c:
    // 0x25139c: 0x8c430578  lw          $v1, 0x578($v0)
    ctx->pc = 0x25139cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1400)));
    // 0x2513a0: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x2513A0u;
    {
        const bool branch_taken_0x2513a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2513A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2513A0u;
        // 0x2513a4: 0x8c44057c  lw          $a0, 0x57C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2513a0) {
            ctx->pc = 0x251564u;
            goto label_251564;
        }
    }
    ctx->pc = 0x2513A8u;
label_2513a8:
    // 0x2513a8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2513a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2513ac: 0x8c432e8c  lw          $v1, 0x2E8C($v0)
    ctx->pc = 0x2513acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11916)));
    // 0x2513b0: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2513B0u;
    {
        const bool branch_taken_0x2513b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2513B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2513B0u;
        // 0x2513b4: 0x8c442e90  lw          $a0, 0x2E90($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2513b0) {
            ctx->pc = 0x251564u;
            goto label_251564;
        }
    }
    ctx->pc = 0x2513B8u;
label_2513b8:
    // 0x2513b8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2513b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2513bc: 0x8c4312a0  lw          $v1, 0x12A0($v0)
    ctx->pc = 0x2513bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4768)));
    // 0x2513c0: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2513C0u;
    {
        const bool branch_taken_0x2513c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2513C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2513C0u;
        // 0x2513c4: 0x8c4412a4  lw          $a0, 0x12A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2513c0) {
            ctx->pc = 0x251564u;
            goto label_251564;
        }
    }
    ctx->pc = 0x2513C8u;
label_2513c8:
    // 0x2513c8: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x2513c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x2513cc: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x2513ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
    // 0x2513d0: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x2513d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x2513d4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2513D4u;
    {
        const bool branch_taken_0x2513d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2513D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2513D4u;
        // 0x2513d8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2513d4) {
            ctx->pc = 0x2513F4u;
            goto label_2513f4;
        }
    }
    ctx->pc = 0x2513DCu;
    // 0x2513dc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2513dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2513e0: 0x2442f310  addiu       $v0, $v0, -0xCF0
    ctx->pc = 0x2513e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963984));
    // 0x2513e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2513e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2513e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2513e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2513ec: 0x800008  jr          $a0
    ctx->pc = 0x2513ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2513F4u: goto label_2513f4;
            case 0x25142Cu: goto label_25142c;
            case 0x25143Cu: goto label_25143c;
            case 0x25144Cu: goto label_25144c;
            case 0x25145Cu: goto label_25145c;
            case 0x25146Cu: goto label_25146c;
            case 0x25149Cu: goto label_25149c;
            case 0x2514F0u: goto label_2514f0;
            case 0x251500u: goto label_251500;
            case 0x251510u: goto label_251510;
            case 0x251548u: goto label_251548;
            case 0x251558u: goto label_251558;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2513ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2513F4u;
label_2513f4:
    // 0x2513f4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2513f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2513f8: 0x24030801  addiu       $v1, $zero, 0x801
    ctx->pc = 0x2513f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
    // 0x2513fc: 0x94447a50  lhu         $a0, 0x7A50($v0)
    ctx->pc = 0x2513fcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x747A50u));
    // 0x251400: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x251400u;
    {
        const bool branch_taken_0x251400 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x251404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251400u;
        // 0x251404: 0x24020806  addiu       $v0, $zero, 0x806 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251400) {
            ctx->pc = 0x251410u;
            goto label_251410;
        }
    }
    ctx->pc = 0x251408u;
    // 0x251408: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x251408u;
    {
        const bool branch_taken_0x251408 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x251408) {
            ctx->pc = 0x25140Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251408u;
            // 0x25140c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251420u;
            goto label_251420;
        }
    }
    ctx->pc = 0x251410u;
label_251410:
    // 0x251410: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251414: 0x8c43059c  lw          $v1, 0x59C($v0)
    ctx->pc = 0x251414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1436)));
    // 0x251418: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x251418u;
    {
        const bool branch_taken_0x251418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251418u;
        // 0x25141c: 0x8c4405a4  lw          $a0, 0x5A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251418) {
            ctx->pc = 0x251564u;
            goto label_251564;
        }
    }
    ctx->pc = 0x251420u;
label_251420:
    // 0x251420: 0x8c43059c  lw          $v1, 0x59C($v0)
    ctx->pc = 0x251420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1436)));
    // 0x251424: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x251424u;
    {
        const bool branch_taken_0x251424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251424u;
        // 0x251428: 0x8c4405a0  lw          $a0, 0x5A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251424) {
            ctx->pc = 0x251564u;
            goto label_251564;
        }
    }
    ctx->pc = 0x25142Cu;
label_25142c:
    // 0x25142c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25142cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251430: 0x8c43059c  lw          $v1, 0x59C($v0)
    ctx->pc = 0x251430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1436)));
    // 0x251434: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x251434u;
    {
        const bool branch_taken_0x251434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251434u;
        // 0x251438: 0x8c4405a0  lw          $a0, 0x5A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251434) {
            ctx->pc = 0x251564u;
            goto label_251564;
        }
    }
    ctx->pc = 0x25143Cu;
label_25143c:
    // 0x25143c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25143cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251440: 0x8c430e94  lw          $v1, 0xE94($v0)
    ctx->pc = 0x251440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3732)));
    // 0x251444: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x251444u;
    {
        const bool branch_taken_0x251444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251444u;
        // 0x251448: 0x8c440e98  lw          $a0, 0xE98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251444) {
            ctx->pc = 0x251564u;
            goto label_251564;
        }
    }
    ctx->pc = 0x25144Cu;
label_25144c:
    // 0x25144c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25144cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251450: 0x8c430a50  lw          $v1, 0xA50($v0)
    ctx->pc = 0x251450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2640)));
    // 0x251454: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x251454u;
    {
        const bool branch_taken_0x251454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251454u;
        // 0x251458: 0x8c440a54  lw          $a0, 0xA54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2644)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251454) {
            ctx->pc = 0x251564u;
            goto label_251564;
        }
    }
    ctx->pc = 0x25145Cu;
label_25145c:
    // 0x25145c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25145cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251460: 0x8c43316c  lw          $v1, 0x316C($v0)
    ctx->pc = 0x251460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12652)));
    // 0x251464: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x251464u;
    {
        const bool branch_taken_0x251464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251464u;
        // 0x251468: 0x8c443170  lw          $a0, 0x3170($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251464) {
            ctx->pc = 0x251564u;
            goto label_251564;
        }
    }
    ctx->pc = 0x25146Cu;
label_25146c:
    // 0x25146c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25146cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251470: 0x8e470740  lw          $a3, 0x740($s2)
    ctx->pc = 0x251470u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1856)));
    // 0x251474: 0x8c433358  lw          $v1, 0x3358($v0)
    ctx->pc = 0x251474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13144)));
    // 0x251478: 0x8c44335c  lw          $a0, 0x335C($v0)
    ctx->pc = 0x251478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13148)));
    // 0x25147c: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x25147cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x251480: 0x10e0003a  beqz        $a3, . + 4 + (0x3A << 2)
    ctx->pc = 0x251480u;
    {
        const bool branch_taken_0x251480 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x251484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251480u;
        // 0x251484: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251480) {
            ctx->pc = 0x25156Cu;
            goto label_25156c;
        }
    }
    ctx->pc = 0x251488u;
    // 0x251488: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x251488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25148c: 0xc09f6d4  jal         func_27DB50
    ctx->pc = 0x25148Cu;
    SET_GPR_U32(ctx, 31, 0x251494u);
    ctx->pc = 0x251490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25148Cu;
    // 0x251490: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DB50u, 0x25148Cu, 0x251494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251494u;
label_251494:
    // 0x251494: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x251494u;
    {
        const bool branch_taken_0x251494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251494u;
        // 0x251498: 0x8e4206f4  lw          $v0, 0x6F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1780)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251494) {
            ctx->pc = 0x251570u;
            goto label_251570;
        }
    }
    ctx->pc = 0x25149Cu;
label_25149c:
    // 0x25149c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25149cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2514a0: 0x8e470744  lw          $a3, 0x744($s2)
    ctx->pc = 0x2514a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1860)));
    // 0x2514a4: 0x8c433870  lw          $v1, 0x3870($v0)
    ctx->pc = 0x2514a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14448)));
    // 0x2514a8: 0x8c443874  lw          $a0, 0x3874($v0)
    ctx->pc = 0x2514a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14452)));
    // 0x2514ac: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x2514acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2514b0: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2514B0u;
    {
        const bool branch_taken_0x2514b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2514B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2514B0u;
        // 0x2514b4: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2514b0) {
            ctx->pc = 0x2514C8u;
            goto label_2514c8;
        }
    }
    ctx->pc = 0x2514B8u;
    // 0x2514b8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2514b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2514bc: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x2514bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_2514c0:
    // 0x2514c0: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x2514C0u;
    SET_GPR_U32(ctx, 31, 0x2514C8u);
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x2514C0u, 0x2514C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2514C8u;
label_2514c8:
    // 0x2514c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2514c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2514cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2514ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2514d0: 0xc0c1880  jal         func_306200
    ctx->pc = 0x2514D0u;
    SET_GPR_U32(ctx, 31, 0x2514D8u);
    ctx->pc = 0x2514D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2514D0u;
    // 0x2514d4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x2514D0u, 0x2514D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2514D8u;
label_2514d8:
    // 0x2514d8: 0x8e4316d4  lw          $v1, 0x16D4($s2)
    ctx->pc = 0x2514d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x2514dc: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x2514dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x2514e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2514e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2514e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2514e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2514e8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2514E8u;
    {
        const bool branch_taken_0x2514e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2514ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2514E8u;
        // 0x2514ec: 0xae4316d4  sw          $v1, 0x16D4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2514e8) {
            ctx->pc = 0x25156Cu;
            goto label_25156c;
        }
    }
    ctx->pc = 0x2514F0u;
label_2514f0:
    // 0x2514f0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2514f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2514f4: 0x8c4316f8  lw          $v1, 0x16F8($v0)
    ctx->pc = 0x2514f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5880)));
    // 0x2514f8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2514F8u;
    {
        const bool branch_taken_0x2514f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2514FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2514F8u;
        // 0x2514fc: 0x8c4416fc  lw          $a0, 0x16FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5884)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2514f8) {
            ctx->pc = 0x251564u;
            goto label_251564;
        }
    }
    ctx->pc = 0x251500u;
label_251500:
    // 0x251500: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251504: 0x8c4316f8  lw          $v1, 0x16F8($v0)
    ctx->pc = 0x251504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5880)));
    // 0x251508: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x251508u;
    {
        const bool branch_taken_0x251508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251508u;
        // 0x25150c: 0x8c4416fc  lw          $a0, 0x16FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5884)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251508) {
            ctx->pc = 0x251564u;
            goto label_251564;
        }
    }
    ctx->pc = 0x251510u;
label_251510:
    // 0x251510: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x251510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x251514: 0x24030801  addiu       $v1, $zero, 0x801
    ctx->pc = 0x251514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
    // 0x251518: 0x94447a50  lhu         $a0, 0x7A50($v0)
    ctx->pc = 0x251518u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x747A50u));
    // 0x25151c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25151Cu;
    {
        const bool branch_taken_0x25151c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x251520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25151Cu;
        // 0x251520: 0x24020806  addiu       $v0, $zero, 0x806 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25151c) {
            ctx->pc = 0x25152Cu;
            goto label_25152c;
        }
    }
    ctx->pc = 0x251524u;
    // 0x251524: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x251524u;
    {
        const bool branch_taken_0x251524 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x251524) {
            ctx->pc = 0x251528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251524u;
            // 0x251528: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25153Cu;
            goto label_25153c;
        }
    }
    ctx->pc = 0x25152Cu;
label_25152c:
    // 0x25152c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25152cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251530: 0x8c43059c  lw          $v1, 0x59C($v0)
    ctx->pc = 0x251530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1436)));
    // 0x251534: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x251534u;
    {
        const bool branch_taken_0x251534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251534u;
        // 0x251538: 0x8c4405a4  lw          $a0, 0x5A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251534) {
            ctx->pc = 0x251564u;
            goto label_251564;
        }
    }
    ctx->pc = 0x25153Cu;
label_25153c:
    // 0x25153c: 0x8c43059c  lw          $v1, 0x59C($v0)
    ctx->pc = 0x25153cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1436)));
    // 0x251540: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x251540u;
    {
        const bool branch_taken_0x251540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251540u;
        // 0x251544: 0x8c4405a0  lw          $a0, 0x5A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251540) {
            ctx->pc = 0x251564u;
            goto label_251564;
        }
    }
    ctx->pc = 0x251548u;
label_251548:
    // 0x251548: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x25154c: 0x8c432e8c  lw          $v1, 0x2E8C($v0)
    ctx->pc = 0x25154cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11916)));
    // 0x251550: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x251550u;
    {
        const bool branch_taken_0x251550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251550u;
        // 0x251554: 0x8c442e90  lw          $a0, 0x2E90($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251550) {
            ctx->pc = 0x251564u;
            goto label_251564;
        }
    }
    ctx->pc = 0x251558u;
label_251558:
    // 0x251558: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x25155c: 0x8c4312c0  lw          $v1, 0x12C0($v0)
    ctx->pc = 0x25155cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4800)));
    // 0x251560: 0x8c4412c4  lw          $a0, 0x12C4($v0)
    ctx->pc = 0x251560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4804)));
label_251564:
    // 0x251564: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x251564u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x251568: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x251568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_25156c:
    // 0x25156c: 0x8e4206f4  lw          $v0, 0x6F4($s2)
    ctx->pc = 0x25156cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1780)));
label_251570:
    // 0x251570: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x251570u;
    {
        const bool branch_taken_0x251570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x251570) {
            ctx->pc = 0x2515C0u;
            goto label_2515c0;
        }
    }
    ctx->pc = 0x251578u;
    // 0x251578: 0x96420548  lhu         $v0, 0x548($s2)
    ctx->pc = 0x251578u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1352)));
    // 0x25157c: 0x8644054a  lh          $a0, 0x54A($s2)
    ctx->pc = 0x25157cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
    // 0x251580: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x251580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x251584: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x251584u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x251588: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x251588u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x25158c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25158cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x251590: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x251590u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x251594: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x251594u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x251598: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x251598u;
    {
        const bool branch_taken_0x251598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251598) {
            ctx->pc = 0x2515C0u;
            goto label_2515c0;
        }
    }
    ctx->pc = 0x2515A0u;
    // 0x2515a0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2515A0u;
    SET_GPR_U32(ctx, 31, 0x2515A8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2515A0u, 0x2515A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2515A8u;
label_2515a8:
    // 0x2515a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2515a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2515ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2515ACu;
    {
        const bool branch_taken_0x2515ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2515ac) {
            ctx->pc = 0x2515C0u;
            goto label_2515c0;
        }
    }
    ctx->pc = 0x2515B4u;
    // 0x2515b4: 0xc073d2a  jal         func_1CF4A8
    ctx->pc = 0x2515B4u;
    SET_GPR_U32(ctx, 31, 0x2515BCu);
    ctx->pc = 0x2515B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2515B4u;
    // 0x2515b8: 0x8e4406f4  lw          $a0, 0x6F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF4A8u, 0x2515B4u, 0x2515BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2515BCu;
label_2515bc:
    // 0x2515bc: 0xae4006f4  sw          $zero, 0x6F4($s2)
    ctx->pc = 0x2515bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1780), GPR_U32(ctx, 0));
label_2515c0:
    // 0x2515c0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2515c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2515c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2515c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2515c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2515c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2515cc: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2515ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2515d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2515d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2515d4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2515d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2515d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2515d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2515dc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2515DCu;
    SET_GPR_U32(ctx, 31, 0x2515E4u);
    ctx->pc = 0x2515E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2515DCu;
    // 0x2515e0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2515DCu, 0x2515E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2515E4u;
label_2515e4:
    // 0x2515e4: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x2515e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x2515e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2515e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2515ec: 0xc640054c  lwc1        $f0, 0x54C($s2)
    ctx->pc = 0x2515ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2515f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2515f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2515f4: 0x0  nop
    ctx->pc = 0x2515f4u;
    // NOP
    // 0x2515f8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2515F8u;
    {
        const bool branch_taken_0x2515f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2515f8) {
            ctx->pc = 0x2515FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2515F8u;
            // 0x2515fc: 0xe641054c  swc1        $f1, 0x54C($s2) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x251600u;
            goto label_251600;
        }
    }
    ctx->pc = 0x251600u;
label_251600:
    // 0x251600: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x251600u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x251604: 0xe6540600  swc1        $f20, 0x600($s2)
    ctx->pc = 0x251604u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
    // 0x251608: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x251608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25160c: 0xae4005fc  sw          $zero, 0x5FC($s2)
    ctx->pc = 0x25160cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1532), GPR_U32(ctx, 0));
    // 0x251610: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x251610u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_251614:
    // 0x251614: 0x96420434  lhu         $v0, 0x434($s2)
    ctx->pc = 0x251614u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1076)));
    // 0x251618: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x251618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25161c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x25161cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x251620: 0xc055f06  jal         func_157C18
    ctx->pc = 0x251620u;
    SET_GPR_U32(ctx, 31, 0x251628u);
    ctx->pc = 0x251624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251620u;
    // 0x251624: 0xa6420434  sh          $v0, 0x434($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x251620u, 0x251628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251628u;
label_251628:
    // 0x251628: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x251628u;
    {
        const bool branch_taken_0x251628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251628u;
        // 0x25162c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251628) {
            ctx->pc = 0x251634u;
            goto label_251634;
        }
    }
    ctx->pc = 0x251630u;
    // 0x251630: 0xae4205fc  sw          $v0, 0x5FC($s2)
    ctx->pc = 0x251630u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1532), GPR_U32(ctx, 2));
label_251634:
    // 0x251634: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x251634u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x251638: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x251638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x25163c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25163Cu;
    {
        const bool branch_taken_0x25163c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25163Cu;
        // 0x251640: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25163c) {
            ctx->pc = 0x251648u;
            goto label_251648;
        }
    }
    ctx->pc = 0x251644u;
    // 0x251644: 0xae4205fc  sw          $v0, 0x5FC($s2)
    ctx->pc = 0x251644u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1532), GPR_U32(ctx, 2));
label_251648:
    // 0x251648: 0x8e4205fc  lw          $v0, 0x5FC($s2)
    ctx->pc = 0x251648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1532)));
    // 0x25164c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25164Cu;
    {
        const bool branch_taken_0x25164c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25164Cu;
        // 0x251650: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25164c) {
            ctx->pc = 0x251668u;
            goto label_251668;
        }
    }
    ctx->pc = 0x251654u;
    // 0x251654: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x251654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x251658: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x251658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25165c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25165Cu;
    {
        const bool branch_taken_0x25165c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25165Cu;
        // 0x251660: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25165c) {
            ctx->pc = 0x251668u;
            goto label_251668;
        }
    }
    ctx->pc = 0x251664u;
    // 0x251664: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x251664u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_251668:
    // 0x251668: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x251668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25166c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25166cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x251670: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x251670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251674: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x251674u;
    SET_GPR_U32(ctx, 31, 0x25167Cu);
    ctx->pc = 0x251678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251674u;
    // 0x251678: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x251674u, 0x25167Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25167Cu;
label_25167c:
    // 0x25167c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25167cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x251680: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x251680u;
    SET_GPR_U32(ctx, 31, 0x251688u);
    ctx->pc = 0x251684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251680u;
    // 0x251684: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x251680u, 0x251688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251688u;
label_251688:
    // 0x251688: 0xc6400600  lwc1        $f0, 0x600($s2)
    ctx->pc = 0x251688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25168c: 0xc64105a8  lwc1        $f1, 0x5A8($s2)
    ctx->pc = 0x25168cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251690: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x251690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x251694: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x251694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x251698: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x251698u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25169c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x25169cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2516a0: 0x0  nop
    ctx->pc = 0x2516a0u;
    // NOP
    // 0x2516a4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2516A4u;
    {
        const bool branch_taken_0x2516a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2516A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2516A4u;
        // 0x2516a8: 0xe6400600  swc1        $f0, 0x600($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2516a4) {
            ctx->pc = 0x2516C4u;
            goto label_2516c4;
        }
    }
    ctx->pc = 0x2516ACu;
    // 0x2516ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2516acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2516b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2516b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2516b4: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x2516b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x2516b8: 0xa24202f7  sb          $v0, 0x2F7($s2)
    ctx->pc = 0x2516b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x2516bc: 0xa24302f4  sb          $v1, 0x2F4($s2)
    ctx->pc = 0x2516bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 3));
    // 0x2516c0: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x2516c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_2516c4:
    // 0x2516c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2516c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2516c8: 0xc0989d4  jal         func_262750
    ctx->pc = 0x2516C8u;
    SET_GPR_U32(ctx, 31, 0x2516D0u);
    ctx->pc = 0x2516CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2516C8u;
    // 0x2516cc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262750u, 0x2516C8u, 0x2516D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2516D0u;
label_2516d0:
    // 0x2516d0: 0x1000025e  b           . + 4 + (0x25E << 2)
    ctx->pc = 0x2516D0u;
    {
        const bool branch_taken_0x2516d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2516D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2516D0u;
        // 0x2516d4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2516d0) {
            ctx->pc = 0x25204Cu;
            goto label_25204c;
        }
    }
    ctx->pc = 0x2516D8u;
label_2516d8:
    // 0x2516d8: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2516D8u;
    SET_GPR_U32(ctx, 31, 0x2516E0u);
    ctx->pc = 0x2516DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2516D8u;
    // 0x2516dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2516D8u, 0x2516E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2516E0u;
label_2516e0:
    // 0x2516e0: 0x924302f7  lbu         $v1, 0x2F7($s2)
    ctx->pc = 0x2516e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x2516e4: 0x14600061  bnez        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x2516E4u;
    {
        const bool branch_taken_0x2516e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2516E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2516E4u;
        // 0x2516e8: 0x3054ffff  andi        $s4, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2516e4) {
            ctx->pc = 0x25186Cu;
            goto label_25186c;
        }
    }
    ctx->pc = 0x2516ECu;
    // 0x2516ec: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x2516ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x2516f0: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x2516f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
    // 0x2516f4: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x2516f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x2516f8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2516F8u;
    {
        const bool branch_taken_0x2516f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2516FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2516F8u;
        // 0x2516fc: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2516f8) {
            ctx->pc = 0x251718u;
            goto label_251718;
        }
    }
    ctx->pc = 0x251700u;
    // 0x251700: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x251700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x251704: 0x2442f510  addiu       $v0, $v0, -0xAF0
    ctx->pc = 0x251704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964496));
    // 0x251708: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x251708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25170c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25170cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x251710: 0x800008  jr          $a0
    ctx->pc = 0x251710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x251718u: goto label_251718;
            case 0x251728u: goto label_251728;
            case 0x25174Cu: goto label_25174c;
            case 0x25175Cu: goto label_25175c;
            case 0x25176Cu: goto label_25176c;
            case 0x25177Cu: goto label_25177c;
            case 0x2517A0u: goto label_2517a0;
            case 0x2517C4u: goto label_2517c4;
            case 0x2517F4u: goto label_2517f4;
            case 0x25181Cu: goto label_25181c;
            case 0x25182Cu: goto label_25182c;
            case 0x25183Cu: goto label_25183c;
            case 0x25184Cu: goto label_25184c;
            case 0x25185Cu: goto label_25185c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251710u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x251718u;
label_251718:
    // 0x251718: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x25171c: 0x8c430584  lw          $v1, 0x584($v0)
    ctx->pc = 0x25171cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1412)));
    // 0x251720: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x251720u;
    {
        const bool branch_taken_0x251720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251720u;
        // 0x251724: 0x8c440588  lw          $a0, 0x588($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251720) {
            ctx->pc = 0x2519BCu;
            goto label_2519bc;
        }
    }
    ctx->pc = 0x251728u;
label_251728:
    // 0x251728: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x251728u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
    // 0x25172c: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25172Cu;
    {
        const bool branch_taken_0x25172c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x251730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25172Cu;
        // 0x251730: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25172c) {
            ctx->pc = 0x251740u;
            goto label_251740;
        }
    }
    ctx->pc = 0x251734u;
    // 0x251734: 0x8c430584  lw          $v1, 0x584($v0)
    ctx->pc = 0x251734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1412)));
    // 0x251738: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x251738u;
    {
        const bool branch_taken_0x251738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251738u;
        // 0x25173c: 0x8c440588  lw          $a0, 0x588($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251738) {
            ctx->pc = 0x2519BCu;
            goto label_2519bc;
        }
    }
    ctx->pc = 0x251740u;
label_251740:
    // 0x251740: 0x8c432c28  lw          $v1, 0x2C28($v0)
    ctx->pc = 0x251740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11304)));
    // 0x251744: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x251744u;
    {
        const bool branch_taken_0x251744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251744u;
        // 0x251748: 0x8c442c2c  lw          $a0, 0x2C2C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251744) {
            ctx->pc = 0x2519BCu;
            goto label_2519bc;
        }
    }
    ctx->pc = 0x25174Cu;
label_25174c:
    // 0x25174c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25174cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251750: 0x8c430584  lw          $v1, 0x584($v0)
    ctx->pc = 0x251750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1412)));
    // 0x251754: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x251754u;
    {
        const bool branch_taken_0x251754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251754u;
        // 0x251758: 0x8c440588  lw          $a0, 0x588($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251754) {
            ctx->pc = 0x2519BCu;
            goto label_2519bc;
        }
    }
    ctx->pc = 0x25175Cu;
label_25175c:
    // 0x25175c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25175cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251760: 0x8c430e7c  lw          $v1, 0xE7C($v0)
    ctx->pc = 0x251760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3708)));
    // 0x251764: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x251764u;
    {
        const bool branch_taken_0x251764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251764u;
        // 0x251768: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251764) {
            ctx->pc = 0x2519BCu;
            goto label_2519bc;
        }
    }
    ctx->pc = 0x25176Cu;
label_25176c:
    // 0x25176c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25176cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251770: 0x8c430a38  lw          $v1, 0xA38($v0)
    ctx->pc = 0x251770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2616)));
    // 0x251774: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x251774u;
    {
        const bool branch_taken_0x251774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251774u;
        // 0x251778: 0x8c440a3c  lw          $a0, 0xA3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251774) {
            ctx->pc = 0x2519BCu;
            goto label_2519bc;
        }
    }
    ctx->pc = 0x25177Cu;
label_25177c:
    // 0x25177c: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x25177cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
    // 0x251780: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x251780u;
    {
        const bool branch_taken_0x251780 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x251784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251780u;
        // 0x251784: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251780) {
            ctx->pc = 0x251794u;
            goto label_251794;
        }
    }
    ctx->pc = 0x251788u;
    // 0x251788: 0x8c4320bc  lw          $v1, 0x20BC($v0)
    ctx->pc = 0x251788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8380)));
    // 0x25178c: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x25178Cu;
    {
        const bool branch_taken_0x25178c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25178Cu;
        // 0x251790: 0x8c4420c0  lw          $a0, 0x20C0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25178c) {
            ctx->pc = 0x2519BCu;
            goto label_2519bc;
        }
    }
    ctx->pc = 0x251794u;
label_251794:
    // 0x251794: 0x8c4320b4  lw          $v1, 0x20B4($v0)
    ctx->pc = 0x251794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8372)));
    // 0x251798: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x251798u;
    {
        const bool branch_taken_0x251798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251798u;
        // 0x25179c: 0x8c4420b8  lw          $a0, 0x20B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251798) {
            ctx->pc = 0x2519BCu;
            goto label_2519bc;
        }
    }
    ctx->pc = 0x2517A0u;
label_2517a0:
    // 0x2517a0: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x2517a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
    // 0x2517a4: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2517A4u;
    {
        const bool branch_taken_0x2517a4 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x2517A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2517A4u;
        // 0x2517a8: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2517a4) {
            ctx->pc = 0x2517B8u;
            goto label_2517b8;
        }
    }
    ctx->pc = 0x2517ACu;
    // 0x2517ac: 0x8c43317c  lw          $v1, 0x317C($v0)
    ctx->pc = 0x2517acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12668)));
    // 0x2517b0: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x2517B0u;
    {
        const bool branch_taken_0x2517b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2517B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2517B0u;
        // 0x2517b4: 0x8c443180  lw          $a0, 0x3180($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2517b0) {
            ctx->pc = 0x2519BCu;
            goto label_2519bc;
        }
    }
    ctx->pc = 0x2517B8u;
label_2517b8:
    // 0x2517b8: 0x8c433174  lw          $v1, 0x3174($v0)
    ctx->pc = 0x2517b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12660)));
    // 0x2517bc: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x2517BCu;
    {
        const bool branch_taken_0x2517bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2517C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2517BCu;
        // 0x2517c0: 0x8c443178  lw          $a0, 0x3178($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2517bc) {
            ctx->pc = 0x2519BCu;
            goto label_2519bc;
        }
    }
    ctx->pc = 0x2517C4u;
label_2517c4:
    // 0x2517c4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2517c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2517c8: 0x8e470740  lw          $a3, 0x740($s2)
    ctx->pc = 0x2517c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1856)));
    // 0x2517cc: 0x8c433348  lw          $v1, 0x3348($v0)
    ctx->pc = 0x2517ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13128)));
    // 0x2517d0: 0x8c44334c  lw          $a0, 0x334C($v0)
    ctx->pc = 0x2517d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13132)));
    // 0x2517d4: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x2517d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2517d8: 0x10e0007a  beqz        $a3, . + 4 + (0x7A << 2)
    ctx->pc = 0x2517D8u;
    {
        const bool branch_taken_0x2517d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2517DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2517D8u;
        // 0x2517dc: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2517d8) {
            ctx->pc = 0x2519C4u;
            goto label_2519c4;
        }
    }
    ctx->pc = 0x2517E0u;
    // 0x2517e0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2517e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2517e4: 0xc09f6d4  jal         func_27DB50
    ctx->pc = 0x2517E4u;
    SET_GPR_U32(ctx, 31, 0x2517ECu);
    ctx->pc = 0x2517E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2517E4u;
    // 0x2517e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DB50u, 0x2517E4u, 0x2517ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2517ECu;
label_2517ec:
    // 0x2517ec: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x2517ECu;
    {
        const bool branch_taken_0x2517ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2517ec) {
            ctx->pc = 0x2519C4u;
            goto label_2519c4;
        }
    }
    ctx->pc = 0x2517F4u;
label_2517f4:
    // 0x2517f4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2517f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2517f8: 0x8e470744  lw          $a3, 0x744($s2)
    ctx->pc = 0x2517f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1860)));
    // 0x2517fc: 0x8c433860  lw          $v1, 0x3860($v0)
    ctx->pc = 0x2517fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14432)));
    // 0x251800: 0x8c443864  lw          $a0, 0x3864($v0)
    ctx->pc = 0x251800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14436)));
    // 0x251804: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x251804u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x251808: 0x10e00053  beqz        $a3, . + 4 + (0x53 << 2)
    ctx->pc = 0x251808u;
    {
        const bool branch_taken_0x251808 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x25180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251808u;
        // 0x25180c: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251808) {
            ctx->pc = 0x251958u;
            goto label_251958;
        }
    }
    ctx->pc = 0x251810u;
    // 0x251810: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x251810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251814: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x251814u;
    {
        const bool branch_taken_0x251814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251814u;
        // 0x251818: 0x2405002c  addiu       $a1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251814) {
            ctx->pc = 0x251950u;
            goto label_251950;
        }
    }
    ctx->pc = 0x25181Cu;
label_25181c:
    // 0x25181c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25181cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251820: 0x8c4316e0  lw          $v1, 0x16E0($v0)
    ctx->pc = 0x251820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5856)));
    // 0x251824: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x251824u;
    {
        const bool branch_taken_0x251824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251824u;
        // 0x251828: 0x8c4416e4  lw          $a0, 0x16E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5860)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251824) {
            ctx->pc = 0x2519BCu;
            goto label_2519bc;
        }
    }
    ctx->pc = 0x25182Cu;
label_25182c:
    // 0x25182c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25182cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251830: 0x8c4316e0  lw          $v1, 0x16E0($v0)
    ctx->pc = 0x251830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5856)));
    // 0x251834: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x251834u;
    {
        const bool branch_taken_0x251834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251834u;
        // 0x251838: 0x8c4416e4  lw          $a0, 0x16E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5860)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251834) {
            ctx->pc = 0x2519BCu;
            goto label_2519bc;
        }
    }
    ctx->pc = 0x25183Cu;
label_25183c:
    // 0x25183c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25183cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251840: 0x8c430584  lw          $v1, 0x584($v0)
    ctx->pc = 0x251840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1412)));
    // 0x251844: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x251844u;
    {
        const bool branch_taken_0x251844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251844u;
        // 0x251848: 0x8c440588  lw          $a0, 0x588($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251844) {
            ctx->pc = 0x2519BCu;
            goto label_2519bc;
        }
    }
    ctx->pc = 0x25184Cu;
label_25184c:
    // 0x25184c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25184cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251850: 0x8c432e94  lw          $v1, 0x2E94($v0)
    ctx->pc = 0x251850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11924)));
    // 0x251854: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x251854u;
    {
        const bool branch_taken_0x251854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251854u;
        // 0x251858: 0x8c442e98  lw          $a0, 0x2E98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251854) {
            ctx->pc = 0x2519BCu;
            goto label_2519bc;
        }
    }
    ctx->pc = 0x25185Cu;
label_25185c:
    // 0x25185c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25185cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251860: 0x8c4312a8  lw          $v1, 0x12A8($v0)
    ctx->pc = 0x251860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4776)));
    // 0x251864: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x251864u;
    {
        const bool branch_taken_0x251864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251864u;
        // 0x251868: 0x8c4412ac  lw          $a0, 0x12AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251864) {
            ctx->pc = 0x2519BCu;
            goto label_2519bc;
        }
    }
    ctx->pc = 0x25186Cu;
label_25186c:
    // 0x25186c: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x25186cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x251870: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x251870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
    // 0x251874: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x251874u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x251878: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x251878u;
    {
        const bool branch_taken_0x251878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251878u;
        // 0x25187c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251878) {
            ctx->pc = 0x251898u;
            goto label_251898;
        }
    }
    ctx->pc = 0x251880u;
    // 0x251880: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x251880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x251884: 0x2442f710  addiu       $v0, $v0, -0x8F0
    ctx->pc = 0x251884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965008));
    // 0x251888: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x251888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25188c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25188cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x251890: 0x800008  jr          $a0
    ctx->pc = 0x251890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x251898u: goto label_251898;
            case 0x2518A8u: goto label_2518a8;
            case 0x2518B8u: goto label_2518b8;
            case 0x2518C8u: goto label_2518c8;
            case 0x2518D8u: goto label_2518d8;
            case 0x2518FCu: goto label_2518fc;
            case 0x25192Cu: goto label_25192c;
            case 0x251970u: goto label_251970;
            case 0x251980u: goto label_251980;
            case 0x251990u: goto label_251990;
            case 0x2519A0u: goto label_2519a0;
            case 0x2519B0u: goto label_2519b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251890u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x251898u;
label_251898:
    // 0x251898: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x25189c: 0x8c4305a8  lw          $v1, 0x5A8($v0)
    ctx->pc = 0x25189cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1448)));
    // 0x2518a0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2518A0u;
    {
        const bool branch_taken_0x2518a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2518A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2518A0u;
        // 0x2518a4: 0x8c4405ac  lw          $a0, 0x5AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2518a0) {
            ctx->pc = 0x2519BCu;
            goto label_2519bc;
        }
    }
    ctx->pc = 0x2518A8u;
label_2518a8:
    // 0x2518a8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2518a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2518ac: 0x8c4305a8  lw          $v1, 0x5A8($v0)
    ctx->pc = 0x2518acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1448)));
    // 0x2518b0: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2518B0u;
    {
        const bool branch_taken_0x2518b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2518B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2518B0u;
        // 0x2518b4: 0x8c4405ac  lw          $a0, 0x5AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2518b0) {
            ctx->pc = 0x2519BCu;
            goto label_2519bc;
        }
    }
    ctx->pc = 0x2518B8u;
label_2518b8:
    // 0x2518b8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2518b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2518bc: 0x8c430e9c  lw          $v1, 0xE9C($v0)
    ctx->pc = 0x2518bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3740)));
    // 0x2518c0: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2518C0u;
    {
        const bool branch_taken_0x2518c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2518C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2518C0u;
        // 0x2518c4: 0x8c440ea0  lw          $a0, 0xEA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2518c0) {
            ctx->pc = 0x2519BCu;
            goto label_2519bc;
        }
    }
    ctx->pc = 0x2518C8u;
label_2518c8:
    // 0x2518c8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2518c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2518cc: 0x8c430a58  lw          $v1, 0xA58($v0)
    ctx->pc = 0x2518ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2648)));
    // 0x2518d0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2518D0u;
    {
        const bool branch_taken_0x2518d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2518D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2518D0u;
        // 0x2518d4: 0x8c440a5c  lw          $a0, 0xA5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2652)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2518d0) {
            ctx->pc = 0x2519BCu;
            goto label_2519bc;
        }
    }
    ctx->pc = 0x2518D8u;
label_2518d8:
    // 0x2518d8: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x2518d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
    // 0x2518dc: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2518DCu;
    {
        const bool branch_taken_0x2518dc = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x2518E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2518DCu;
        // 0x2518e0: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2518dc) {
            ctx->pc = 0x2518F0u;
            goto label_2518f0;
        }
    }
    ctx->pc = 0x2518E4u;
    // 0x2518e4: 0x8c43317c  lw          $v1, 0x317C($v0)
    ctx->pc = 0x2518e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12668)));
    // 0x2518e8: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2518E8u;
    {
        const bool branch_taken_0x2518e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2518ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2518E8u;
        // 0x2518ec: 0x8c443180  lw          $a0, 0x3180($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2518e8) {
            ctx->pc = 0x2519BCu;
            goto label_2519bc;
        }
    }
    ctx->pc = 0x2518F0u;
label_2518f0:
    // 0x2518f0: 0x8c433174  lw          $v1, 0x3174($v0)
    ctx->pc = 0x2518f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12660)));
    // 0x2518f4: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2518F4u;
    {
        const bool branch_taken_0x2518f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2518F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2518F4u;
        // 0x2518f8: 0x8c443178  lw          $a0, 0x3178($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2518f4) {
            ctx->pc = 0x2519BCu;
            goto label_2519bc;
        }
    }
    ctx->pc = 0x2518FCu;
label_2518fc:
    // 0x2518fc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2518fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251900: 0x8e470740  lw          $a3, 0x740($s2)
    ctx->pc = 0x251900u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1856)));
    // 0x251904: 0x8c433360  lw          $v1, 0x3360($v0)
    ctx->pc = 0x251904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13152)));
    // 0x251908: 0x8c443364  lw          $a0, 0x3364($v0)
    ctx->pc = 0x251908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13156)));
    // 0x25190c: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x25190cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x251910: 0x10e0002c  beqz        $a3, . + 4 + (0x2C << 2)
    ctx->pc = 0x251910u;
    {
        const bool branch_taken_0x251910 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x251914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251910u;
        // 0x251914: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251910) {
            ctx->pc = 0x2519C4u;
            goto label_2519c4;
        }
    }
    ctx->pc = 0x251918u;
    // 0x251918: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x251918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25191c: 0xc09f6d4  jal         func_27DB50
    ctx->pc = 0x25191Cu;
    SET_GPR_U32(ctx, 31, 0x251924u);
    ctx->pc = 0x251920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25191Cu;
    // 0x251920: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DB50u, 0x25191Cu, 0x251924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251924u;
label_251924:
    // 0x251924: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x251924u;
    {
        const bool branch_taken_0x251924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251924) {
            ctx->pc = 0x2519C4u;
            goto label_2519c4;
        }
    }
    ctx->pc = 0x25192Cu;
label_25192c:
    // 0x25192c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25192cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251930: 0x8e470744  lw          $a3, 0x744($s2)
    ctx->pc = 0x251930u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1860)));
    // 0x251934: 0x8c433878  lw          $v1, 0x3878($v0)
    ctx->pc = 0x251934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14456)));
    // 0x251938: 0x8c44387c  lw          $a0, 0x387C($v0)
    ctx->pc = 0x251938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14460)));
    // 0x25193c: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x25193cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x251940: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x251940u;
    {
        const bool branch_taken_0x251940 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x251944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251940u;
        // 0x251944: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251940) {
            ctx->pc = 0x251958u;
            goto label_251958;
        }
    }
    ctx->pc = 0x251948u;
    // 0x251948: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x251948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25194c: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x25194cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_251950:
    // 0x251950: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x251950u;
    SET_GPR_U32(ctx, 31, 0x251958u);
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x251950u, 0x251958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251958u;
label_251958:
    // 0x251958: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x251958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25195c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25195cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x251960: 0xc0c1880  jal         func_306200
    ctx->pc = 0x251960u;
    SET_GPR_U32(ctx, 31, 0x251968u);
    ctx->pc = 0x251964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251960u;
    // 0x251964: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x251960u, 0x251968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251968u;
label_251968:
    // 0x251968: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x251968u;
    {
        const bool branch_taken_0x251968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251968) {
            ctx->pc = 0x2519C4u;
            goto label_2519c4;
        }
    }
    ctx->pc = 0x251970u;
label_251970:
    // 0x251970: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251974: 0x8c431700  lw          $v1, 0x1700($v0)
    ctx->pc = 0x251974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5888)));
    // 0x251978: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x251978u;
    {
        const bool branch_taken_0x251978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251978u;
        // 0x25197c: 0x8c441704  lw          $a0, 0x1704($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251978) {
            ctx->pc = 0x2519BCu;
            goto label_2519bc;
        }
    }
    ctx->pc = 0x251980u;
label_251980:
    // 0x251980: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251984: 0x8c431700  lw          $v1, 0x1700($v0)
    ctx->pc = 0x251984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5888)));
    // 0x251988: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x251988u;
    {
        const bool branch_taken_0x251988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251988u;
        // 0x25198c: 0x8c441704  lw          $a0, 0x1704($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251988) {
            ctx->pc = 0x2519BCu;
            goto label_2519bc;
        }
    }
    ctx->pc = 0x251990u;
label_251990:
    // 0x251990: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251994: 0x8c4305a8  lw          $v1, 0x5A8($v0)
    ctx->pc = 0x251994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1448)));
    // 0x251998: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x251998u;
    {
        const bool branch_taken_0x251998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251998u;
        // 0x25199c: 0x8c4405ac  lw          $a0, 0x5AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251998) {
            ctx->pc = 0x2519BCu;
            goto label_2519bc;
        }
    }
    ctx->pc = 0x2519A0u;
label_2519a0:
    // 0x2519a0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2519a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2519a4: 0x8c432e94  lw          $v1, 0x2E94($v0)
    ctx->pc = 0x2519a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11924)));
    // 0x2519a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2519A8u;
    {
        const bool branch_taken_0x2519a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2519ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2519A8u;
        // 0x2519ac: 0x8c442e98  lw          $a0, 0x2E98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2519a8) {
            ctx->pc = 0x2519BCu;
            goto label_2519bc;
        }
    }
    ctx->pc = 0x2519B0u;
label_2519b0:
    // 0x2519b0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2519b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2519b4: 0x8c4312c8  lw          $v1, 0x12C8($v0)
    ctx->pc = 0x2519b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4808)));
    // 0x2519b8: 0x8c4412cc  lw          $a0, 0x12CC($v0)
    ctx->pc = 0x2519b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4812)));
label_2519bc:
    // 0x2519bc: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x2519bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2519c0: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x2519c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2519c4:
    // 0x2519c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2519c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2519c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2519c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2519cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2519ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2519d0: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2519d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2519d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2519d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2519d8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2519d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2519dc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2519DCu;
    SET_GPR_U32(ctx, 31, 0x2519E4u);
    ctx->pc = 0x2519E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2519DCu;
    // 0x2519e0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2519DCu, 0x2519E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2519E4u;
label_2519e4:
    // 0x2519e4: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x2519e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x2519e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2519e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2519ec: 0xa643056e  sh          $v1, 0x56E($s2)
    ctx->pc = 0x2519ecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x2519f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2519f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2519f4: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x2519f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_2519f8:
    // 0x2519f8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2519F8u;
    SET_GPR_U32(ctx, 31, 0x251A00u);
    ctx->pc = 0x2519FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2519F8u;
    // 0x2519fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2519F8u, 0x251A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251A00u;
label_251a00:
    // 0x251a00: 0x5040003b  beql        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x251A00u;
    {
        const bool branch_taken_0x251a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x251a00) {
            ctx->pc = 0x251A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251A00u;
            // 0x251a04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251AF0u;
            goto label_251af0;
        }
    }
    ctx->pc = 0x251A08u;
    // 0x251a08: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x251a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x251a0c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x251a0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251a10: 0x28420266  slti        $v0, $v0, 0x266
    ctx->pc = 0x251a10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)614) ? 1 : 0);
    // 0x251a14: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x251A14u;
    {
        const bool branch_taken_0x251a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A14u;
        // 0x251a18: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251a14) {
            ctx->pc = 0x251A3Cu;
            goto label_251a3c;
        }
    }
    ctx->pc = 0x251A1Cu;
    // 0x251a1c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x251A1Cu;
    {
        const bool branch_taken_0x251a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A1Cu;
        // 0x251a20: 0x8642054a  lh          $v0, 0x54A($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251a1c) {
            ctx->pc = 0x251A40u;
            goto label_251a40;
        }
    }
    ctx->pc = 0x251A24u;
    // 0x251a24: 0x1c40002e  bgtz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x251A24u;
    {
        const bool branch_taken_0x251a24 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x251A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A24u;
        // 0x251a28: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251a24) {
            ctx->pc = 0x251AE0u;
            goto label_251ae0;
        }
    }
    ctx->pc = 0x251A2Cu;
    // 0x251a2c: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x251a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x251a30: 0xa24202f4  sb          $v0, 0x2F4($s2)
    ctx->pc = 0x251a30u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x251a34: 0x10000183  b           . + 4 + (0x183 << 2)
    ctx->pc = 0x251A34u;
    {
        const bool branch_taken_0x251a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A34u;
        // 0x251a38: 0xa24002f5  sb          $zero, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251a34) {
            ctx->pc = 0x252044u;
            goto label_252044;
        }
    }
    ctx->pc = 0x251A3Cu;
label_251a3c:
    // 0x251a3c: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x251a3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
label_251a40:
    // 0x251a40: 0x1c40001b  bgtz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x251A40u;
    {
        const bool branch_taken_0x251a40 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x251A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A40u;
        // 0x251a44: 0x24020260  addiu       $v0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251a40) {
            ctx->pc = 0x251AB0u;
            goto label_251ab0;
        }
    }
    ctx->pc = 0x251A48u;
    // 0x251a48: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x251a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x251a4c: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x251a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x251a50: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x251a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x251a54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x251A54u;
    {
        const bool branch_taken_0x251a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A54u;
        // 0x251a58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251a54) {
            ctx->pc = 0x251A6Cu;
            goto label_251a6c;
        }
    }
    ctx->pc = 0x251A5Cu;
    // 0x251a5c: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x251a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x251a60: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x251a60u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x251a64: 0x10000177  b           . + 4 + (0x177 << 2)
    ctx->pc = 0x251A64u;
    {
        const bool branch_taken_0x251a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A64u;
        // 0x251a68: 0xa24202f4  sb          $v0, 0x2F4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251a64) {
            ctx->pc = 0x252044u;
            goto label_252044;
        }
    }
    ctx->pc = 0x251A6Cu;
label_251a6c:
    // 0x251a6c: 0x8e421644  lw          $v0, 0x1644($s2)
    ctx->pc = 0x251a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5700)));
    // 0x251a70: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x251a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x251a74: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x251a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x251a78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x251A78u;
    {
        const bool branch_taken_0x251a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A78u;
        // 0x251a7c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251a78) {
            ctx->pc = 0x251A88u;
            goto label_251a88;
        }
    }
    ctx->pc = 0x251A80u;
    // 0x251a80: 0x1000016d  b           . + 4 + (0x16D << 2)
    ctx->pc = 0x251A80u;
    {
        const bool branch_taken_0x251a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A80u;
        // 0x251a84: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251a80) {
            ctx->pc = 0x252038u;
            goto label_252038;
        }
    }
    ctx->pc = 0x251A88u;
label_251a88:
    // 0x251a88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x251a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251a8c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x251a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x251a90: 0xc097f8c  jal         func_25FE30
    ctx->pc = 0x251A90u;
    SET_GPR_U32(ctx, 31, 0x251A98u);
    ctx->pc = 0x251A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251A90u;
    // 0x251a94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE30u, 0x251A90u, 0x251A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251A98u;
label_251a98:
    // 0x251a98: 0x10400165  beqz        $v0, . + 4 + (0x165 << 2)
    ctx->pc = 0x251A98u;
    {
        const bool branch_taken_0x251a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A98u;
        // 0x251a9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251a98) {
            ctx->pc = 0x252030u;
            goto label_252030;
        }
    }
    ctx->pc = 0x251AA0u;
    // 0x251aa0: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x251aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x251aa4: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x251aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x251aa8: 0x10000166  b           . + 4 + (0x166 << 2)
    ctx->pc = 0x251AA8u;
    {
        const bool branch_taken_0x251aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251AA8u;
        // 0x251aac: 0xa24202f4  sb          $v0, 0x2F4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251aa8) {
            ctx->pc = 0x252044u;
            goto label_252044;
        }
    }
    ctx->pc = 0x251AB0u;
label_251ab0:
    // 0x251ab0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x251AB0u;
    {
        const bool branch_taken_0x251ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x251AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251AB0u;
        // 0x251ab4: 0x28620261  slti        $v0, $v1, 0x261 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)609) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ab0) {
            ctx->pc = 0x251AE0u;
            goto label_251ae0;
        }
    }
    ctx->pc = 0x251AB8u;
    // 0x251ab8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x251AB8u;
    {
        const bool branch_taken_0x251ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251AB8u;
        // 0x251abc: 0x24020256  addiu       $v0, $zero, 0x256 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ab8) {
            ctx->pc = 0x251ACCu;
            goto label_251acc;
        }
    }
    ctx->pc = 0x251AC0u;
    // 0x251ac0: 0x24020279  addiu       $v0, $zero, 0x279
    ctx->pc = 0x251ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 633));
    // 0x251ac4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x251AC4u;
    {
        const bool branch_taken_0x251ac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x251AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251AC4u;
        // 0x251ac8: 0x2402027e  addiu       $v0, $zero, 0x27E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 638));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ac4) {
            ctx->pc = 0x251AD4u;
            goto label_251ad4;
        }
    }
    ctx->pc = 0x251ACCu;
label_251acc:
    // 0x251acc: 0x1462010e  bne         $v1, $v0, . + 4 + (0x10E << 2)
    ctx->pc = 0x251ACCu;
    {
        const bool branch_taken_0x251acc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x251acc) {
            ctx->pc = 0x251F08u;
            goto label_251f08;
        }
    }
    ctx->pc = 0x251AD4u;
label_251ad4:
    // 0x251ad4: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x251ad4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x251ad8: 0x1440010f  bnez        $v0, . + 4 + (0x10F << 2)
    ctx->pc = 0x251AD8u;
    {
        const bool branch_taken_0x251ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251ad8) {
            ctx->pc = 0x251F18u;
            goto label_251f18;
        }
    }
    ctx->pc = 0x251AE0u;
label_251ae0:
    // 0x251ae0: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x251AE0u;
    SET_GPR_U32(ctx, 31, 0x251AE8u);
    ctx->pc = 0x251AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251AE0u;
    // 0x251ae4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x251AE0u, 0x251AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251AE8u;
label_251ae8:
    // 0x251ae8: 0x10000158  b           . + 4 + (0x158 << 2)
    ctx->pc = 0x251AE8u;
    {
        const bool branch_taken_0x251ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251AE8u;
        // 0x251aec: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ae8) {
            ctx->pc = 0x25204Cu;
            goto label_25204c;
        }
    }
    ctx->pc = 0x251AF0u;
label_251af0:
    // 0x251af0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x251af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x251af4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x251af4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x251af8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x251AF8u;
    SET_GPR_U32(ctx, 31, 0x251B00u);
    ctx->pc = 0x251AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251AF8u;
    // 0x251afc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x251AF8u, 0x251B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251B00u;
label_251b00:
    // 0x251b00: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x251b00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x251b04: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x251B04u;
    SET_GPR_U32(ctx, 31, 0x251B0Cu);
    ctx->pc = 0x251B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251B04u;
    // 0x251b08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x251B04u, 0x251B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251B0Cu;
label_251b0c:
    // 0x251b0c: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x251b0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x251b10: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x251b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x251b14: 0x1040014d  beqz        $v0, . + 4 + (0x14D << 2)
    ctx->pc = 0x251B14u;
    {
        const bool branch_taken_0x251b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251B14u;
        // 0x251b18: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b14) {
            ctx->pc = 0x25204Cu;
            goto label_25204c;
        }
    }
    ctx->pc = 0x251B1Cu;
    // 0x251b1c: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x251b1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
    // 0x251b20: 0x5c40001b  bgtzl       $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x251B20u;
    {
        const bool branch_taken_0x251b20 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x251b20) {
            ctx->pc = 0x251B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251B20u;
            // 0x251b24: 0x8e430564  lw          $v1, 0x564($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251B90u;
            goto label_251b90;
        }
    }
    ctx->pc = 0x251B28u;
    // 0x251b28: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x251b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x251b2c: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x251b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x251b30: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x251b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x251b34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x251B34u;
    {
        const bool branch_taken_0x251b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251B34u;
        // 0x251b38: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b34) {
            ctx->pc = 0x251B4Cu;
            goto label_251b4c;
        }
    }
    ctx->pc = 0x251B3Cu;
    // 0x251b3c: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x251b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x251b40: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x251b40u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x251b44: 0x1000013f  b           . + 4 + (0x13F << 2)
    ctx->pc = 0x251B44u;
    {
        const bool branch_taken_0x251b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251B44u;
        // 0x251b48: 0xa24202f4  sb          $v0, 0x2F4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b44) {
            ctx->pc = 0x252044u;
            goto label_252044;
        }
    }
    ctx->pc = 0x251B4Cu;
label_251b4c:
    // 0x251b4c: 0x8e421644  lw          $v0, 0x1644($s2)
    ctx->pc = 0x251b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5700)));
    // 0x251b50: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x251b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x251b54: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x251b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x251b58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x251B58u;
    {
        const bool branch_taken_0x251b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251B58u;
        // 0x251b5c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b58) {
            ctx->pc = 0x251B68u;
            goto label_251b68;
        }
    }
    ctx->pc = 0x251B60u;
    // 0x251b60: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x251B60u;
    {
        const bool branch_taken_0x251b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251B60u;
        // 0x251b64: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b60) {
            ctx->pc = 0x252038u;
            goto label_252038;
        }
    }
    ctx->pc = 0x251B68u;
label_251b68:
    // 0x251b68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x251b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251b6c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x251b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x251b70: 0xc097f8c  jal         func_25FE30
    ctx->pc = 0x251B70u;
    SET_GPR_U32(ctx, 31, 0x251B78u);
    ctx->pc = 0x251B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251B70u;
    // 0x251b74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE30u, 0x251B70u, 0x251B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251B78u;
label_251b78:
    // 0x251b78: 0x1040012d  beqz        $v0, . + 4 + (0x12D << 2)
    ctx->pc = 0x251B78u;
    {
        const bool branch_taken_0x251b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251B78u;
        // 0x251b7c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b78) {
            ctx->pc = 0x252030u;
            goto label_252030;
        }
    }
    ctx->pc = 0x251B80u;
    // 0x251b80: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x251b80u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x251b84: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x251b84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x251b88: 0x1000012e  b           . + 4 + (0x12E << 2)
    ctx->pc = 0x251B88u;
    {
        const bool branch_taken_0x251b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251B88u;
        // 0x251b8c: 0xa24202f4  sb          $v0, 0x2F4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b88) {
            ctx->pc = 0x252044u;
            goto label_252044;
        }
    }
    ctx->pc = 0x251B90u;
label_251b90:
    // 0x251b90: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x251b90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
    // 0x251b94: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x251B94u;
    {
        const bool branch_taken_0x251b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251B94u;
        // 0x251b98: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b94) {
            ctx->pc = 0x251BD4u;
            goto label_251bd4;
        }
    }
    ctx->pc = 0x251B9Cu;
    // 0x251b9c: 0x1040012a  beqz        $v0, . + 4 + (0x12A << 2)
    ctx->pc = 0x251B9Cu;
    {
        const bool branch_taken_0x251b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251B9Cu;
        // 0x251ba0: 0x24020256  addiu       $v0, $zero, 0x256 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b9c) {
            ctx->pc = 0x252048u;
            goto label_252048;
        }
    }
    ctx->pc = 0x251BA4u;
    // 0x251ba4: 0x10620128  beq         $v1, $v0, . + 4 + (0x128 << 2)
    ctx->pc = 0x251BA4u;
    {
        const bool branch_taken_0x251ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x251BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251BA4u;
        // 0x251ba8: 0x28620257  slti        $v0, $v1, 0x257 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)599) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ba4) {
            ctx->pc = 0x252048u;
            goto label_252048;
        }
    }
    ctx->pc = 0x251BACu;
    // 0x251bac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x251BACu;
    {
        const bool branch_taken_0x251bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251BACu;
        // 0x251bb0: 0x28620224  slti        $v0, $v1, 0x224 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)548) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251bac) {
            ctx->pc = 0x251BCCu;
            goto label_251bcc;
        }
    }
    ctx->pc = 0x251BB4u;
    // 0x251bb4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x251BB4u;
    {
        const bool branch_taken_0x251bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251BB4u;
        // 0x251bb8: 0x28620220  slti        $v0, $v1, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251bb4) {
            ctx->pc = 0x251BF4u;
            goto label_251bf4;
        }
    }
    ctx->pc = 0x251BBCu;
    // 0x251bbc: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x251BBCu;
    {
        const bool branch_taken_0x251bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251bbc) {
            ctx->pc = 0x251BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251BBCu;
            // 0x251bc0: 0x924217c1  lbu         $v0, 0x17C1($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6081)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251BF8u;
            goto label_251bf8;
        }
    }
    ctx->pc = 0x251BC4u;
    // 0x251bc4: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x251BC4u;
    {
        const bool branch_taken_0x251bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251BC4u;
        // 0x251bc8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251bc4) {
            ctx->pc = 0x25204Cu;
            goto label_25204c;
        }
    }
    ctx->pc = 0x251BCCu;
label_251bcc:
    // 0x251bcc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x251BCCu;
    {
        const bool branch_taken_0x251bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251BCCu;
        // 0x251bd0: 0x24020260  addiu       $v0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251bcc) {
            ctx->pc = 0x251BECu;
            goto label_251bec;
        }
    }
    ctx->pc = 0x251BD4u;
label_251bd4:
    // 0x251bd4: 0x24020279  addiu       $v0, $zero, 0x279
    ctx->pc = 0x251bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 633));
    // 0x251bd8: 0x1062011b  beq         $v1, $v0, . + 4 + (0x11B << 2)
    ctx->pc = 0x251BD8u;
    {
        const bool branch_taken_0x251bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x251BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251BD8u;
        // 0x251bdc: 0x2862027a  slti        $v0, $v1, 0x27A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)634) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251bd8) {
            ctx->pc = 0x252048u;
            goto label_252048;
        }
    }
    ctx->pc = 0x251BE0u;
    // 0x251be0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x251BE0u;
    {
        const bool branch_taken_0x251be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251BE0u;
        // 0x251be4: 0x2402026a  addiu       $v0, $zero, 0x26A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251be0) {
            ctx->pc = 0x251BECu;
            goto label_251bec;
        }
    }
    ctx->pc = 0x251BE8u;
    // 0x251be8: 0x2402027e  addiu       $v0, $zero, 0x27E
    ctx->pc = 0x251be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 638));
label_251bec:
    // 0x251bec: 0x10620117  beq         $v1, $v0, . + 4 + (0x117 << 2)
    ctx->pc = 0x251BECu;
    {
        const bool branch_taken_0x251bec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x251BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251BECu;
        // 0x251bf0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251bec) {
            ctx->pc = 0x25204Cu;
            goto label_25204c;
        }
    }
    ctx->pc = 0x251BF4u;
label_251bf4:
    // 0x251bf4: 0x924217c1  lbu         $v0, 0x17C1($s2)
    ctx->pc = 0x251bf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6081)));
label_251bf8:
    // 0x251bf8: 0x10400114  beqz        $v0, . + 4 + (0x114 << 2)
    ctx->pc = 0x251BF8u;
    {
        const bool branch_taken_0x251bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251BF8u;
        // 0x251bfc: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251bf8) {
            ctx->pc = 0x25204Cu;
            goto label_25204c;
        }
    }
    ctx->pc = 0x251C00u;
    // 0x251c00: 0x8642056e  lh          $v0, 0x56E($s2)
    ctx->pc = 0x251c00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1390)));
    // 0x251c04: 0x10400112  beqz        $v0, . + 4 + (0x112 << 2)
    ctx->pc = 0x251C04u;
    {
        const bool branch_taken_0x251c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251C04u;
        // 0x251c08: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c04) {
            ctx->pc = 0x252050u;
            goto label_252050;
        }
    }
    ctx->pc = 0x251C0Cu;
    // 0x251c0c: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x251C0Cu;
    SET_GPR_U32(ctx, 31, 0x251C14u);
    ctx->pc = 0x251C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251C0Cu;
    // 0x251c10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x251C0Cu, 0x251C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251C14u;
label_251c14:
    // 0x251c14: 0x5440010d  bnel        $v0, $zero, . + 4 + (0x10D << 2)
    ctx->pc = 0x251C14u;
    {
        const bool branch_taken_0x251c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251c14) {
            ctx->pc = 0x251C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251C14u;
            // 0x251c18: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25204Cu;
            goto label_25204c;
        }
    }
    ctx->pc = 0x251C1Cu;
    // 0x251c1c: 0xc6410618  lwc1        $f1, 0x618($s2)
    ctx->pc = 0x251c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251c20: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x251c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x251c24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x251c24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251c28: 0x0  nop
    ctx->pc = 0x251c28u;
    // NOP
    // 0x251c2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x251c2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251c30: 0x0  nop
    ctx->pc = 0x251c30u;
    // NOP
    // 0x251c34: 0x45000104  bc1f        . + 4 + (0x104 << 2)
    ctx->pc = 0x251C34u;
    {
        const bool branch_taken_0x251c34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x251C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251C34u;
        // 0x251c38: 0xa640056e  sh          $zero, 0x56E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1390), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c34) {
            ctx->pc = 0x252048u;
            goto label_252048;
        }
    }
    ctx->pc = 0x251C3Cu;
    // 0x251c3c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x251C3Cu;
    SET_GPR_U32(ctx, 31, 0x251C44u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x251C3Cu, 0x251C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251C44u;
label_251c44:
    // 0x251c44: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x251c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x251c48: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x251C48u;
    {
        const bool branch_taken_0x251c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251C48u;
        // 0x251c4c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c48) {
            ctx->pc = 0x251C64u;
            goto label_251c64;
        }
    }
    ctx->pc = 0x251C50u;
    // 0x251c50: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x251C50u;
    SET_GPR_U32(ctx, 31, 0x251C58u);
    ctx->pc = 0x251C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251C50u;
    // 0x251c54: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x251C50u, 0x251C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251C58u;
label_251c58:
    // 0x251c58: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x251c58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x251c5c: 0x144000fb  bnez        $v0, . + 4 + (0xFB << 2)
    ctx->pc = 0x251C5Cu;
    {
        const bool branch_taken_0x251c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251C5Cu;
        // 0x251c60: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c5c) {
            ctx->pc = 0x25204Cu;
            goto label_25204c;
        }
    }
    ctx->pc = 0x251C64u;
label_251c64:
    // 0x251c64: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x251c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x251c68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x251c68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251c6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x251c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x251c70: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x251c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x251c74: 0xa24202f4  sb          $v0, 0x2F4($s2)
    ctx->pc = 0x251c74u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x251c78: 0xe640054c  swc1        $f0, 0x54C($s2)
    ctx->pc = 0x251c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
    // 0x251c7c: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x251c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x251c80: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x251c80u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x251c84: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x251C84u;
    {
        const bool branch_taken_0x251c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251C84u;
        // 0x251c88: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c84) {
            ctx->pc = 0x252048u;
            goto label_252048;
        }
    }
    ctx->pc = 0x251C8Cu;
label_251c8c:
    // 0x251c8c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x251C8Cu;
    SET_GPR_U32(ctx, 31, 0x251C94u);
    ctx->pc = 0x251C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251C8Cu;
    // 0x251c90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x251C8Cu, 0x251C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251C94u;
label_251c94:
    // 0x251c94: 0x924302f7  lbu         $v1, 0x2F7($s2)
    ctx->pc = 0x251c94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x251c98: 0x14600038  bnez        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x251C98u;
    {
        const bool branch_taken_0x251c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x251C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251C98u;
        // 0x251c9c: 0x3054ffff  andi        $s4, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c98) {
            ctx->pc = 0x251D7Cu;
            goto label_251d7c;
        }
    }
    ctx->pc = 0x251CA0u;
    // 0x251ca0: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x251ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x251ca4: 0x2444fdfb  addiu       $a0, $v0, -0x205
    ctx->pc = 0x251ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966779));
    // 0x251ca8: 0x2c830075  sltiu       $v1, $a0, 0x75
    ctx->pc = 0x251ca8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)117) ? 1 : 0);
    // 0x251cac: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x251CACu;
    {
        const bool branch_taken_0x251cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x251CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251CACu;
        // 0x251cb0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251cac) {
            ctx->pc = 0x251CCCu;
            goto label_251ccc;
        }
    }
    ctx->pc = 0x251CB4u;
    // 0x251cb4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x251cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x251cb8: 0x2442f910  addiu       $v0, $v0, -0x6F0
    ctx->pc = 0x251cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965520));
    // 0x251cbc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x251cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x251cc0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x251cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x251cc4: 0x800008  jr          $a0
    ctx->pc = 0x251CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x251CCCu: goto label_251ccc;
            case 0x251CDCu: goto label_251cdc;
            case 0x251CECu: goto label_251cec;
            case 0x251CFCu: goto label_251cfc;
            case 0x251D0Cu: goto label_251d0c;
            case 0x251D1Cu: goto label_251d1c;
            case 0x251D2Cu: goto label_251d2c;
            case 0x251D3Cu: goto label_251d3c;
            case 0x251D4Cu: goto label_251d4c;
            case 0x251D5Cu: goto label_251d5c;
            case 0x251D6Cu: goto label_251d6c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251CC4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x251CCCu;
label_251ccc:
    // 0x251ccc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251cd0: 0x8c43058c  lw          $v1, 0x58C($v0)
    ctx->pc = 0x251cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1420)));
    // 0x251cd4: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x251CD4u;
    {
        const bool branch_taken_0x251cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251CD4u;
        // 0x251cd8: 0x8c440590  lw          $a0, 0x590($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251cd4) {
            ctx->pc = 0x251E54u;
            goto label_251e54;
        }
    }
    ctx->pc = 0x251CDCu;
label_251cdc:
    // 0x251cdc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251ce0: 0x8c430a40  lw          $v1, 0xA40($v0)
    ctx->pc = 0x251ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2624)));
    // 0x251ce4: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x251CE4u;
    {
        const bool branch_taken_0x251ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251CE4u;
        // 0x251ce8: 0x8c440a44  lw          $a0, 0xA44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ce4) {
            ctx->pc = 0x251E54u;
            goto label_251e54;
        }
    }
    ctx->pc = 0x251CECu;
label_251cec:
    // 0x251cec: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251cf0: 0x8c430a40  lw          $v1, 0xA40($v0)
    ctx->pc = 0x251cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2624)));
    // 0x251cf4: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x251CF4u;
    {
        const bool branch_taken_0x251cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251CF4u;
        // 0x251cf8: 0x8c440a44  lw          $a0, 0xA44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251cf4) {
            ctx->pc = 0x251E54u;
            goto label_251e54;
        }
    }
    ctx->pc = 0x251CFCu;
label_251cfc:
    // 0x251cfc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251d00: 0x8c433348  lw          $v1, 0x3348($v0)
    ctx->pc = 0x251d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13128)));
    // 0x251d04: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x251D04u;
    {
        const bool branch_taken_0x251d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D04u;
        // 0x251d08: 0x8c44334c  lw          $a0, 0x334C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d04) {
            ctx->pc = 0x251E54u;
            goto label_251e54;
        }
    }
    ctx->pc = 0x251D0Cu;
label_251d0c:
    // 0x251d0c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251d10: 0x8c433860  lw          $v1, 0x3860($v0)
    ctx->pc = 0x251d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14432)));
    // 0x251d14: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x251D14u;
    {
        const bool branch_taken_0x251d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D14u;
        // 0x251d18: 0x8c443864  lw          $a0, 0x3864($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d14) {
            ctx->pc = 0x251E54u;
            goto label_251e54;
        }
    }
    ctx->pc = 0x251D1Cu;
label_251d1c:
    // 0x251d1c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251d20: 0x8c430e84  lw          $v1, 0xE84($v0)
    ctx->pc = 0x251d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
    // 0x251d24: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x251D24u;
    {
        const bool branch_taken_0x251d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D24u;
        // 0x251d28: 0x8c440e88  lw          $a0, 0xE88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d24) {
            ctx->pc = 0x251E54u;
            goto label_251e54;
        }
    }
    ctx->pc = 0x251D2Cu;
label_251d2c:
    // 0x251d2c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251d30: 0x8c4316e8  lw          $v1, 0x16E8($v0)
    ctx->pc = 0x251d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5864)));
    // 0x251d34: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x251D34u;
    {
        const bool branch_taken_0x251d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D34u;
        // 0x251d38: 0x8c4416ec  lw          $a0, 0x16EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5868)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d34) {
            ctx->pc = 0x251E54u;
            goto label_251e54;
        }
    }
    ctx->pc = 0x251D3Cu;
label_251d3c:
    // 0x251d3c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251d40: 0x8c4316e8  lw          $v1, 0x16E8($v0)
    ctx->pc = 0x251d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5864)));
    // 0x251d44: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x251D44u;
    {
        const bool branch_taken_0x251d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D44u;
        // 0x251d48: 0x8c4416ec  lw          $a0, 0x16EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5868)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d44) {
            ctx->pc = 0x251E54u;
            goto label_251e54;
        }
    }
    ctx->pc = 0x251D4Cu;
label_251d4c:
    // 0x251d4c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251d50: 0x8c43058c  lw          $v1, 0x58C($v0)
    ctx->pc = 0x251d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1420)));
    // 0x251d54: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x251D54u;
    {
        const bool branch_taken_0x251d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D54u;
        // 0x251d58: 0x8c440590  lw          $a0, 0x590($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d54) {
            ctx->pc = 0x251E54u;
            goto label_251e54;
        }
    }
    ctx->pc = 0x251D5Cu;
label_251d5c:
    // 0x251d5c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251d60: 0x8c432e9c  lw          $v1, 0x2E9C($v0)
    ctx->pc = 0x251d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11932)));
    // 0x251d64: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x251D64u;
    {
        const bool branch_taken_0x251d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D64u;
        // 0x251d68: 0x8c442ea0  lw          $a0, 0x2EA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d64) {
            ctx->pc = 0x251E54u;
            goto label_251e54;
        }
    }
    ctx->pc = 0x251D6Cu;
label_251d6c:
    // 0x251d6c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251d70: 0x8c4312b0  lw          $v1, 0x12B0($v0)
    ctx->pc = 0x251d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4784)));
    // 0x251d74: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x251D74u;
    {
        const bool branch_taken_0x251d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D74u;
        // 0x251d78: 0x8c4412b4  lw          $a0, 0x12B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d74) {
            ctx->pc = 0x251E54u;
            goto label_251e54;
        }
    }
    ctx->pc = 0x251D7Cu;
label_251d7c:
    // 0x251d7c: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x251d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x251d80: 0x2444fdfb  addiu       $a0, $v0, -0x205
    ctx->pc = 0x251d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966779));
    // 0x251d84: 0x2c830075  sltiu       $v1, $a0, 0x75
    ctx->pc = 0x251d84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)117) ? 1 : 0);
    // 0x251d88: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x251D88u;
    {
        const bool branch_taken_0x251d88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x251D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D88u;
        // 0x251d8c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d88) {
            ctx->pc = 0x251DA8u;
            goto label_251da8;
        }
    }
    ctx->pc = 0x251D90u;
    // 0x251d90: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x251d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x251d94: 0x2442faf0  addiu       $v0, $v0, -0x510
    ctx->pc = 0x251d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966000));
    // 0x251d98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x251d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x251d9c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x251d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x251da0: 0x800008  jr          $a0
    ctx->pc = 0x251DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x251DA8u: goto label_251da8;
            case 0x251DB8u: goto label_251db8;
            case 0x251DC8u: goto label_251dc8;
            case 0x251DD8u: goto label_251dd8;
            case 0x251DE8u: goto label_251de8;
            case 0x251DF8u: goto label_251df8;
            case 0x251E08u: goto label_251e08;
            case 0x251E18u: goto label_251e18;
            case 0x251E28u: goto label_251e28;
            case 0x251E38u: goto label_251e38;
            case 0x251E48u: goto label_251e48;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251DA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x251DA8u;
label_251da8:
    // 0x251da8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251dac: 0x8c4305b0  lw          $v1, 0x5B0($v0)
    ctx->pc = 0x251dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1456)));
    // 0x251db0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x251DB0u;
    {
        const bool branch_taken_0x251db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251DB0u;
        // 0x251db4: 0x8c4405b4  lw          $a0, 0x5B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251db0) {
            ctx->pc = 0x251E54u;
            goto label_251e54;
        }
    }
    ctx->pc = 0x251DB8u;
label_251db8:
    // 0x251db8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251dbc: 0x8c430a60  lw          $v1, 0xA60($v0)
    ctx->pc = 0x251dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2656)));
    // 0x251dc0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x251DC0u;
    {
        const bool branch_taken_0x251dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251DC0u;
        // 0x251dc4: 0x8c440a64  lw          $a0, 0xA64($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251dc0) {
            ctx->pc = 0x251E54u;
            goto label_251e54;
        }
    }
    ctx->pc = 0x251DC8u;
label_251dc8:
    // 0x251dc8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251dcc: 0x8c430a40  lw          $v1, 0xA40($v0)
    ctx->pc = 0x251dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2624)));
    // 0x251dd0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x251DD0u;
    {
        const bool branch_taken_0x251dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251DD0u;
        // 0x251dd4: 0x8c440a44  lw          $a0, 0xA44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251dd0) {
            ctx->pc = 0x251E54u;
            goto label_251e54;
        }
    }
    ctx->pc = 0x251DD8u;
label_251dd8:
    // 0x251dd8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251ddc: 0x8c433360  lw          $v1, 0x3360($v0)
    ctx->pc = 0x251ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13152)));
    // 0x251de0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x251DE0u;
    {
        const bool branch_taken_0x251de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251DE0u;
        // 0x251de4: 0x8c443364  lw          $a0, 0x3364($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251de0) {
            ctx->pc = 0x251E54u;
            goto label_251e54;
        }
    }
    ctx->pc = 0x251DE8u;
label_251de8:
    // 0x251de8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251dec: 0x8c433878  lw          $v1, 0x3878($v0)
    ctx->pc = 0x251decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14456)));
    // 0x251df0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x251DF0u;
    {
        const bool branch_taken_0x251df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251DF0u;
        // 0x251df4: 0x8c44387c  lw          $a0, 0x387C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251df0) {
            ctx->pc = 0x251E54u;
            goto label_251e54;
        }
    }
    ctx->pc = 0x251DF8u;
label_251df8:
    // 0x251df8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251dfc: 0x8c430ea4  lw          $v1, 0xEA4($v0)
    ctx->pc = 0x251dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x251e00: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x251E00u;
    {
        const bool branch_taken_0x251e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E00u;
        // 0x251e04: 0x8c440ea8  lw          $a0, 0xEA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251e00) {
            ctx->pc = 0x251E54u;
            goto label_251e54;
        }
    }
    ctx->pc = 0x251E08u;
label_251e08:
    // 0x251e08: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251e0c: 0x8c431708  lw          $v1, 0x1708($v0)
    ctx->pc = 0x251e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5896)));
    // 0x251e10: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x251E10u;
    {
        const bool branch_taken_0x251e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E10u;
        // 0x251e14: 0x8c44170c  lw          $a0, 0x170C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5900)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251e10) {
            ctx->pc = 0x251E54u;
            goto label_251e54;
        }
    }
    ctx->pc = 0x251E18u;
label_251e18:
    // 0x251e18: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251e1c: 0x8c431708  lw          $v1, 0x1708($v0)
    ctx->pc = 0x251e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5896)));
    // 0x251e20: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x251E20u;
    {
        const bool branch_taken_0x251e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E20u;
        // 0x251e24: 0x8c44170c  lw          $a0, 0x170C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5900)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251e20) {
            ctx->pc = 0x251E54u;
            goto label_251e54;
        }
    }
    ctx->pc = 0x251E28u;
label_251e28:
    // 0x251e28: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251e2c: 0x8c4305b0  lw          $v1, 0x5B0($v0)
    ctx->pc = 0x251e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1456)));
    // 0x251e30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x251E30u;
    {
        const bool branch_taken_0x251e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E30u;
        // 0x251e34: 0x8c4405b4  lw          $a0, 0x5B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251e30) {
            ctx->pc = 0x251E54u;
            goto label_251e54;
        }
    }
    ctx->pc = 0x251E38u;
label_251e38:
    // 0x251e38: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251e3c: 0x8c432e9c  lw          $v1, 0x2E9C($v0)
    ctx->pc = 0x251e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11932)));
    // 0x251e40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x251E40u;
    {
        const bool branch_taken_0x251e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E40u;
        // 0x251e44: 0x8c442ea0  lw          $a0, 0x2EA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251e40) {
            ctx->pc = 0x251E54u;
            goto label_251e54;
        }
    }
    ctx->pc = 0x251E48u;
label_251e48:
    // 0x251e48: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x251e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x251e4c: 0x8c4312d0  lw          $v1, 0x12D0($v0)
    ctx->pc = 0x251e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4816)));
    // 0x251e50: 0x8c4412d4  lw          $a0, 0x12D4($v0)
    ctx->pc = 0x251e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4820)));
label_251e54:
    // 0x251e54: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x251e54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x251e58: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x251e58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x251e5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x251e5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x251e60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x251e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251e64: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x251e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251e68: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x251e68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251e6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x251e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251e70: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x251e70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x251e74: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x251E74u;
    SET_GPR_U32(ctx, 31, 0x251E7Cu);
    ctx->pc = 0x251E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251E74u;
    // 0x251e78: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x251E74u, 0x251E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251E7Cu;
label_251e7c:
    // 0x251e7c: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x251e7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x251e80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x251e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x251e84: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x251e84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_251e88:
    // 0x251e88: 0xc055f06  jal         func_157C18
    ctx->pc = 0x251E88u;
    SET_GPR_U32(ctx, 31, 0x251E90u);
    ctx->pc = 0x251E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251E88u;
    // 0x251e8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x251E88u, 0x251E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251E90u;
label_251e90:
    // 0x251e90: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x251E90u;
    {
        const bool branch_taken_0x251e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x251e90) {
            ctx->pc = 0x251E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251E90u;
            // 0x251e94: 0xc64005c8  lwc1        $f0, 0x5C8($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x251F28u;
            goto label_251f28;
        }
    }
    ctx->pc = 0x251E98u;
    // 0x251e98: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x251e98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
    // 0x251e9c: 0x1c40001a  bgtz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x251E9Cu;
    {
        const bool branch_taken_0x251e9c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x251EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E9Cu;
        // 0x251ea0: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251e9c) {
            ctx->pc = 0x251F08u;
            goto label_251f08;
        }
    }
    ctx->pc = 0x251EA4u;
    // 0x251ea4: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x251ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x251ea8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x251ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x251eac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x251EACu;
    {
        const bool branch_taken_0x251eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251EACu;
        // 0x251eb0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251eac) {
            ctx->pc = 0x251EC4u;
            goto label_251ec4;
        }
    }
    ctx->pc = 0x251EB4u;
    // 0x251eb4: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x251eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x251eb8: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x251eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x251ebc: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x251EBCu;
    {
        const bool branch_taken_0x251ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251EBCu;
        // 0x251ec0: 0xa24202f4  sb          $v0, 0x2F4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ebc) {
            ctx->pc = 0x252044u;
            goto label_252044;
        }
    }
    ctx->pc = 0x251EC4u;
label_251ec4:
    // 0x251ec4: 0x8e421644  lw          $v0, 0x1644($s2)
    ctx->pc = 0x251ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5700)));
    // 0x251ec8: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x251ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x251ecc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x251eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x251ed0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x251ED0u;
    {
        const bool branch_taken_0x251ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251ED0u;
        // 0x251ed4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ed0) {
            ctx->pc = 0x251EE0u;
            goto label_251ee0;
        }
    }
    ctx->pc = 0x251ED8u;
    // 0x251ed8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x251ED8u;
    {
        const bool branch_taken_0x251ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251ED8u;
        // 0x251edc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ed8) {
            ctx->pc = 0x252038u;
            goto label_252038;
        }
    }
    ctx->pc = 0x251EE0u;
label_251ee0:
    // 0x251ee0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x251ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251ee4: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x251ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x251ee8: 0xc097f8c  jal         func_25FE30
    ctx->pc = 0x251EE8u;
    SET_GPR_U32(ctx, 31, 0x251EF0u);
    ctx->pc = 0x251EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251EE8u;
    // 0x251eec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE30u, 0x251EE8u, 0x251EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251EF0u;
label_251ef0:
    // 0x251ef0: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x251EF0u;
    {
        const bool branch_taken_0x251ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251EF0u;
        // 0x251ef4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ef0) {
            ctx->pc = 0x252030u;
            goto label_252030;
        }
    }
    ctx->pc = 0x251EF8u;
    // 0x251ef8: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x251ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x251efc: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x251efcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x251f00: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x251F00u;
    {
        const bool branch_taken_0x251f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F00u;
        // 0x251f04: 0xa24202f4  sb          $v0, 0x2F4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251f00) {
            ctx->pc = 0x252044u;
            goto label_252044;
        }
    }
    ctx->pc = 0x251F08u;
label_251f08:
    // 0x251f08: 0xc09d3a6  jal         func_274E98
    ctx->pc = 0x251F08u;
    SET_GPR_U32(ctx, 31, 0x251F10u);
    ctx->pc = 0x251F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251F08u;
    // 0x251f0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274E98u, 0x251F08u, 0x251F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251F10u;
label_251f10:
    // 0x251f10: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x251F10u;
    {
        const bool branch_taken_0x251f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F10u;
        // 0x251f14: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251f10) {
            ctx->pc = 0x25204Cu;
            goto label_25204c;
        }
    }
    ctx->pc = 0x251F18u;
label_251f18:
    // 0x251f18: 0xc09d3fa  jal         func_274FE8
    ctx->pc = 0x251F18u;
    SET_GPR_U32(ctx, 31, 0x251F20u);
    ctx->pc = 0x251F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251F18u;
    // 0x251f1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274FE8u, 0x251F18u, 0x251F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251F20u;
label_251f20:
    // 0x251f20: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x251F20u;
    {
        const bool branch_taken_0x251f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F20u;
        // 0x251f24: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251f20) {
            ctx->pc = 0x25204Cu;
            goto label_25204c;
        }
    }
    ctx->pc = 0x251F28u;
label_251f28:
    // 0x251f28: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x251f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x251f2c: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x251f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
    // 0x251f30: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x251f30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x251f34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x251f34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x251f38: 0x264205c0  addiu       $v0, $s2, 0x5C0
    ctx->pc = 0x251f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
    // 0x251f3c: 0xc64205a8  lwc1        $f2, 0x5A8($s2)
    ctx->pc = 0x251f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x251f40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x251f40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x251f44: 0xe64005c8  swc1        $f0, 0x5C8($s2)
    ctx->pc = 0x251f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1480), bits); }
    // 0x251f48: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x251f48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x251f4c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x251f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x251f50: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x251f50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251f54: 0x44081000  mfc1        $t0, $f2
    ctx->pc = 0x251f54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x251f58: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x251f58u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x251f5c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x251f5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x251f60: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x251f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x251f64: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x251f64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x251f68: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x251f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x251f6c: 0x26420330  addiu       $v0, $s2, 0x330
    ctx->pc = 0x251f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
    // 0x251f70: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x251F70u;
    {
        const bool branch_taken_0x251f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x251F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F70u;
        // 0x251f74: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x251f70) {
            ctx->pc = 0x251F8Cu;
            goto label_251f8c;
        }
    }
    ctx->pc = 0x251F78u;
    // 0x251f78: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x251f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251f7c: 0xe6400330  swc1        $f0, 0x330($s2)
    ctx->pc = 0x251f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 816), bits); }
    // 0x251f80: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x251f80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x251f84: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x251f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251f88: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x251f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_251f8c:
    // 0x251f8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x251f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x251f90: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x251f90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x251f94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x251f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251f98: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x251F98u;
    SET_GPR_U32(ctx, 31, 0x251FA0u);
    ctx->pc = 0x251F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251F98u;
    // 0x251f9c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x251F98u, 0x251FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251FA0u;
label_251fa0:
    // 0x251fa0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x251fa0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x251fa4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x251FA4u;
    SET_GPR_U32(ctx, 31, 0x251FACu);
    ctx->pc = 0x251FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251FA4u;
    // 0x251fa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x251FA4u, 0x251FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251FACu;
label_251fac:
    // 0x251fac: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x251facu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x251fb0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x251fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x251fb4: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x251FB4u;
    {
        const bool branch_taken_0x251fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251FB4u;
        // 0x251fb8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251fb4) {
            ctx->pc = 0x25204Cu;
            goto label_25204c;
        }
    }
    ctx->pc = 0x251FBCu;
    // 0x251fbc: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x251fbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
    // 0x251fc0: 0x1c400023  bgtz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x251FC0u;
    {
        const bool branch_taken_0x251fc0 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x251FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251FC0u;
        // 0x251fc4: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251fc0) {
            ctx->pc = 0x252050u;
            goto label_252050;
        }
    }
    ctx->pc = 0x251FC8u;
    // 0x251fc8: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x251fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x251fcc: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x251fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x251fd0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x251fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x251fd4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x251FD4u;
    {
        const bool branch_taken_0x251fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251FD4u;
        // 0x251fd8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251fd4) {
            ctx->pc = 0x251FECu;
            goto label_251fec;
        }
    }
    ctx->pc = 0x251FDCu;
    // 0x251fdc: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x251fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x251fe0: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x251fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x251fe4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x251FE4u;
    {
        const bool branch_taken_0x251fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251FE4u;
        // 0x251fe8: 0xa24202f4  sb          $v0, 0x2F4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251fe4) {
            ctx->pc = 0x252044u;
            goto label_252044;
        }
    }
    ctx->pc = 0x251FECu;
label_251fec:
    // 0x251fec: 0x8e421644  lw          $v0, 0x1644($s2)
    ctx->pc = 0x251fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5700)));
    // 0x251ff0: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x251ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x251ff4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x251ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x251ff8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x251FF8u;
    {
        const bool branch_taken_0x251ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251FF8u;
        // 0x251ffc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ff8) {
            ctx->pc = 0x252008u;
            goto label_252008;
        }
    }
    ctx->pc = 0x252000u;
    // 0x252000: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x252000u;
    {
        const bool branch_taken_0x252000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252000u;
        // 0x252004: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252000) {
            ctx->pc = 0x252038u;
            goto label_252038;
        }
    }
    ctx->pc = 0x252008u;
label_252008:
    // 0x252008: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x252008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25200c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x25200cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x252010: 0xc097f8c  jal         func_25FE30
    ctx->pc = 0x252010u;
    SET_GPR_U32(ctx, 31, 0x252018u);
    ctx->pc = 0x252014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252010u;
    // 0x252014: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE30u, 0x252010u, 0x252018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252018u;
label_252018:
    // 0x252018: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x252018u;
    {
        const bool branch_taken_0x252018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252018u;
        // 0x25201c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252018) {
            ctx->pc = 0x252030u;
            goto label_252030;
        }
    }
    ctx->pc = 0x252020u;
    // 0x252020: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x252020u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x252024: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x252024u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x252028: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x252028u;
    {
        const bool branch_taken_0x252028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252028u;
        // 0x25202c: 0xa24202f4  sb          $v0, 0x2F4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252028) {
            ctx->pc = 0x252044u;
            goto label_252044;
        }
    }
    ctx->pc = 0x252030u;
label_252030:
    // 0x252030: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x252030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x252034: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x252034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_252038:
    // 0x252038: 0xa24202f4  sb          $v0, 0x2F4($s2)
    ctx->pc = 0x252038u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x25203c: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x25203cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x252040: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x252040u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_252044:
    // 0x252044: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x252044u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_252048:
    // 0x252048: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x252048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_25204c:
    // 0x25204c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x25204cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_252050:
    // 0x252050: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x252050u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x252054: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x252054u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x252058: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x252058u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25205c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25205cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252060: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x252060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x252064: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x252064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x252068: 0x3e00008  jr          $ra
    ctx->pc = 0x252068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252068u;
        // 0x25206c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252070u;
}
