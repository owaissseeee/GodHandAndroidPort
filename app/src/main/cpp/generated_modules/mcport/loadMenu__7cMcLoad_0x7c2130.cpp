#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: loadMenu__7cMcLoad
// Address: 0x7c2130 - 0x7c2510
void loadMenu__7cMcLoad_0x7c2130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("loadMenu__7cMcLoad_0x7c2130");
#endif

    switch (ctx->pc) {
        case 0x7c217cu: goto label_7c217c;
        case 0x7c2190u: goto label_7c2190;
        case 0x7c21a8u: goto label_7c21a8;
        case 0x7c21b8u: goto label_7c21b8;
        case 0x7c21d8u: goto label_7c21d8;
        case 0x7c21f4u: goto label_7c21f4;
        case 0x7c221cu: goto label_7c221c;
        case 0x7c224cu: goto label_7c224c;
        case 0x7c2280u: goto label_7c2280;
        case 0x7c22f0u: goto label_7c22f0;
        case 0x7c2374u: goto label_7c2374;
        case 0x7c239cu: goto label_7c239c;
        case 0x7c23d4u: goto label_7c23d4;
        case 0x7c2420u: goto label_7c2420;
        case 0x7c248cu: goto label_7c248c;
        case 0x7c24d4u: goto label_7c24d4;
        case 0x7c24e4u: goto label_7c24e4;
        case 0x7c24f4u: goto label_7c24f4;
        default: break;
    }

    ctx->pc = 0x7c2130u;

    // 0x7c2130: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7c2130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7c2134: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x7c2134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x7c2138: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x7c2138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x7c213c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c213cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2140: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x7c2140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x7c2144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7c2144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7c2148: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x7c2148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x7c214c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x7c214cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x7c2150: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x7C2150u;
    {
        const bool branch_taken_0x7c2150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2150u;
        // 0x7c2154: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2150) {
            ctx->pc = 0x7C2294u;
            goto label_7c2294;
        }
    }
    ctx->pc = 0x7C2158u;
    // 0x7c2158: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c2158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c215c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7c215cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7c2160: 0x24420a50  addiu       $v0, $v0, 0xA50
    ctx->pc = 0x7c2160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2640));
    // 0x7c2164: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7c2164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7c2168: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7c2168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c216c: 0x800008  jr          $a0
    ctx->pc = 0x7C216Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x7C2170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C216Cu;
        // 0x7c2170: 0x3c10007d  lui         $s0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7C2174u: goto label_7c2174;
            case 0x7C2198u: goto label_7c2198;
            case 0x7C21CCu: goto label_7c21cc;
            case 0x7C220Cu: goto label_7c220c;
            case 0x7C2238u: goto label_7c2238;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C216Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7C2174u;
label_7c2174:
    // 0x7c2174: 0xc1f1eb8  jal         func_7C7AE0
    ctx->pc = 0x7C2174u;
    SET_GPR_U32(ctx, 31, 0x7C217Cu);
    ctx->pc = 0x7C2178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2174u;
    // 0x7c2178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7AE0u, 0x7C2174u, 0x7C217Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C217Cu;
label_7c217c:
    // 0x7c217c: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x7c217cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
    // 0x7c2180: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c2180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2184: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x7c2184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x7c2188: 0xc1f1fec  jal         func_7C7FB0
    ctx->pc = 0x7C2188u;
    SET_GPR_U32(ctx, 31, 0x7C2190u);
    ctx->pc = 0x7C218Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2188u;
    // 0x7c218c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7FB0u, 0x7C2188u, 0x7C2190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C2190u;
label_7c2190:
    // 0x7c2190: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c2190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c2194: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x7c2194u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
label_7c2198:
    // 0x7c2198: 0x3c10007d  lui         $s0, 0x7D
    ctx->pc = 0x7c2198u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
    // 0x7c219c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c219cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c21a0: 0xc1f0e34  jal         func_7C38D0
    ctx->pc = 0x7C21A0u;
    SET_GPR_U32(ctx, 31, 0x7C21A8u);
    ctx->pc = 0x7C21A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C21A0u;
    // 0x7c21a4: 0x26041740  addiu       $a0, $s0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C38D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C38D0u, 0x7C21A0u, 0x7C21A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C21A8u;
label_7c21a8:
    // 0x7c21a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c21a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c21ac: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x7c21acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x7c21b0: 0xc1f0b7a  jal         func_7C2DE8
    ctx->pc = 0x7C21B0u;
    SET_GPR_U32(ctx, 31, 0x7C21B8u);
    ctx->pc = 0x7C21B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C21B0u;
    // 0x7c21b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C2DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C2DE8u, 0x7C21B0u, 0x7C21B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C21B8u;
label_7c21b8:
    // 0x7c21b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C21B8u;
    {
        const bool branch_taken_0x7c21b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C21BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C21B8u;
        // 0x7c21bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c21b8) {
            ctx->pc = 0x7C21C8u;
            goto label_7c21c8;
        }
    }
    ctx->pc = 0x7C21C0u;
    // 0x7c21c0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x7C21C0u;
    {
        const bool branch_taken_0x7c21c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C21C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C21C0u;
        // 0x7c21c4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c21c0) {
            ctx->pc = 0x7C2284u;
            goto label_7c2284;
        }
    }
    ctx->pc = 0x7C21C8u;
label_7c21c8:
    // 0x7c21c8: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x7c21c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
label_7c21cc:
    // 0x7c21cc: 0x26041740  addiu       $a0, $s0, 0x1740
    ctx->pc = 0x7c21ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5952));
    // 0x7c21d0: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C21D0u;
    SET_GPR_U32(ctx, 31, 0x7C21D8u);
    ctx->pc = 0x7C21D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C21D0u;
    // 0x7c21d4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C21D0u, 0x7C21D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C21D8u;
label_7c21d8:
    // 0x7c21d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7c21d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c21dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c21dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c21e0: 0x1602002d  bne         $s0, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x7C21E0u;
    {
        const bool branch_taken_0x7c21e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C21E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C21E0u;
        // 0x7c21e4: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c21e0) {
            ctx->pc = 0x7C2298u;
            goto label_7c2298;
        }
    }
    ctx->pc = 0x7C21E8u;
    // 0x7c21e8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c21e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c21ec: 0xc1f0b90  jal         func_7C2E40
    ctx->pc = 0x7C21ECu;
    SET_GPR_U32(ctx, 31, 0x7C21F4u);
    ctx->pc = 0x7C21F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C21ECu;
    // 0x7c21f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C2E40u, 0x7C21ECu, 0x7C21F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C21F4u;
label_7c21f4:
    // 0x7c21f4: 0x54500003  bnel        $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C21F4u;
    {
        const bool branch_taken_0x7c21f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x7c21f4) {
            ctx->pc = 0x7C21F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C21F4u;
            // 0x7c21f8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C2204u;
            goto label_7c2204;
        }
    }
    ctx->pc = 0x7C21FCu;
    // 0x7c21fc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x7C21FCu;
    {
        const bool branch_taken_0x7c21fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C21FCu;
        // 0x7c2200: 0xae2200f4  sw          $v0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c21fc) {
            ctx->pc = 0x7C2294u;
            goto label_7c2294;
        }
    }
    ctx->pc = 0x7C2204u;
label_7c2204:
    // 0x7c2204: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x7C2204u;
    {
        const bool branch_taken_0x7c2204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2204u;
        // 0x7c2208: 0xae2200f4  sw          $v0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2204) {
            ctx->pc = 0x7C24F4u;
            goto label_7c24f4;
        }
    }
    ctx->pc = 0x7C220Cu;
label_7c220c:
    // 0x7c220c: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7c220cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c2210: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c2210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2214: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C2214u;
    SET_GPR_U32(ctx, 31, 0x7C221Cu);
    ctx->pc = 0x7C2218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2214u;
    // 0x7c2218: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C2214u, 0x7C221Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C221Cu;
label_7c221c:
    // 0x7c221c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7c221cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c2220: 0x144300b5  bne         $v0, $v1, . + 4 + (0xB5 << 2)
    ctx->pc = 0x7C2220u;
    {
        const bool branch_taken_0x7c2220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x7C2224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2220u;
        // 0x7c2224: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2220) {
            ctx->pc = 0x7C24F8u;
            goto label_7c24f8;
        }
    }
    ctx->pc = 0x7C2228u;
    // 0x7c2228: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c2228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c222c: 0xae2000f0  sw          $zero, 0xF0($s1)
    ctx->pc = 0x7c222cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
    // 0x7c2230: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x7C2230u;
    {
        const bool branch_taken_0x7c2230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2230u;
        // 0x7c2234: 0xae2000f4  sw          $zero, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2230) {
            ctx->pc = 0x7C24F8u;
            goto label_7c24f8;
        }
    }
    ctx->pc = 0x7C2238u;
label_7c2238:
    // 0x7c2238: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c2238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c223c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c223cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2240: 0x24501740  addiu       $s0, $v0, 0x1740
    ctx->pc = 0x7c2240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x7c2244: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C2244u;
    SET_GPR_U32(ctx, 31, 0x7C224Cu);
    ctx->pc = 0x7C2248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2244u;
    // 0x7c2248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C2244u, 0x7C224Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C224Cu;
label_7c224c:
    // 0x7c224c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7c224cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c2250: 0x544300a9  bnel        $v0, $v1, . + 4 + (0xA9 << 2)
    ctx->pc = 0x7C2250u;
    {
        const bool branch_taken_0x7c2250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x7c2250) {
            ctx->pc = 0x7C2254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C2250u;
            // 0x7c2254: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C24F8u;
            goto label_7c24f8;
        }
    }
    ctx->pc = 0x7C2258u;
    // 0x7c2258: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x7c2258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x7c225c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x7c225cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x7c2260: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x7c2260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x7c2264: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7C2264u;
    {
        const bool branch_taken_0x7c2264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c2264) {
            ctx->pc = 0x7C2268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C2264u;
            // 0x7c2268: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C226Cu;
            goto label_7c226c;
        }
    }
    ctx->pc = 0x7C226Cu;
label_7c226c:
    // 0x7c226c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x7c226cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x7c2270: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x7c2270u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x7c2274: 0x2810  mfhi        $a1
    ctx->pc = 0x7c2274u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x7c2278: 0xc1f0c7c  jal         func_7C31F0
    ctx->pc = 0x7C2278u;
    SET_GPR_U32(ctx, 31, 0x7C2280u);
    ctx->pc = 0x7C227Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2278u;
    // 0x7c227c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C31F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C31F0u, 0x7C2278u, 0x7C2280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C2280u;
label_7c2280:
    // 0x7c2280: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x7c2280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_7c2284:
    // 0x7c2284: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c2284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c2288: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x7c2288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x7c228c: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x7C228Cu;
    {
        const bool branch_taken_0x7c228c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C228Cu;
        // 0x7c2290: 0xae2000f4  sw          $zero, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c228c) {
            ctx->pc = 0x7C24F4u;
            goto label_7c24f4;
        }
    }
    ctx->pc = 0x7C2294u;
label_7c2294:
    // 0x7c2294: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x7c2294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_7c2298:
    // 0x7c2298: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x7c2298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x7c229c: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x7c229cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x7c22a0: 0xdc6401a0  ld          $a0, 0x1A0($v1)
    ctx->pc = 0x7c22a0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 416)));
    // 0x7c22a4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x7c22a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x7c22a8: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x7C22A8u;
    {
        const bool branch_taken_0x7c22a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C22ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C22A8u;
        // 0x7c22ac: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c22a8) {
            ctx->pc = 0x7C23A4u;
            goto label_7c23a4;
        }
    }
    ctx->pc = 0x7C22B0u;
    // 0x7c22b0: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x7c22b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x7c22b4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x7c22b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x7c22b8: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x7c22b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x7c22bc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7C22BCu;
    {
        const bool branch_taken_0x7c22bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c22bc) {
            ctx->pc = 0x7C22C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C22BCu;
            // 0x7c22c0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C22C4u;
            goto label_7c22c4;
        }
    }
    ctx->pc = 0x7C22C4u;
label_7c22c4:
    // 0x7c22c4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x7c22c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x7c22c8: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x7c22c8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x7c22cc: 0x1010  mfhi        $v0
    ctx->pc = 0x7c22ccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x7c22d0: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x7c22d0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x7c22d4: 0x2810  mfhi        $a1
    ctx->pc = 0x7c22d4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x7c22d8: 0x4a1000f  bgez        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x7C22D8u;
    {
        const bool branch_taken_0x7c22d8 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x7C22DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C22D8u;
        // 0x7c22dc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c22d8) {
            ctx->pc = 0x7C2318u;
            goto label_7c2318;
        }
    }
    ctx->pc = 0x7C22E0u;
    // 0x7c22e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7c22e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c22e4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x7c22e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x7c22e8: 0x26230088  addiu       $v1, $s1, 0x88
    ctx->pc = 0x7c22e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x7c22ec: 0x0  nop
    ctx->pc = 0x7c22ecu;
    // NOP
label_7c22f0:
    // 0x7c22f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x7c22f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c22f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C22F4u;
    {
        const bool branch_taken_0x7c22f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C22F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C22F4u;
        // 0x7c22f8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c22f4) {
            ctx->pc = 0x7C2310u;
            goto label_7c2310;
        }
    }
    ctx->pc = 0x7C22FCu;
    // 0x7c22fc: 0x0  nop
    ctx->pc = 0x7c22fcu;
    // NOP
    // 0x7c2300: 0x1880fffb  blez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7C2300u;
    {
        const bool branch_taken_0x7c2300 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x7C2304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2300u;
        // 0x7c2304: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2300) {
            ctx->pc = 0x7C22F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c22f0;
        }
    }
    ctx->pc = 0x7C2308u;
    // 0x7c2308: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x7C2308u;
    {
        const bool branch_taken_0x7c2308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2308u;
        // 0x7c230c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2308) {
            ctx->pc = 0x7C234Cu;
            goto label_7c234c;
        }
    }
    ctx->pc = 0x7C2310u;
label_7c2310:
    // 0x7c2310: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x7C2310u;
    {
        const bool branch_taken_0x7c2310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2310u;
        // 0x7c2314: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2310) {
            ctx->pc = 0x7C234Cu;
            goto label_7c234c;
        }
    }
    ctx->pc = 0x7C2318u;
label_7c2318:
    // 0x7c2318: 0x24a3001f  addiu       $v1, $a1, 0x1F
    ctx->pc = 0x7c2318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x7c231c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x7c231cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x7c2320: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x7c2320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c2324: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x7c2324u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x7c2328: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x7c2328u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x7c232c: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x7c232cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x7c2330: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7c2330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7c2334: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x7c2334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x7c2338: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x7c2338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x7c233c: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x7c233cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x7c2340: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x7c2340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x7c2344: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x7c2344u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x7c2348: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7c2348u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7c234c:
    // 0x7c234c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c234cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c2350: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7C2350u;
    {
        const bool branch_taken_0x7c2350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C2354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2350u;
        // 0x7c2354: 0x24a4ee00  addiu       $a0, $a1, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2350) {
            ctx->pc = 0x7C2380u;
            goto label_7c2380;
        }
    }
    ctx->pc = 0x7C2358u;
    // 0x7c2358: 0x24060160  addiu       $a2, $zero, 0x160
    ctx->pc = 0x7c2358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x7c235c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c235cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2360: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c2360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c2364: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7c2364u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c2368: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c2368u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c236c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7C236Cu;
    SET_GPR_U32(ctx, 31, 0x7C2374u);
    ctx->pc = 0x7C2370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C236Cu;
    // 0x7c2370: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7C236Cu, 0x7C2374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C2374u;
label_7c2374:
    // 0x7c2374: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x7c2374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7c2378: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x7C2378u;
    {
        const bool branch_taken_0x7c2378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2378u;
        // 0x7c237c: 0xae2300f4  sw          $v1, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2378) {
            ctx->pc = 0x7C24C4u;
            goto label_7c24c4;
        }
    }
    ctx->pc = 0x7C2380u;
label_7c2380:
    // 0x7c2380: 0x24060122  addiu       $a2, $zero, 0x122
    ctx->pc = 0x7c2380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x7c2384: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c2384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2388: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c2388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c238c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7c238cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c2390: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c2390u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2394: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7C2394u;
    SET_GPR_U32(ctx, 31, 0x7C239Cu);
    ctx->pc = 0x7C2398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2394u;
    // 0x7c2398: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7C2394u, 0x7C239Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C239Cu;
label_7c239c:
    // 0x7c239c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x7C239Cu;
    {
        const bool branch_taken_0x7c239c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C23A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C239Cu;
        // 0x7c23a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c239c) {
            ctx->pc = 0x7C24C8u;
            goto label_7c24c8;
        }
    }
    ctx->pc = 0x7C23A4u;
label_7c23a4:
    // 0x7c23a4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x7c23a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x7c23a8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x7c23a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x7c23ac: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x7C23ACu;
    {
        const bool branch_taken_0x7c23ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C23B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C23ACu;
        // 0x7c23b0: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c23ac) {
            ctx->pc = 0x7C23F0u;
            goto label_7c23f0;
        }
    }
    ctx->pc = 0x7C23B4u;
    // 0x7c23b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c23b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c23b8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7c23b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c23bc: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x7c23bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x7c23c0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c23c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c23c4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7c23c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c23c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c23c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c23cc: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7C23CCu;
    SET_GPR_U32(ctx, 31, 0x7C23D4u);
    ctx->pc = 0x7C23D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C23CCu;
    // 0x7c23d0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7C23CCu, 0x7C23D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C23D4u;
label_7c23d4:
    // 0x7c23d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x7c23d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c23d8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x7c23d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x7c23dc: 0xae23007c  sw          $v1, 0x7C($s1)
    ctx->pc = 0x7c23dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 3));
    // 0x7c23e0: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x7c23e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x7c23e4: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x7c23e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
    // 0x7c23e8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x7C23E8u;
    {
        const bool branch_taken_0x7c23e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C23ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C23E8u;
        // 0x7c23ec: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c23e8) {
            ctx->pc = 0x7C24C4u;
            goto label_7c24c4;
        }
    }
    ctx->pc = 0x7C23F0u;
label_7c23f0:
    // 0x7c23f0: 0xdc6301b0  ld          $v1, 0x1B0($v1)
    ctx->pc = 0x7c23f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x7c23f4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x7c23f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x7c23f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x7c23f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x7c23fc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x7C23FCu;
    {
        const bool branch_taken_0x7c23fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C23FCu;
        // 0x7c2400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c23fc) {
            ctx->pc = 0x7C245Cu;
            goto label_7c245c;
        }
    }
    ctx->pc = 0x7C2404u;
    // 0x7c2404: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7c2404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c2408: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x7c2408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x7c240c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c240cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c2410: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7c2410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c2414: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c2414u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2418: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7C2418u;
    SET_GPR_U32(ctx, 31, 0x7C2420u);
    ctx->pc = 0x7C241Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2418u;
    // 0x7c241c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7C2418u, 0x7C2420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C2420u;
label_7c2420:
    // 0x7c2420: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x7c2420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x7c2424: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C2424u;
    {
        const bool branch_taken_0x7c2424 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7C2428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2424u;
        // 0x7c2428: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2424) {
            ctx->pc = 0x7C2434u;
            goto label_7c2434;
        }
    }
    ctx->pc = 0x7C242Cu;
    // 0x7c242c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x7C242Cu;
    {
        const bool branch_taken_0x7c242c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C242Cu;
        // 0x7c2430: 0xae2200d8  sw          $v0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c242c) {
            ctx->pc = 0x7C24C4u;
            goto label_7c24c4;
        }
    }
    ctx->pc = 0x7C2434u;
label_7c2434:
    // 0x7c2434: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x7c2434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x7c2438: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x7c2438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x7c243c: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C243Cu;
    {
        const bool branch_taken_0x7c243c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x7C2440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C243Cu;
        // 0x7c2440: 0xae2200d4  sw          $v0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c243c) {
            ctx->pc = 0x7C2454u;
            goto label_7c2454;
        }
    }
    ctx->pc = 0x7C2444u;
    // 0x7c2444: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x7c2444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x7c2448: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x7c2448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7c244c: 0xae2200d4  sw          $v0, 0xD4($s1)
    ctx->pc = 0x7c244cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
    // 0x7c2450: 0xae2300d8  sw          $v1, 0xD8($s1)
    ctx->pc = 0x7c2450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 3));
label_7c2454:
    // 0x7c2454: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x7C2454u;
    {
        const bool branch_taken_0x7c2454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2454u;
        // 0x7c2458: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2454) {
            ctx->pc = 0x7C24C4u;
            goto label_7c24c4;
        }
    }
    ctx->pc = 0x7C245Cu;
label_7c245c:
    // 0x7c245c: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x7c245cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x7c2460: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x7c2460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x7c2464: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x7C2464u;
    {
        const bool branch_taken_0x7c2464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2464u;
        // 0x7c2468: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2464) {
            ctx->pc = 0x7C24C4u;
            goto label_7c24c4;
        }
    }
    ctx->pc = 0x7C246Cu;
    // 0x7c246c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c246cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2470: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7c2470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c2474: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x7c2474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x7c2478: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c2478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c247c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7c247cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c2480: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c2480u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2484: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7C2484u;
    SET_GPR_U32(ctx, 31, 0x7C248Cu);
    ctx->pc = 0x7C2488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2484u;
    // 0x7c2488: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7C2484u, 0x7C248Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C248Cu;
label_7c248c:
    // 0x7c248c: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x7c248cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x7c2490: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x7c2490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x7c2494: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C2494u;
    {
        const bool branch_taken_0x7c2494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2494u;
        // 0x7c2498: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2494) {
            ctx->pc = 0x7C24A4u;
            goto label_7c24a4;
        }
    }
    ctx->pc = 0x7C249Cu;
    // 0x7c249c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x7C249Cu;
    {
        const bool branch_taken_0x7c249c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C24A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C249Cu;
        // 0x7c24a0: 0xae2200d8  sw          $v0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c249c) {
            ctx->pc = 0x7C24C4u;
            goto label_7c24c4;
        }
    }
    ctx->pc = 0x7C24A4u;
label_7c24a4:
    // 0x7c24a4: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x7c24a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x7c24a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x7c24a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x7c24ac: 0x28430012  slti        $v1, $v0, 0x12
    ctx->pc = 0x7c24acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x7c24b0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C24B0u;
    {
        const bool branch_taken_0x7c24b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C24B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C24B0u;
        // 0x7c24b4: 0xae2200d4  sw          $v0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c24b0) {
            ctx->pc = 0x7C24C0u;
            goto label_7c24c0;
        }
    }
    ctx->pc = 0x7C24B8u;
    // 0x7c24b8: 0xae2000d4  sw          $zero, 0xD4($s1)
    ctx->pc = 0x7c24b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
    // 0x7c24bc: 0xae2000d8  sw          $zero, 0xD8($s1)
    ctx->pc = 0x7c24bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 0));
label_7c24c0:
    // 0x7c24c0: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x7c24c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7c24c4:
    // 0x7c24c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c24c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7c24c8:
    // 0x7c24c8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x7c24c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x7c24cc: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C24CCu;
    SET_GPR_U32(ctx, 31, 0x7C24D4u);
    ctx->pc = 0x7C24D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C24CCu;
    // 0x7c24d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C24CCu, 0x7C24D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C24D4u;
label_7c24d4:
    // 0x7c24d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c24d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c24d8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x7c24d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x7c24dc: 0xc1f227a  jal         func_7C89E8
    ctx->pc = 0x7C24DCu;
    SET_GPR_U32(ctx, 31, 0x7C24E4u);
    ctx->pc = 0x7C24E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C24DCu;
    // 0x7c24e0: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C89E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C89E8u, 0x7C24DCu, 0x7C24E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C24E4u;
label_7c24e4:
    // 0x7c24e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c24e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c24e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x7c24e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c24ec: 0xc1f1fec  jal         func_7C7FB0
    ctx->pc = 0x7C24ECu;
    SET_GPR_U32(ctx, 31, 0x7C24F4u);
    ctx->pc = 0x7C24F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C24ECu;
    // 0x7c24f0: 0x8c8500d4  lw          $a1, 0xD4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7FB0u, 0x7C24ECu, 0x7C24F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C24F4u;
label_7c24f4:
    // 0x7c24f4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x7c24f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_7c24f8:
    // 0x7c24f8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x7c24f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7c24fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x7c24fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c2500: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c2500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c2504: 0x3e00008  jr          $ra
    ctx->pc = 0x7C2504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C2508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2504u;
        // 0x7c2508: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C2504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C250Cu;
    // 0x7c250c: 0x0  nop
    ctx->pc = 0x7c250cu;
    // NOP
    ctx->pc = 0x7c2510u;
}
} // namespace gh_mcport
