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

// Function: func_0037A740
// Address: 0x37a740 - 0x37a810
void func_0037A740_0x37a740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037A740_0x37a740");
#endif

    switch (ctx->pc) {
        case 0x37a740u: goto label_37a740;
        case 0x37a744u: goto label_37a744;
        case 0x37a748u: goto label_37a748;
        case 0x37a74cu: goto label_37a74c;
        case 0x37a750u: goto label_37a750;
        case 0x37a754u: goto label_37a754;
        case 0x37a758u: goto label_37a758;
        case 0x37a75cu: goto label_37a75c;
        case 0x37a760u: goto label_37a760;
        case 0x37a764u: goto label_37a764;
        case 0x37a768u: goto label_37a768;
        case 0x37a76cu: goto label_37a76c;
        case 0x37a770u: goto label_37a770;
        case 0x37a774u: goto label_37a774;
        case 0x37a778u: goto label_37a778;
        case 0x37a77cu: goto label_37a77c;
        case 0x37a780u: goto label_37a780;
        case 0x37a784u: goto label_37a784;
        case 0x37a788u: goto label_37a788;
        case 0x37a78cu: goto label_37a78c;
        case 0x37a790u: goto label_37a790;
        case 0x37a794u: goto label_37a794;
        case 0x37a798u: goto label_37a798;
        case 0x37a79cu: goto label_37a79c;
        case 0x37a7a0u: goto label_37a7a0;
        case 0x37a7a4u: goto label_37a7a4;
        case 0x37a7a8u: goto label_37a7a8;
        case 0x37a7acu: goto label_37a7ac;
        case 0x37a7b0u: goto label_37a7b0;
        case 0x37a7b4u: goto label_37a7b4;
        case 0x37a7b8u: goto label_37a7b8;
        case 0x37a7bcu: goto label_37a7bc;
        case 0x37a7c0u: goto label_37a7c0;
        case 0x37a7c4u: goto label_37a7c4;
        case 0x37a7c8u: goto label_37a7c8;
        case 0x37a7ccu: goto label_37a7cc;
        case 0x37a7d0u: goto label_37a7d0;
        case 0x37a7d4u: goto label_37a7d4;
        case 0x37a7d8u: goto label_37a7d8;
        case 0x37a7dcu: goto label_37a7dc;
        case 0x37a7e0u: goto label_37a7e0;
        case 0x37a7e4u: goto label_37a7e4;
        case 0x37a7e8u: goto label_37a7e8;
        case 0x37a7ecu: goto label_37a7ec;
        case 0x37a7f0u: goto label_37a7f0;
        case 0x37a7f4u: goto label_37a7f4;
        case 0x37a7f8u: goto label_37a7f8;
        case 0x37a7fcu: goto label_37a7fc;
        case 0x37a800u: goto label_37a800;
        case 0x37a804u: goto label_37a804;
        case 0x37a808u: goto label_37a808;
        case 0x37a80cu: goto label_37a80c;
        default: break;
    }

    ctx->pc = 0x37a740u;

label_37a740:
    // 0x37a740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37a740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_37a744:
    // 0x37a744: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x37a744u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37a748:
    // 0x37a748: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37a748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_37a74c:
    // 0x37a74c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37a750:
    // 0x37a750: 0x80e40007  lb          $a0, 0x7($a3)
    ctx->pc = 0x37a750u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 7)));
label_37a754:
    // 0x37a754: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
label_37a758:
    if (ctx->pc == 0x37A758u) {
        ctx->pc = 0x37A758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A754u;
        // 0x37a758: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A75Cu;
        goto label_37a75c;
    }
    ctx->pc = 0x37A754u;
    {
        const bool branch_taken_0x37a754 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x37A758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A754u;
        // 0x37a758: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a754) {
            ctx->pc = 0x37A79Cu;
            goto label_37a79c;
        }
    }
    ctx->pc = 0x37A75Cu;
label_37a75c:
    // 0x37a75c: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x37a75cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_37a760:
    // 0x37a760: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_37a764:
    if (ctx->pc == 0x37A764u) {
        ctx->pc = 0x37A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A760u;
        // 0x37a764: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A768u;
        goto label_37a768;
    }
    ctx->pc = 0x37A760u;
    {
        const bool branch_taken_0x37a760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a760) {
            ctx->pc = 0x37A764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37A760u;
            // 0x37a764: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37A778u;
            goto label_37a778;
        }
    }
    ctx->pc = 0x37A768u;
label_37a768:
    // 0x37a768: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_37a76c:
    if (ctx->pc == 0x37A76Cu) {
        ctx->pc = 0x37A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A768u;
        // 0x37a76c: 0x80e30025  lb          $v1, 0x25($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 37)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A770u;
        goto label_37a770;
    }
    ctx->pc = 0x37A768u;
    {
        const bool branch_taken_0x37a768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a768) {
            ctx->pc = 0x37A76Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37A768u;
            // 0x37a76c: 0x80e30025  lb          $v1, 0x25($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 37)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37A788u;
            goto label_37a788;
        }
    }
    ctx->pc = 0x37A770u;
label_37a770:
    // 0x37a770: 0x10000016  b           . + 4 + (0x16 << 2)
label_37a774:
    if (ctx->pc == 0x37A774u) {
        ctx->pc = 0x37A774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A770u;
        // 0x37a774: 0x8ce20038  lw          $v0, 0x38($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A778u;
        goto label_37a778;
    }
    ctx->pc = 0x37A770u;
    {
        const bool branch_taken_0x37a770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A770u;
        // 0x37a774: 0x8ce20038  lw          $v0, 0x38($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a770) {
            ctx->pc = 0x37A7CCu;
            goto label_37a7cc;
        }
    }
    ctx->pc = 0x37A778u;
label_37a778:
    // 0x37a778: 0x5082000e  beql        $a0, $v0, . + 4 + (0xE << 2)
label_37a77c:
    if (ctx->pc == 0x37A77Cu) {
        ctx->pc = 0x37A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A778u;
        // 0x37a77c: 0x80e30025  lb          $v1, 0x25($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 37)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A780u;
        goto label_37a780;
    }
    ctx->pc = 0x37A778u;
    {
        const bool branch_taken_0x37a778 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x37a778) {
            ctx->pc = 0x37A77Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37A778u;
            // 0x37a77c: 0x80e30025  lb          $v1, 0x25($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 37)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37A7B4u;
            goto label_37a7b4;
        }
    }
    ctx->pc = 0x37A780u;
label_37a780:
    // 0x37a780: 0x10000012  b           . + 4 + (0x12 << 2)
label_37a784:
    if (ctx->pc == 0x37A784u) {
        ctx->pc = 0x37A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A780u;
        // 0x37a784: 0x8ce20038  lw          $v0, 0x38($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A788u;
        goto label_37a788;
    }
    ctx->pc = 0x37A780u;
    {
        const bool branch_taken_0x37a780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A780u;
        // 0x37a784: 0x8ce20038  lw          $v0, 0x38($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a780) {
            ctx->pc = 0x37A7CCu;
            goto label_37a7cc;
        }
    }
    ctx->pc = 0x37A788u;
label_37a788:
    // 0x37a788: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x37a788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_37a78c:
    // 0x37a78c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x37a78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_37a790:
    // 0x37a790: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x37a790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_37a794:
    // 0x37a794: 0x1000000b  b           . + 4 + (0xB << 2)
label_37a798:
    if (ctx->pc == 0x37A798u) {
        ctx->pc = 0x37A798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A794u;
        // 0x37a798: 0x244221e8  addiu       $v0, $v0, 0x21E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A79Cu;
        goto label_37a79c;
    }
    ctx->pc = 0x37A794u;
    {
        const bool branch_taken_0x37a794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A794u;
        // 0x37a798: 0x244221e8  addiu       $v0, $v0, 0x21E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a794) {
            ctx->pc = 0x37A7C4u;
            goto label_37a7c4;
        }
    }
    ctx->pc = 0x37A79Cu;
label_37a79c:
    // 0x37a79c: 0x80e30025  lb          $v1, 0x25($a3)
    ctx->pc = 0x37a79cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 37)));
label_37a7a0:
    // 0x37a7a0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x37a7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_37a7a4:
    // 0x37a7a4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x37a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_37a7a8:
    // 0x37a7a8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x37a7a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_37a7ac:
    // 0x37a7ac: 0x10000005  b           . + 4 + (0x5 << 2)
label_37a7b0:
    if (ctx->pc == 0x37A7B0u) {
        ctx->pc = 0x37A7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A7ACu;
        // 0x37a7b0: 0x24422368  addiu       $v0, $v0, 0x2368 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A7B4u;
        goto label_37a7b4;
    }
    ctx->pc = 0x37A7ACu;
    {
        const bool branch_taken_0x37a7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A7ACu;
        // 0x37a7b0: 0x24422368  addiu       $v0, $v0, 0x2368 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a7ac) {
            ctx->pc = 0x37A7C4u;
            goto label_37a7c4;
        }
    }
    ctx->pc = 0x37A7B4u;
label_37a7b4:
    // 0x37a7b4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x37a7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_37a7b8:
    // 0x37a7b8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x37a7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_37a7bc:
    // 0x37a7bc: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x37a7bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_37a7c0:
    // 0x37a7c0: 0x244224d0  addiu       $v0, $v0, 0x24D0
    ctx->pc = 0x37a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9424));
label_37a7c4:
    // 0x37a7c4: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x37a7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_37a7c8:
    // 0x37a7c8: 0x8ce20038  lw          $v0, 0x38($a3)
    ctx->pc = 0x37a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
label_37a7cc:
    // 0x37a7cc: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x37a7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
label_37a7d0:
    // 0x37a7d0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_37a7d4:
    if (ctx->pc == 0x37A7D4u) {
        ctx->pc = 0x37A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A7D0u;
        // 0x37a7d4: 0x3c06003f  lui         $a2, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A7D8u;
        goto label_37a7d8;
    }
    ctx->pc = 0x37A7D0u;
    {
        const bool branch_taken_0x37a7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A7D0u;
        // 0x37a7d4: 0x3c06003f  lui         $a2, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a7d0) {
            ctx->pc = 0x37A7FCu;
            goto label_37a7fc;
        }
    }
    ctx->pc = 0x37A7D8u;
label_37a7d8:
    // 0x37a7d8: 0x80a20009  lb          $v0, 0x9($a1)
    ctx->pc = 0x37a7d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
label_37a7dc:
    // 0x37a7dc: 0x24c62628  addiu       $a2, $a2, 0x2628
    ctx->pc = 0x37a7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9768));
label_37a7e0:
    // 0x37a7e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37a7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37a7e4:
    // 0x37a7e4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x37a7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_37a7e8:
    // 0x37a7e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37a7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37a7ec:
    // 0x37a7ec: 0x60f809  jalr        $v1
label_37a7f0:
    if (ctx->pc == 0x37A7F0u) {
        ctx->pc = 0x37A7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A7ECu;
        // 0x37a7f0: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A7F4u;
        goto label_37a7f4;
    }
    ctx->pc = 0x37A7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x37A7F4u);
        ctx->pc = 0x37A7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A7ECu;
        // 0x37a7f0: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A7ECu, 0x37A7F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37A7F4u;
label_37a7f4:
    // 0x37a7f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_37a7f8:
    if (ctx->pc == 0x37A7F8u) {
        ctx->pc = 0x37A7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A7F4u;
        // 0x37a7f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A7FCu;
        goto label_37a7fc;
    }
    ctx->pc = 0x37A7F4u;
    {
        const bool branch_taken_0x37a7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A7F4u;
        // 0x37a7f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a7f4) {
            ctx->pc = 0x37A800u;
            goto label_37a800;
        }
    }
    ctx->pc = 0x37A7FCu;
label_37a7fc:
    // 0x37a7fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37a7fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37a800:
    // 0x37a800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37a800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_37a804:
    // 0x37a804: 0x3e00008  jr          $ra
label_37a808:
    if (ctx->pc == 0x37A808u) {
        ctx->pc = 0x37A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A804u;
        // 0x37a808: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A80Cu;
        goto label_37a80c;
    }
    ctx->pc = 0x37A804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A804u;
        // 0x37a808: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A80Cu;
label_37a80c:
    // 0x37a80c: 0x0  nop
    ctx->pc = 0x37a80cu;
    // NOP
    ctx->pc = 0x37a810u;
}
