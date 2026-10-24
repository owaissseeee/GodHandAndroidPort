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

// Function: func_001643F8
// Address: 0x1643f8 - 0x1645e0
void func_001643F8_0x1643f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001643F8_0x1643f8");
#endif

    switch (ctx->pc) {
        case 0x16445cu: goto label_16445c;
        case 0x1644a8u: goto label_1644a8;
        case 0x16453cu: goto label_16453c;
        case 0x1645acu: goto label_1645ac;
        default: break;
    }

    ctx->pc = 0x1643f8u;

    // 0x1643f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1643f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1643fc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1643fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x164400: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x164400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x164404: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x164404u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x164408: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x164408u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x16440c: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x16440cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x164410: 0x52a78  dsll        $a1, $a1, 9
    ctx->pc = 0x164410u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 9);
    // 0x164414: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x164414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x164418: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x164418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16441c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x16441cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x164420: 0x245174a0  addiu       $s1, $v0, 0x74A0
    ctx->pc = 0x164420u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x164424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x164424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x164428: 0xde2301b0  ld          $v1, 0x1B0($s1)
    ctx->pc = 0x164428u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x16442c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x16442cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x164430: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x164430u;
    {
        const bool branch_taken_0x164430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x164434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164430u;
        // 0x164434: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164430) {
            ctx->pc = 0x164468u;
            goto label_164468;
        }
    }
    ctx->pc = 0x164438u;
    // 0x164438: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x164438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x16443c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16443cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164440: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x164440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x164444: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x164444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x164448: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x164448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16444c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16444cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x164450: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x164450u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164454: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x164454u;
    SET_GPR_U32(ctx, 31, 0x16445Cu);
    ctx->pc = 0x164458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164454u;
    // 0x164458: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x164454u, 0x16445Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16445Cu;
label_16445c:
    // 0x16445c: 0x96030130  lhu         $v1, 0x130($s0)
    ctx->pc = 0x16445cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x164460: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x164460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x164464: 0xa6030130  sh          $v1, 0x130($s0)
    ctx->pc = 0x164464u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 304), (uint16_t)GPR_U32(ctx, 3));
label_164468:
    // 0x164468: 0xde2201b0  ld          $v0, 0x1B0($s1)
    ctx->pc = 0x164468u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x16446c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x16446cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x164470: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x164470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x164474: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x164474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x164478: 0x31ab8  dsll        $v1, $v1, 10
    ctx->pc = 0x164478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 10);
    // 0x16447c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x16447cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x164480: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x164480u;
    {
        const bool branch_taken_0x164480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164480u;
        // 0x164484: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164480) {
            ctx->pc = 0x1644B4u;
            goto label_1644b4;
        }
    }
    ctx->pc = 0x164488u;
    // 0x164488: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x164488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16448c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16448cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x164490: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x164490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x164494: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x164494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x164498: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x164498u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16449c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16449cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1644a0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1644A0u;
    SET_GPR_U32(ctx, 31, 0x1644A8u);
    ctx->pc = 0x1644A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1644A0u;
    // 0x1644a4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1644A0u, 0x1644A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1644A8u;
label_1644a8:
    // 0x1644a8: 0x96030130  lhu         $v1, 0x130($s0)
    ctx->pc = 0x1644a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1644ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1644acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1644b0: 0xa6030130  sh          $v1, 0x130($s0)
    ctx->pc = 0x1644b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 304), (uint16_t)GPR_U32(ctx, 3));
label_1644b4:
    // 0x1644b4: 0x8e220584  lw          $v0, 0x584($s1)
    ctx->pc = 0x1644b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1412)));
    // 0x1644b8: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x1644b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
    // 0x1644bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1644bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1644c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1644C0u;
    {
        const bool branch_taken_0x1644c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1644C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644C0u;
        // 0x1644c4: 0x86020130  lh          $v0, 0x130($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644c0) {
            ctx->pc = 0x1644DCu;
            goto label_1644dc;
        }
    }
    ctx->pc = 0x1644C8u;
    // 0x1644c8: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1644C8u;
    {
        const bool branch_taken_0x1644c8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1644CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644C8u;
        // 0x1644cc: 0x96040130  lhu         $a0, 0x130($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644c8) {
            ctx->pc = 0x1644FCu;
            goto label_1644fc;
        }
    }
    ctx->pc = 0x1644D0u;
    // 0x1644d0: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1644d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1644d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1644D4u;
    {
        const bool branch_taken_0x1644d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1644D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644D4u;
        // 0x1644d8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644d4) {
            ctx->pc = 0x1644ECu;
            goto label_1644ec;
        }
    }
    ctx->pc = 0x1644DCu;
label_1644dc:
    // 0x1644dc: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1644DCu;
    {
        const bool branch_taken_0x1644dc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1644E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644DCu;
        // 0x1644e0: 0x96040130  lhu         $a0, 0x130($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644dc) {
            ctx->pc = 0x1644FCu;
            goto label_1644fc;
        }
    }
    ctx->pc = 0x1644E4u;
    // 0x1644e4: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1644e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1644e8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1644e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1644ec:
    // 0x1644ec: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1644ECu;
    {
        const bool branch_taken_0x1644ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1644ec) {
            ctx->pc = 0x1644F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1644ECu;
            // 0x1644f0: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164500u;
            goto label_164500;
        }
    }
    ctx->pc = 0x1644F4u;
    // 0x1644f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1644F4u;
    {
        const bool branch_taken_0x1644f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1644F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644F4u;
        // 0x1644f8: 0xa6030130  sh          $v1, 0x130($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 304), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644f4) {
            ctx->pc = 0x164504u;
            goto label_164504;
        }
    }
    ctx->pc = 0x1644FCu;
label_1644fc:
    // 0x1644fc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1644fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_164500:
    // 0x164500: 0xa6030130  sh          $v1, 0x130($s0)
    ctx->pc = 0x164500u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 304), (uint16_t)GPR_U32(ctx, 3));
label_164504:
    // 0x164504: 0x265174a0  addiu       $s1, $s2, 0x74A0
    ctx->pc = 0x164504u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
    // 0x164508: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x164508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x16450c: 0xde2201a0  ld          $v0, 0x1A0($s1)
    ctx->pc = 0x16450cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x164510: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x164510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x164514: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x164514u;
    {
        const bool branch_taken_0x164514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164514u;
        // 0x164518: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164514) {
            ctx->pc = 0x1645C8u;
            goto label_1645c8;
        }
    }
    ctx->pc = 0x16451Cu;
    // 0x16451c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16451cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164520: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x164520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x164524: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x164524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x164528: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x164528u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16452c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16452cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x164530: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x164530u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164534: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x164534u;
    SET_GPR_U32(ctx, 31, 0x16453Cu);
    ctx->pc = 0x164538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164534u;
    // 0x164538: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x164534u, 0x16453Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16453Cu;
label_16453c:
    // 0x16453c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16453cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x164540: 0x86030130  lh          $v1, 0x130($s0)
    ctx->pc = 0x164540u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x164544: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x164544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164548: 0x10640012  beq         $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x164548u;
    {
        const bool branch_taken_0x164548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x16454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164548u;
        // 0x16454c: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164548) {
            ctx->pc = 0x164594u;
            goto label_164594;
        }
    }
    ctx->pc = 0x164550u;
    // 0x164550: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x164550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x164554: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x164554u;
    {
        const bool branch_taken_0x164554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164554) {
            ctx->pc = 0x164558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164554u;
            // 0x164558: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16456Cu;
            goto label_16456c;
        }
    }
    ctx->pc = 0x16455Cu;
    // 0x16455c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x16455Cu;
    {
        const bool branch_taken_0x16455c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x164560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16455Cu;
        // 0x164560: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16455c) {
            ctx->pc = 0x164584u;
            goto label_164584;
        }
    }
    ctx->pc = 0x164564u;
    // 0x164564: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x164564u;
    {
        const bool branch_taken_0x164564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164564u;
        // 0x164568: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164564) {
            ctx->pc = 0x1645CCu;
            goto label_1645cc;
        }
    }
    ctx->pc = 0x16456Cu;
label_16456c:
    // 0x16456c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x16456Cu;
    {
        const bool branch_taken_0x16456c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x164570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16456Cu;
        // 0x164570: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16456c) {
            ctx->pc = 0x1645C0u;
            goto label_1645c0;
        }
    }
    ctx->pc = 0x164574u;
    // 0x164574: 0x50620013  beql        $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x164574u;
    {
        const bool branch_taken_0x164574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x164574) {
            ctx->pc = 0x164578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164574u;
            // 0x164578: 0xa6000136  sh          $zero, 0x136($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 310), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1645C4u;
            goto label_1645c4;
        }
    }
    ctx->pc = 0x16457Cu;
    // 0x16457c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x16457Cu;
    {
        const bool branch_taken_0x16457c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16457Cu;
        // 0x164580: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16457c) {
            ctx->pc = 0x1645CCu;
            goto label_1645cc;
        }
    }
    ctx->pc = 0x164584u;
label_164584:
    // 0x164584: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x164584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x164588: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x164588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x16458c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x16458Cu;
    {
        const bool branch_taken_0x16458c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16458Cu;
        // 0x164590: 0xa6030134  sh          $v1, 0x134($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 308), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16458c) {
            ctx->pc = 0x1645C8u;
            goto label_1645c8;
        }
    }
    ctx->pc = 0x164594u;
label_164594:
    // 0x164594: 0x962305b0  lhu         $v1, 0x5B0($s1)
    ctx->pc = 0x164594u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1456)));
    // 0x164598: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x164598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x16459c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16459Cu;
    {
        const bool branch_taken_0x16459c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1645A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16459Cu;
        // 0x1645a0: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16459c) {
            ctx->pc = 0x1645B4u;
            goto label_1645b4;
        }
    }
    ctx->pc = 0x1645A4u;
    // 0x1645a4: 0xc059178  jal         func_1645E0
    ctx->pc = 0x1645A4u;
    SET_GPR_U32(ctx, 31, 0x1645ACu);
    ctx->pc = 0x1645A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1645A4u;
    // 0x1645a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1645E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1645E0u, 0x1645A4u, 0x1645ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1645ACu;
label_1645ac:
    // 0x1645ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1645ACu;
    {
        const bool branch_taken_0x1645ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1645B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1645ACu;
        // 0x1645b0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1645ac) {
            ctx->pc = 0x1645CCu;
            goto label_1645cc;
        }
    }
    ctx->pc = 0x1645B4u;
label_1645b4:
    // 0x1645b4: 0x94433ed4  lhu         $v1, 0x3ED4($v0)
    ctx->pc = 0x1645b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16084)));
    // 0x1645b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1645B8u;
    {
        const bool branch_taken_0x1645b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1645BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1645B8u;
        // 0x1645bc: 0xa6030134  sh          $v1, 0x134($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 308), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1645b8) {
            ctx->pc = 0x1645C8u;
            goto label_1645c8;
        }
    }
    ctx->pc = 0x1645C0u;
label_1645c0:
    // 0x1645c0: 0xa6040136  sh          $a0, 0x136($s0)
    ctx->pc = 0x1645c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 310), (uint16_t)GPR_U32(ctx, 4));
label_1645c4:
    // 0x1645c4: 0xa6000134  sh          $zero, 0x134($s0)
    ctx->pc = 0x1645c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 308), (uint16_t)GPR_U32(ctx, 0));
label_1645c8:
    // 0x1645c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1645c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1645cc:
    // 0x1645cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1645ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1645d0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1645d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1645d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1645d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1645d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1645D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1645DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1645D8u;
        // 0x1645dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1645D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1645E0u;
}
