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

// Function: func_001F20F8
// Address: 0x1f20f8 - 0x1f2420
void func_001F20F8_0x1f20f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F20F8_0x1f20f8");
#endif

    switch (ctx->pc) {
        case 0x1f2130u: goto label_1f2130;
        case 0x1f2170u: goto label_1f2170;
        case 0x1f21f4u: goto label_1f21f4;
        case 0x1f2200u: goto label_1f2200;
        case 0x1f220cu: goto label_1f220c;
        case 0x1f2228u: goto label_1f2228;
        case 0x1f2230u: goto label_1f2230;
        case 0x1f2250u: goto label_1f2250;
        case 0x1f2258u: goto label_1f2258;
        case 0x1f2278u: goto label_1f2278;
        case 0x1f2294u: goto label_1f2294;
        case 0x1f22a0u: goto label_1f22a0;
        case 0x1f22acu: goto label_1f22ac;
        case 0x1f22c8u: goto label_1f22c8;
        case 0x1f22d0u: goto label_1f22d0;
        case 0x1f22f0u: goto label_1f22f0;
        case 0x1f22f8u: goto label_1f22f8;
        case 0x1f2318u: goto label_1f2318;
        case 0x1f2334u: goto label_1f2334;
        case 0x1f2340u: goto label_1f2340;
        case 0x1f234cu: goto label_1f234c;
        case 0x1f2368u: goto label_1f2368;
        case 0x1f2370u: goto label_1f2370;
        case 0x1f2390u: goto label_1f2390;
        case 0x1f2398u: goto label_1f2398;
        case 0x1f23b8u: goto label_1f23b8;
        case 0x1f23d0u: goto label_1f23d0;
        case 0x1f23e8u: goto label_1f23e8;
        case 0x1f23f4u: goto label_1f23f4;
        default: break;
    }

    ctx->pc = 0x1f20f8u;

    // 0x1f20f8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1f20f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1f20fc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1f20fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1f2100: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1f2100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1f2104: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f2104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2108: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1f2108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1f210c: 0x8e300b94  lw          $s0, 0xB94($s1)
    ctx->pc = 0x1f210cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2964)));
    // 0x1f2110: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2110u;
    {
        const bool branch_taken_0x1f2110 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2110u;
        // 0x1f2114: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2110) {
            ctx->pc = 0x1F2128u;
            goto label_1f2128;
        }
    }
    ctx->pc = 0x1F2118u;
    // 0x1f2118: 0x5202000f  beql        $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F2118u;
    {
        const bool branch_taken_0x1f2118 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f2118) {
            ctx->pc = 0x1F211Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2118u;
            // 0x1f211c: 0x86230b6a  lh          $v1, 0xB6A($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2922)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2158u;
            goto label_1f2158;
        }
    }
    ctx->pc = 0x1F2120u;
    // 0x1f2120: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x1F2120u;
    {
        const bool branch_taken_0x1f2120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2120u;
        // 0x1f2124: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2120) {
            ctx->pc = 0x1F240Cu;
            goto label_1f240c;
        }
    }
    ctx->pc = 0x1F2128u;
label_1f2128:
    // 0x1f2128: 0xc07be5e  jal         func_1EF978
    ctx->pc = 0x1F2128u;
    SET_GPR_U32(ctx, 31, 0x1F2130u);
    ctx->pc = 0x1F212Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2128u;
    // 0x1f212c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF978u, 0x1F2128u, 0x1F2130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2130u;
label_1f2130:
    // 0x1f2130: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x1f2130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x1f2134: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x1f2134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1f2138: 0x8c628240  lw          $v0, -0x7DC0($v1)
    ctx->pc = 0x1f2138u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x568240u));
    // 0x1f213c: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x1f213cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x1f2140: 0xac628240  sw          $v0, -0x7DC0($v1)
    ctx->pc = 0x1f2140u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x568240u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568240u, _value); } while (0);
    // 0x1f2144: 0xae240ba0  sw          $a0, 0xBA0($s1)
    ctx->pc = 0x1f2144u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2976), GPR_U32(ctx, 4));
    // 0x1f2148: 0x8e220b94  lw          $v0, 0xB94($s1)
    ctx->pc = 0x1f2148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2964)));
    // 0x1f214c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f214cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f2150: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x1F2150u;
    {
        const bool branch_taken_0x1f2150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2150u;
        // 0x1f2154: 0xae220b94  sw          $v0, 0xB94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2964), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2150) {
            ctx->pc = 0x1F2408u;
            goto label_1f2408;
        }
    }
    ctx->pc = 0x1F2158u;
label_1f2158:
    // 0x1f2158: 0x8e220b88  lw          $v0, 0xB88($s1)
    ctx->pc = 0x1f2158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2952)));
    // 0x1f215c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1f215cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f2160: 0x504000aa  beql        $v0, $zero, . + 4 + (0xAA << 2)
    ctx->pc = 0x1F2160u;
    {
        const bool branch_taken_0x1f2160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2160) {
            ctx->pc = 0x1F2164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2160u;
            // 0x1f2164: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F240Cu;
            goto label_1f240c;
        }
    }
    ctx->pc = 0x1F2168u;
    // 0x1f2168: 0xc07be2e  jal         func_1EF8B8
    ctx->pc = 0x1F2168u;
    SET_GPR_U32(ctx, 31, 0x1F2170u);
    ctx->pc = 0x1F216Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2168u;
    // 0x1f216c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF8B8u, 0x1F2168u, 0x1F2170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2170u;
label_1f2170:
    // 0x1f2170: 0x544000a6  bnel        $v0, $zero, . + 4 + (0xA6 << 2)
    ctx->pc = 0x1F2170u;
    {
        const bool branch_taken_0x1f2170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2170) {
            ctx->pc = 0x1F2174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2170u;
            // 0x1f2174: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F240Cu;
            goto label_1f240c;
        }
    }
    ctx->pc = 0x1F2178u;
    // 0x1f2178: 0x8e220ba0  lw          $v0, 0xBA0($s1)
    ctx->pc = 0x1f2178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2976)));
    // 0x1f217c: 0x144000a1  bnez        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x1F217Cu;
    {
        const bool branch_taken_0x1f217c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F217Cu;
        // 0x1f2180: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f217c) {
            ctx->pc = 0x1F2404u;
            goto label_1f2404;
        }
    }
    ctx->pc = 0x1F2184u;
    // 0x1f2184: 0x8e220b90  lw          $v0, 0xB90($s1)
    ctx->pc = 0x1f2184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2960)));
    // 0x1f2188: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1f2188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1f218c: 0xae230ba0  sw          $v1, 0xBA0($s1)
    ctx->pc = 0x1f218cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2976), GPR_U32(ctx, 3));
    // 0x1f2190: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f2190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f2194: 0x28430004  slti        $v1, $v0, 0x4
    ctx->pc = 0x1f2194u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1f2198: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F2198u;
    {
        const bool branch_taken_0x1f2198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2198u;
        // 0x1f219c: 0xae220b90  sw          $v0, 0xB90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2198) {
            ctx->pc = 0x1F21A4u;
            goto label_1f21a4;
        }
    }
    ctx->pc = 0x1F21A0u;
    // 0x1f21a0: 0xae200b90  sw          $zero, 0xB90($s1)
    ctx->pc = 0x1f21a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2960), GPR_U32(ctx, 0));
label_1f21a4:
    // 0x1f21a4: 0x8e230b90  lw          $v1, 0xB90($s1)
    ctx->pc = 0x1f21a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2960)));
    // 0x1f21a8: 0x10700035  beq         $v1, $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1F21A8u;
    {
        const bool branch_taken_0x1f21a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1F21ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21A8u;
        // 0x1f21ac: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f21a8) {
            ctx->pc = 0x1F2280u;
            goto label_1f2280;
        }
    }
    ctx->pc = 0x1F21B0u;
    // 0x1f21b0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F21B0u;
    {
        const bool branch_taken_0x1f21b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f21b0) {
            ctx->pc = 0x1F21B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F21B0u;
            // 0x1f21b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F21C8u;
            goto label_1f21c8;
        }
    }
    ctx->pc = 0x1F21B8u;
    // 0x1f21b8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F21B8u;
    {
        const bool branch_taken_0x1f21b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F21BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21B8u;
        // 0x1f21bc: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f21b8) {
            ctx->pc = 0x1F21E0u;
            goto label_1f21e0;
        }
    }
    ctx->pc = 0x1F21C0u;
    // 0x1f21c0: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x1F21C0u;
    {
        const bool branch_taken_0x1f21c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F21C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21C0u;
        // 0x1f21c4: 0x7bb10070  lq          $s1, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f21c0) {
            ctx->pc = 0x1F2410u;
            goto label_1f2410;
        }
    }
    ctx->pc = 0x1F21C8u;
label_1f21c8:
    // 0x1f21c8: 0x10620055  beq         $v1, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1F21C8u;
    {
        const bool branch_taken_0x1f21c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F21CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21C8u;
        // 0x1f21cc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f21c8) {
            ctx->pc = 0x1F2320u;
            goto label_1f2320;
        }
    }
    ctx->pc = 0x1F21D0u;
    // 0x1f21d0: 0x1062007b  beq         $v1, $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x1F21D0u;
    {
        const bool branch_taken_0x1f21d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F21D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21D0u;
        // 0x1f21d4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f21d0) {
            ctx->pc = 0x1F23C0u;
            goto label_1f23c0;
        }
    }
    ctx->pc = 0x1F21D8u;
    // 0x1f21d8: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x1F21D8u;
    {
        const bool branch_taken_0x1f21d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F21DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21D8u;
        // 0x1f21dc: 0x7bb10070  lq          $s1, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f21d8) {
            ctx->pc = 0x1F2410u;
            goto label_1f2410;
        }
    }
    ctx->pc = 0x1F21E0u;
label_1f21e0:
    // 0x1f21e0: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x1f21e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
    // 0x1f21e4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1f21e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f21e8: 0x26108658  addiu       $s0, $s0, -0x79A8
    ctx->pc = 0x1f21e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936152));
    // 0x1f21ec: 0xc0afc1e  jal         func_2BF078
    ctx->pc = 0x1F21ECu;
    SET_GPR_U32(ctx, 31, 0x1F21F4u);
    ctx->pc = 0x1F21F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F21ECu;
    // 0x1f21f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF078u, 0x1F21ECu, 0x1F21F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F21F4u;
label_1f21f4:
    // 0x1f21f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f21f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f21f8: 0xc0afc1e  jal         func_2BF078
    ctx->pc = 0x1F21F8u;
    SET_GPR_U32(ctx, 31, 0x1F2200u);
    ctx->pc = 0x1F21FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F21F8u;
    // 0x1f21fc: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF078u, 0x1F21F8u, 0x1F2200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2200u;
label_1f2200:
    // 0x1f2200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2204: 0xc0afc1e  jal         func_2BF078
    ctx->pc = 0x1F2204u;
    SET_GPR_U32(ctx, 31, 0x1F220Cu);
    ctx->pc = 0x1F2208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2204u;
    // 0x1f2208: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF078u, 0x1F2204u, 0x1F220Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F220Cu;
label_1f220c:
    // 0x1f220c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x1f220cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x1f2210: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1f2210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f2214: 0x26106ab0  addiu       $s0, $s0, 0x6AB0
    ctx->pc = 0x1f2214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27312));
    // 0x1f2218: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1f2218u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f221c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1f221cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f2220: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x1F2220u;
    SET_GPR_U32(ctx, 31, 0x1F2228u);
    ctx->pc = 0x1F2224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2220u;
    // 0x1f2224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x1F2220u, 0x1F2228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2228u;
label_1f2228:
    // 0x1f2228: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x1F2228u;
    SET_GPR_U32(ctx, 31, 0x1F2230u);
    ctx->pc = 0x1F222Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2228u;
    // 0x1f222c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x1F2228u, 0x1F2230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2230u;
label_1f2230:
    // 0x1f2230: 0x8e230b8c  lw          $v1, 0xB8C($s1)
    ctx->pc = 0x1f2230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2956)));
    // 0x1f2234: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1f2234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1f2238: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x1f2238u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f223c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1f223cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1f2240: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f2240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f2244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2248: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x1F2248u;
    SET_GPR_U32(ctx, 31, 0x1F2250u);
    ctx->pc = 0x1F224Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2248u;
    // 0x1f224c: 0xae230b8c  sw          $v1, 0xB8C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2956), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x1F2248u, 0x1F2250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2250u;
label_1f2250:
    // 0x1f2250: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x1F2250u;
    SET_GPR_U32(ctx, 31, 0x1F2258u);
    ctx->pc = 0x1F2254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2250u;
    // 0x1f2254: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x1F2250u, 0x1F2258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2258u;
label_1f2258:
    // 0x1f2258: 0x8e230b8c  lw          $v1, 0xB8C($s1)
    ctx->pc = 0x1f2258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2956)));
    // 0x1f225c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1f225cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f2260: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x1f2260u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f2264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2268: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f2268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f226c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1f226cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f2270: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x1F2270u;
    SET_GPR_U32(ctx, 31, 0x1F2278u);
    ctx->pc = 0x1F2274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2270u;
    // 0x1f2274: 0xae230b8c  sw          $v1, 0xB8C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2956), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x1F2270u, 0x1F2278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2278u;
label_1f2278:
    // 0x1f2278: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1F2278u;
    {
        const bool branch_taken_0x1f2278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2278u;
        // 0x1f227c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2278) {
            ctx->pc = 0x1F23ECu;
            goto label_1f23ec;
        }
    }
    ctx->pc = 0x1F2280u;
label_1f2280:
    // 0x1f2280: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x1f2280u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
    // 0x1f2284: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1f2284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f2288: 0x26108658  addiu       $s0, $s0, -0x79A8
    ctx->pc = 0x1f2288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936152));
    // 0x1f228c: 0xc0afc1e  jal         func_2BF078
    ctx->pc = 0x1F228Cu;
    SET_GPR_U32(ctx, 31, 0x1F2294u);
    ctx->pc = 0x1F2290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F228Cu;
    // 0x1f2290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF078u, 0x1F228Cu, 0x1F2294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2294u;
label_1f2294:
    // 0x1f2294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2298: 0xc0afc1e  jal         func_2BF078
    ctx->pc = 0x1F2298u;
    SET_GPR_U32(ctx, 31, 0x1F22A0u);
    ctx->pc = 0x1F229Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2298u;
    // 0x1f229c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF078u, 0x1F2298u, 0x1F22A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22A0u;
label_1f22a0:
    // 0x1f22a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f22a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f22a4: 0xc0afc1e  jal         func_2BF078
    ctx->pc = 0x1F22A4u;
    SET_GPR_U32(ctx, 31, 0x1F22ACu);
    ctx->pc = 0x1F22A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F22A4u;
    // 0x1f22a8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF078u, 0x1F22A4u, 0x1F22ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22ACu;
label_1f22ac:
    // 0x1f22ac: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x1f22acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x1f22b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f22b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f22b4: 0x26106ab0  addiu       $s0, $s0, 0x6AB0
    ctx->pc = 0x1f22b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27312));
    // 0x1f22b8: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1f22b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f22bc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1f22bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f22c0: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x1F22C0u;
    SET_GPR_U32(ctx, 31, 0x1F22C8u);
    ctx->pc = 0x1F22C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F22C0u;
    // 0x1f22c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x1F22C0u, 0x1F22C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22C8u;
label_1f22c8:
    // 0x1f22c8: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x1F22C8u;
    SET_GPR_U32(ctx, 31, 0x1F22D0u);
    ctx->pc = 0x1F22CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F22C8u;
    // 0x1f22cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x1F22C8u, 0x1F22D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22D0u;
label_1f22d0:
    // 0x1f22d0: 0x8e230b8c  lw          $v1, 0xB8C($s1)
    ctx->pc = 0x1f22d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2956)));
    // 0x1f22d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f22d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f22d8: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x1f22d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f22dc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1f22dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f22e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f22e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f22e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f22e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f22e8: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x1F22E8u;
    SET_GPR_U32(ctx, 31, 0x1F22F0u);
    ctx->pc = 0x1F22ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F22E8u;
    // 0x1f22ec: 0xae230b8c  sw          $v1, 0xB8C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2956), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x1F22E8u, 0x1F22F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22F0u;
label_1f22f0:
    // 0x1f22f0: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x1F22F0u;
    SET_GPR_U32(ctx, 31, 0x1F22F8u);
    ctx->pc = 0x1F22F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F22F0u;
    // 0x1f22f4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x1F22F0u, 0x1F22F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22F8u;
label_1f22f8:
    // 0x1f22f8: 0x8e230b8c  lw          $v1, 0xB8C($s1)
    ctx->pc = 0x1f22f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2956)));
    // 0x1f22fc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f22fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f2300: 0xa3a20040  sb          $v0, 0x40($sp)
    ctx->pc = 0x1f2300u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f2304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2308: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f2308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f230c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1f230cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f2310: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x1F2310u;
    SET_GPR_U32(ctx, 31, 0x1F2318u);
    ctx->pc = 0x1F2314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2310u;
    // 0x1f2314: 0xae230b8c  sw          $v1, 0xB8C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2956), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x1F2310u, 0x1F2318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2318u;
label_1f2318:
    // 0x1f2318: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1F2318u;
    {
        const bool branch_taken_0x1f2318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2318u;
        // 0x1f231c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2318) {
            ctx->pc = 0x1F23ECu;
            goto label_1f23ec;
        }
    }
    ctx->pc = 0x1F2320u;
label_1f2320:
    // 0x1f2320: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x1f2320u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
    // 0x1f2324: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1f2324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f2328: 0x26108658  addiu       $s0, $s0, -0x79A8
    ctx->pc = 0x1f2328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936152));
    // 0x1f232c: 0xc0afc1e  jal         func_2BF078
    ctx->pc = 0x1F232Cu;
    SET_GPR_U32(ctx, 31, 0x1F2334u);
    ctx->pc = 0x1F2330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F232Cu;
    // 0x1f2330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF078u, 0x1F232Cu, 0x1F2334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2334u;
label_1f2334:
    // 0x1f2334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2338: 0xc0afc1e  jal         func_2BF078
    ctx->pc = 0x1F2338u;
    SET_GPR_U32(ctx, 31, 0x1F2340u);
    ctx->pc = 0x1F233Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2338u;
    // 0x1f233c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF078u, 0x1F2338u, 0x1F2340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2340u;
label_1f2340:
    // 0x1f2340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2344: 0xc0afc1e  jal         func_2BF078
    ctx->pc = 0x1F2344u;
    SET_GPR_U32(ctx, 31, 0x1F234Cu);
    ctx->pc = 0x1F2348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2344u;
    // 0x1f2348: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF078u, 0x1F2344u, 0x1F234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F234Cu;
label_1f234c:
    // 0x1f234c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x1f234cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x1f2350: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f2350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f2354: 0x26106ab0  addiu       $s0, $s0, 0x6AB0
    ctx->pc = 0x1f2354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27312));
    // 0x1f2358: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1f2358u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f235c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1f235cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f2360: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x1F2360u;
    SET_GPR_U32(ctx, 31, 0x1F2368u);
    ctx->pc = 0x1F2364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2360u;
    // 0x1f2364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x1F2360u, 0x1F2368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2368u;
label_1f2368:
    // 0x1f2368: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x1F2368u;
    SET_GPR_U32(ctx, 31, 0x1F2370u);
    ctx->pc = 0x1F236Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2368u;
    // 0x1f236c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x1F2368u, 0x1F2370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2370u;
label_1f2370:
    // 0x1f2370: 0x8e230b8c  lw          $v1, 0xB8C($s1)
    ctx->pc = 0x1f2370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2956)));
    // 0x1f2374: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1f2374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f2378: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x1f2378u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f237c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f237cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f2380: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f2380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f2384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2388: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x1F2388u;
    SET_GPR_U32(ctx, 31, 0x1F2390u);
    ctx->pc = 0x1F238Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2388u;
    // 0x1f238c: 0xae230b8c  sw          $v1, 0xB8C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2956), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x1F2388u, 0x1F2390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2390u;
label_1f2390:
    // 0x1f2390: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x1F2390u;
    SET_GPR_U32(ctx, 31, 0x1F2398u);
    ctx->pc = 0x1F2394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2390u;
    // 0x1f2394: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x1F2390u, 0x1F2398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2398u;
label_1f2398:
    // 0x1f2398: 0x8e230b8c  lw          $v1, 0xB8C($s1)
    ctx->pc = 0x1f2398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2956)));
    // 0x1f239c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1f239cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f23a0: 0xa3a20050  sb          $v0, 0x50($sp)
    ctx->pc = 0x1f23a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f23a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f23a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f23a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f23a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f23ac: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1f23acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f23b0: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x1F23B0u;
    SET_GPR_U32(ctx, 31, 0x1F23B8u);
    ctx->pc = 0x1F23B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F23B0u;
    // 0x1f23b4: 0xae230b8c  sw          $v1, 0xB8C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2956), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x1F23B0u, 0x1F23B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F23B8u;
label_1f23b8:
    // 0x1f23b8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F23B8u;
    {
        const bool branch_taken_0x1f23b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F23BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F23B8u;
        // 0x1f23bc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f23b8) {
            ctx->pc = 0x1F23ECu;
            goto label_1f23ec;
        }
    }
    ctx->pc = 0x1F23C0u;
label_1f23c0:
    // 0x1f23c0: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x1f23c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x1f23c4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1f23c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1f23c8: 0xc0afc1e  jal         func_2BF078
    ctx->pc = 0x1F23C8u;
    SET_GPR_U32(ctx, 31, 0x1F23D0u);
    ctx->pc = 0x1F23CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F23C8u;
    // 0x1f23cc: 0x24848658  addiu       $a0, $a0, -0x79A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF078u, 0x1F23C8u, 0x1F23D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F23D0u;
label_1f23d0:
    // 0x1f23d0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1f23d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1f23d4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f23d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f23d8: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x1f23d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f23dc: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f23dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f23e0: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x1F23E0u;
    SET_GPR_U32(ctx, 31, 0x1F23E8u);
    ctx->pc = 0x1F23E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F23E0u;
    // 0x1f23e4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x1F23E0u, 0x1F23E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F23E8u;
label_1f23e8:
    // 0x1f23e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f23e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f23ec:
    // 0x1f23ec: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x1F23ECu;
    SET_GPR_U32(ctx, 31, 0x1F23F4u);
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x1F23ECu, 0x1F23F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F23F4u;
label_1f23f4:
    // 0x1f23f4: 0x8e220b8c  lw          $v0, 0xB8C($s1)
    ctx->pc = 0x1f23f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2956)));
    // 0x1f23f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f23f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f23fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F23FCu;
    {
        const bool branch_taken_0x1f23fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F23FCu;
        // 0x1f2400: 0xae220b8c  sw          $v0, 0xB8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2956), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f23fc) {
            ctx->pc = 0x1F2408u;
            goto label_1f2408;
        }
    }
    ctx->pc = 0x1F2404u;
label_1f2404:
    // 0x1f2404: 0xae220ba0  sw          $v0, 0xBA0($s1)
    ctx->pc = 0x1f2404u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2976), GPR_U32(ctx, 2));
label_1f2408:
    // 0x1f2408: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1f2408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f240c:
    // 0x1f240c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1f240cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f2410:
    // 0x1f2410: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1f2410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f2414: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2414u;
        // 0x1f2418: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F241Cu;
    // 0x1f241c: 0x0  nop
    ctx->pc = 0x1f241cu;
    // NOP
    ctx->pc = 0x1f2420u;
}
