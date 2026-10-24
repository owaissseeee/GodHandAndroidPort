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

// Function: func_00164238
// Address: 0x164238 - 0x1643f8
void func_00164238_0x164238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00164238_0x164238");
#endif

    switch (ctx->pc) {
        case 0x1642b8u: goto label_1642b8;
        case 0x164304u: goto label_164304;
        case 0x164370u: goto label_164370;
        case 0x1643d0u: goto label_1643d0;
        default: break;
    }

    ctx->pc = 0x164238u;

    // 0x164238: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x164238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16423c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16423cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164240: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x164240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x164244: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x164244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x164248: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x164248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16424c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x16424cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x164250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x164250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x164254: 0x8203005b  lb          $v1, 0x5B($s0)
    ctx->pc = 0x164254u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 91)));
    // 0x164258: 0x54620062  bnel        $v1, $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x164258u;
    {
        const bool branch_taken_0x164258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x164258) {
            ctx->pc = 0x16425Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164258u;
            // 0x16425c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1643E4u;
            goto label_1643e4;
        }
    }
    ctx->pc = 0x164260u;
    // 0x164260: 0x8202005c  lb          $v0, 0x5C($s0)
    ctx->pc = 0x164260u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x164264: 0x5443005f  bnel        $v0, $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x164264u;
    {
        const bool branch_taken_0x164264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x164264) {
            ctx->pc = 0x164268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164264u;
            // 0x164268: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1643E4u;
            goto label_1643e4;
        }
    }
    ctx->pc = 0x16426Cu;
    // 0x16426c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x16426cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x164270: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x164270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x164274: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x164274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x164278: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x164278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x16427c: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x16427cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x164280: 0x245174a0  addiu       $s1, $v0, 0x74A0
    ctx->pc = 0x164280u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x164284: 0xde2301b0  ld          $v1, 0x1B0($s1)
    ctx->pc = 0x164284u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x164288: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x164288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x16428c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x16428Cu;
    {
        const bool branch_taken_0x16428c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x164290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16428Cu;
        // 0x164290: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16428c) {
            ctx->pc = 0x1642C4u;
            goto label_1642c4;
        }
    }
    ctx->pc = 0x164294u;
    // 0x164294: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x164294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x164298: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x164298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16429c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x16429cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1642a0: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1642a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1642a4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1642a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1642a8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1642a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1642ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1642acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1642b0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1642B0u;
    SET_GPR_U32(ctx, 31, 0x1642B8u);
    ctx->pc = 0x1642B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1642B0u;
    // 0x1642b4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1642B0u, 0x1642B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1642B8u;
label_1642b8:
    // 0x1642b8: 0x96030130  lhu         $v1, 0x130($s0)
    ctx->pc = 0x1642b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1642bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1642bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1642c0: 0xa6030130  sh          $v1, 0x130($s0)
    ctx->pc = 0x1642c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 304), (uint16_t)GPR_U32(ctx, 3));
label_1642c4:
    // 0x1642c4: 0xde2201b0  ld          $v0, 0x1B0($s1)
    ctx->pc = 0x1642c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x1642c8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1642c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1642cc: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1642ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1642d0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1642d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1642d4: 0x31ab8  dsll        $v1, $v1, 10
    ctx->pc = 0x1642d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 10);
    // 0x1642d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1642d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1642dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1642DCu;
    {
        const bool branch_taken_0x1642dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1642E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1642DCu;
        // 0x1642e0: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1642dc) {
            ctx->pc = 0x164310u;
            goto label_164310;
        }
    }
    ctx->pc = 0x1642E4u;
    // 0x1642e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1642e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1642e8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1642e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1642ec: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1642ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1642f0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1642f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1642f4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1642f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1642f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1642f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1642fc: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1642FCu;
    SET_GPR_U32(ctx, 31, 0x164304u);
    ctx->pc = 0x164300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1642FCu;
    // 0x164300: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1642FCu, 0x164304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164304u;
label_164304:
    // 0x164304: 0x96030130  lhu         $v1, 0x130($s0)
    ctx->pc = 0x164304u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x164308: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x164308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16430c: 0xa6030130  sh          $v1, 0x130($s0)
    ctx->pc = 0x16430cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 304), (uint16_t)GPR_U32(ctx, 3));
label_164310:
    // 0x164310: 0x86020130  lh          $v0, 0x130($s0)
    ctx->pc = 0x164310u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x164314: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x164314u;
    {
        const bool branch_taken_0x164314 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x164318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164314u;
        // 0x164318: 0x96040130  lhu         $a0, 0x130($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164314) {
            ctx->pc = 0x164330u;
            goto label_164330;
        }
    }
    ctx->pc = 0x16431Cu;
    // 0x16431c: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x16431cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x164320: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164320u;
    {
        const bool branch_taken_0x164320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164320u;
        // 0x164324: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164320) {
            ctx->pc = 0x164334u;
            goto label_164334;
        }
    }
    ctx->pc = 0x164328u;
    // 0x164328: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x164328u;
    {
        const bool branch_taken_0x164328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164328u;
        // 0x16432c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164328) {
            ctx->pc = 0x164334u;
            goto label_164334;
        }
    }
    ctx->pc = 0x164330u;
label_164330:
    // 0x164330: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x164330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_164334:
    // 0x164334: 0xa6030130  sh          $v1, 0x130($s0)
    ctx->pc = 0x164334u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 304), (uint16_t)GPR_U32(ctx, 3));
    // 0x164338: 0x264274a0  addiu       $v0, $s2, 0x74A0
    ctx->pc = 0x164338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
    // 0x16433c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x16433cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x164340: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x164340u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x164344: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x164344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x164348: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x164348u;
    {
        const bool branch_taken_0x164348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164348u;
        // 0x16434c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164348) {
            ctx->pc = 0x1643E0u;
            goto label_1643e0;
        }
    }
    ctx->pc = 0x164350u;
    // 0x164350: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x164350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164354: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x164354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x164358: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x164358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x16435c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16435cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x164360: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x164360u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x164364: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x164364u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164368: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x164368u;
    SET_GPR_U32(ctx, 31, 0x164370u);
    ctx->pc = 0x16436Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164368u;
    // 0x16436c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x164368u, 0x164370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164370u;
label_164370:
    // 0x164370: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x164370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x164374: 0x86030130  lh          $v1, 0x130($s0)
    ctx->pc = 0x164374u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x164378: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x164378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16437c: 0x10640012  beq         $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x16437Cu;
    {
        const bool branch_taken_0x16437c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x164380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16437Cu;
        // 0x164380: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16437c) {
            ctx->pc = 0x1643C8u;
            goto label_1643c8;
        }
    }
    ctx->pc = 0x164384u;
    // 0x164384: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x164384u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x164388: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x164388u;
    {
        const bool branch_taken_0x164388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164388) {
            ctx->pc = 0x16438Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164388u;
            // 0x16438c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1643A0u;
            goto label_1643a0;
        }
    }
    ctx->pc = 0x164390u;
    // 0x164390: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x164390u;
    {
        const bool branch_taken_0x164390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x164394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164390u;
        // 0x164394: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164390) {
            ctx->pc = 0x1643B8u;
            goto label_1643b8;
        }
    }
    ctx->pc = 0x164398u;
    // 0x164398: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x164398u;
    {
        const bool branch_taken_0x164398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164398u;
        // 0x16439c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164398) {
            ctx->pc = 0x1643E4u;
            goto label_1643e4;
        }
    }
    ctx->pc = 0x1643A0u;
label_1643a0:
    // 0x1643a0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1643A0u;
    {
        const bool branch_taken_0x1643a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1643A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1643A0u;
        // 0x1643a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1643a0) {
            ctx->pc = 0x1643D8u;
            goto label_1643d8;
        }
    }
    ctx->pc = 0x1643A8u;
    // 0x1643a8: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1643A8u;
    {
        const bool branch_taken_0x1643a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1643a8) {
            ctx->pc = 0x1643ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1643A8u;
            // 0x1643ac: 0xa6000136  sh          $zero, 0x136($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 310), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1643DCu;
            goto label_1643dc;
        }
    }
    ctx->pc = 0x1643B0u;
    // 0x1643b0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1643B0u;
    {
        const bool branch_taken_0x1643b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1643B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1643B0u;
        // 0x1643b4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1643b0) {
            ctx->pc = 0x1643E4u;
            goto label_1643e4;
        }
    }
    ctx->pc = 0x1643B8u;
label_1643b8:
    // 0x1643b8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1643b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1643bc: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1643bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1643c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1643C0u;
    {
        const bool branch_taken_0x1643c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1643C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1643C0u;
        // 0x1643c4: 0xa6030134  sh          $v1, 0x134($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 308), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1643c0) {
            ctx->pc = 0x1643E0u;
            goto label_1643e0;
        }
    }
    ctx->pc = 0x1643C8u;
label_1643c8:
    // 0x1643c8: 0xc059178  jal         func_1645E0
    ctx->pc = 0x1643C8u;
    SET_GPR_U32(ctx, 31, 0x1643D0u);
    ctx->pc = 0x1643CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1643C8u;
    // 0x1643cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1645E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1645E0u, 0x1643C8u, 0x1643D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1643D0u;
label_1643d0:
    // 0x1643d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1643D0u;
    {
        const bool branch_taken_0x1643d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1643D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1643D0u;
        // 0x1643d4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1643d0) {
            ctx->pc = 0x1643E4u;
            goto label_1643e4;
        }
    }
    ctx->pc = 0x1643D8u;
label_1643d8:
    // 0x1643d8: 0xa6040136  sh          $a0, 0x136($s0)
    ctx->pc = 0x1643d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 310), (uint16_t)GPR_U32(ctx, 4));
label_1643dc:
    // 0x1643dc: 0xa6000134  sh          $zero, 0x134($s0)
    ctx->pc = 0x1643dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 308), (uint16_t)GPR_U32(ctx, 0));
label_1643e0:
    // 0x1643e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1643e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1643e4:
    // 0x1643e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1643e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1643e8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1643e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1643ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1643ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1643f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1643F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1643F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1643F0u;
        // 0x1643f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1643F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1643F8u;
}
