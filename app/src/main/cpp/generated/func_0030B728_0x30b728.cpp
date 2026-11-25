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

// Function: func_0030B728
// Address: 0x30b728 - 0x30b870
void func_0030B728_0x30b728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030B728_0x30b728");
#endif

    if (__builtin_expect(ctx->pc != 0x30b728u, 0)) {
        switch (ctx->pc) {
            case 0x30b740u: goto label_30b740;
            case 0x30b758u: goto label_30b758;
            case 0x30b778u: goto label_30b778;
            case 0x30b784u: goto label_30b784;
            case 0x30b78cu: goto label_30b78c;
            case 0x30b794u: goto label_30b794;
            case 0x30b7a0u: goto label_30b7a0;
            case 0x30b7acu: goto label_30b7ac;
            case 0x30b7b8u: goto label_30b7b8;
            case 0x30b7c4u: goto label_30b7c4;
            case 0x30b7ccu: goto label_30b7cc;
            case 0x30b7e8u: goto label_30b7e8;
            case 0x30b7f4u: goto label_30b7f4;
            case 0x30b820u: goto label_30b820;
            case 0x30b840u: goto label_30b840;
            case 0x30b854u: goto label_30b854;
            case 0x30b860u: goto label_30b860;
            default: break;
        }
    }


    // 0x30b728: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30b72c: 0x3c040045  lui         $a0, 0x45
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x30b730: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30b730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30b734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30b734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30b738: 0xc0e9a88  jal         func_3A6A20
    SET_GPR_U32(ctx, 31, 0x30B740u);
    ctx->pc = 0x30B73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B738u;
    // 0x30b73c: 0x24840518  addiu       $a0, $a0, 0x518 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1304));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_003A6A20_0x3a6a20, 0x3a6a20u, 0x30b740u)) {
        return;
    }
    ctx->pc = 0x30B740u;
label_30b740:
    // 0x30b740: 0x3c040074  lui         $a0, 0x74
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x30b744: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b748: 0x24847a4c  addiu       $a0, $a0, 0x7A4C
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31308));
    // 0x30b74c: 0x24060068  addiu       $a2, $zero, 0x68
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x30b750: 0xc0e94bc  jal         func_3A52F0
    SET_GPR_U32(ctx, 31, 0x30B758u);
    ctx->pc = 0x30B754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B750u;
    // 0x30b754: 0x2490fa54  addiu       $s0, $a0, -0x5AC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965844));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &memset_0x3a52f0, 0x3a52f0u, 0x30b758u)) {
        return;
    }
    ctx->pc = 0x30B758u;
label_30b758:
    // 0x30b758: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30b75c: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b760: 0x24020020  addiu       $v0, $zero, 0x20
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x30b764: 0x3c040058  lui         $a0, 0x58
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x30b768: 0xa60205b0  sh          $v0, 0x5B0($s0)
    ctx->pc = 0x30b768u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1456), (uint16_t)GPR_U32(ctx, 2));
    // 0x30b76c: 0xe6000574  swc1        $f0, 0x574($s0)
    ctx->pc = 0x30b76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1396), bits); }
    // 0x30b770: 0xc0a64d2  jal         func_299348
    SET_GPR_U32(ctx, 31, 0x30B778u);
    ctx->pc = 0x30B774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B770u;
    // 0x30b774: 0x24846c00  addiu       $a0, $a0, 0x6C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00299348_0x299348, 0x299348u, 0x30b778u)) {
        return;
    }
    ctx->pc = 0x30B778u;
label_30b778:
    // 0x30b778: 0x3c040075  lui         $a0, 0x75
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x30b77c: 0xc0c68ce  jal         func_31A338
    SET_GPR_U32(ctx, 31, 0x30B784u);
    ctx->pc = 0x30B780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B77Cu;
    // 0x30b780: 0x24844c80  addiu       $a0, $a0, 0x4C80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0031A338_0x31a338, 0x31a338u, 0x30b784u)) {
        return;
    }
    ctx->pc = 0x30B784u;
label_30b784:
    // 0x30b784: 0xc0c1b44  jal         func_306D10
    ctx->pc = 0x30B784u;
    SET_GPR_U32(ctx, 31, 0x30B78Cu);
    if (!runtime->callDirectStatic(rdram, ctx, &func_00306D10_0x306d10, 0x306d10u, 0x30b78cu)) {
        return;
    }
    ctx->pc = 0x30B78Cu;
label_30b78c:
    // 0x30b78c: 0xc0c33c4  jal         func_30CF10
    ctx->pc = 0x30B78Cu;
    SET_GPR_U32(ctx, 31, 0x30B794u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_0030CF10_0x30cf10, 0x30cf10u, 0x30b794u)) {
        return;
    }
    ctx->pc = 0x30B794u;
label_30b794:
    // 0x30b794: 0x3c040074  lui         $a0, 0x74
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x30b798: 0xc0c1dec  jal         func_3077B0
    SET_GPR_U32(ctx, 31, 0x30B7A0u);
    ctx->pc = 0x30B79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B798u;
    // 0x30b79c: 0x24847470  addiu       $a0, $a0, 0x7470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_003077B0_0x3077b0, 0x3077b0u, 0x30b7a0u)) {
        return;
    }
    ctx->pc = 0x30B7A0u;
label_30b7a0:
    // 0x30b7a0: 0x3c02003c  lui         $v0, 0x3C
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x30b7a4: 0xc057f66  jal         func_15FD98
    SET_GPR_U32(ctx, 31, 0x30B7ACu);
    ctx->pc = 0x30B7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B7A4u;
    // 0x30b7a8: 0x8c44d930  lw          $a0, -0x26D0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0015FD98_0x15fd98, 0x15fd98u, 0x30b7acu)) {
        return;
    }
    ctx->pc = 0x30B7ACu;
label_30b7ac:
    // 0x30b7ac: 0x3c040057  lui         $a0, 0x57
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x30b7b0: 0xc07e612  jal         func_1F9848
    SET_GPR_U32(ctx, 31, 0x30B7B8u);
    ctx->pc = 0x30B7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B7B0u;
    // 0x30b7b4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cCoreSave_systemInit_0x1f9848, 0x1f9848u, 0x30b7b8u)) {
        return;
    }
    ctx->pc = 0x30B7B8u;
label_30b7b8:
    // 0x30b7b8: 0x3c04005f  lui         $a0, 0x5F
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x30b7bc: 0xc0afae0  jal         func_2BEB80
    SET_GPR_U32(ctx, 31, 0x30B7C4u);
    ctx->pc = 0x30B7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B7BCu;
    // 0x30b7c0: 0x24848658  addiu       $a0, $a0, -0x79A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936152));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cRoomSave_systemInit_0x2beb80, 0x2beb80u, 0x30b7c4u)) {
        return;
    }
    ctx->pc = 0x30B7C4u;
label_30b7c4:
    // 0x30b7c4: 0xc0c70d2  jal         func_31C348
    ctx->pc = 0x30B7C4u;
    SET_GPR_U32(ctx, 31, 0x30B7CCu);
    if (!runtime->callDirectStatic(rdram, ctx, &func_0031C348_0x31c348, 0x31c348u, 0x30b7ccu)) {
        return;
    }
    ctx->pc = 0x30B7CCu;
label_30b7cc:
    // 0x30b7cc: 0x8e020594  lw          $v0, 0x594($s0)
    ctx->pc = 0x30b7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1428)));
    // 0x30b7d0: 0x30420800  andi        $v0, $v0, 0x800
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x30b7d4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x30B7D4u;
    {
        const bool branch_taken_0x30b7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b7d4) {
            ctx->pc = 0x30B7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B7D4u;
            // 0x30b7d8: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B7ECu;
            goto label_30b7ec;
        }
    }
    // 0x30b7dc: 0x3c040058  lui         $a0, 0x58
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x30b7e0: 0xc0806b4  jal         func_201AD0
    SET_GPR_U32(ctx, 31, 0x30B7E8u);
    ctx->pc = 0x30B7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B7E0u;
    // 0x30b7e4: 0x24845038  addiu       $a0, $a0, 0x5038 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20536));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &ClearWordPair_201AD0_0x201ad0, 0x201ad0u, 0x30b7e8u)) {
        return;
    }
    ctx->pc = 0x30B7E8u;
label_30b7e8:
    // 0x30b7e8: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x30b7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_30b7ec:
    // 0x30b7ec: 0xc0e9a88  jal         func_3A6A20
    SET_GPR_U32(ctx, 31, 0x30B7F4u);
    ctx->pc = 0x30B7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B7ECu;
    // 0x30b7f0: 0x24840530  addiu       $a0, $a0, 0x530 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1328));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_003A6A20_0x3a6a20, 0x3a6a20u, 0x30b7f4u)) {
        return;
    }
    ctx->pc = 0x30B7F4u;
label_30b7f4:
    // 0x30b7f4: 0x8e030584  lw          $v1, 0x584($s0)
    ctx->pc = 0x30b7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1412)));
    // 0x30b7f8: 0x3c020008  lui         $v0, 0x8
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x30b7fc: 0x621824  and         $v1, $v1, $v0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30b800: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30B800u;
    {
        const bool branch_taken_0x30b800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B800u;
        // 0x30b804: 0x3c100075  lui         $s0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b800) {
            ctx->pc = 0x30B828u;
            goto label_30b828;
        }
    }
    // 0x30b808: 0x3c040075  lui         $a0, 0x75
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x30b80c: 0x3c050031  lui         $a1, 0x31
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x30b810: 0x24842c00  addiu       $a0, $a0, 0x2C00
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11264));
    // 0x30b814: 0x24a5d358  addiu       $a1, $a1, -0x2CA8
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955864));
    // 0x30b818: 0xc0b551c  jal         func_2D5470
    SET_GPR_U32(ctx, 31, 0x30B820u);
    ctx->pc = 0x30B81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B818u;
    // 0x30b81c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cTaskManager_execute_0x2d5470, 0x2d5470u, 0x30b820u)) {
        return;
    }
    ctx->pc = 0x30B820u;
label_30b820:
    // 0x30b820: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x30B820u;
    {
        const bool branch_taken_0x30b820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B820u;
        // 0x30b824: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b820) {
            ctx->pc = 0x30B858u;
            goto label_30b858;
        }
    }
    ctx->pc = 0x30B828u;
label_30b828:
    // 0x30b828: 0x3c05002a  lui         $a1, 0x2A
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x30b82c: 0x26102c00  addiu       $s0, $s0, 0x2C00
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11264));
    // 0x30b830: 0x24a55998  addiu       $a1, $a1, 0x5998
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22936));
    // 0x30b834: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b838: 0xc0b551c  jal         func_2D5470
    SET_GPR_U32(ctx, 31, 0x30B840u);
    ctx->pc = 0x30B83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B838u;
    // 0x30b83c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cTaskManager_execute_0x2d5470, 0x2d5470u, 0x30b840u)) {
        return;
    }
    ctx->pc = 0x30B840u;
label_30b840:
    // 0x30b840: 0x3c050031  lui         $a1, 0x31
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x30b844: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b848: 0x24a5d5c8  addiu       $a1, $a1, -0x2A38
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956488));
    // 0x30b84c: 0xc0b551c  jal         func_2D5470
    SET_GPR_U32(ctx, 31, 0x30B854u);
    ctx->pc = 0x30B850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B84Cu;
    // 0x30b850: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cTaskManager_execute_0x2d5470, 0x2d5470u, 0x30b854u)) {
        return;
    }
    ctx->pc = 0x30B854u;
label_30b854:
    // 0x30b854: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x30b854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_30b858:
    // 0x30b858: 0xc0ad966  jal         func_2B6598
    SET_GPR_U32(ctx, 31, 0x30B860u);
    ctx->pc = 0x30B85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B858u;
    // 0x30b85c: 0x8c442558  lw          $a0, 0x2558($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9560)));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Obj0000_Clear_Bytes_D_003C2554_D_003C2555_2B6598_0x2b6598, 0x2b6598u, 0x30b860u)) {
        return;
    }
    ctx->pc = 0x30B860u;
label_30b860:
    // 0x30b860: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30b860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b864: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30b864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b868: 0x3e00008  jr          $ra
    ctx->pc = 0x30B868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B868u;
        // 0x30b86c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B870u;
}