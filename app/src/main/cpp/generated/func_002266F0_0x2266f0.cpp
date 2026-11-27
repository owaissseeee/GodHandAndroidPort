#include "godhand/frame_patches.h"
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

// Function: func_002266F0
// Address: 0x2266f0 - 0x2269f0
void func_002266F0_0x2266f0(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002266F0_0x2266f0");
#endif

    if (__builtin_expect(ctx->pc != 0x2266f0u, 0)) {
        switch (ctx->pc) {
            case 0x226744u: goto label_226744;
            case 0x226798u: goto label_226798;
            case 0x2267ccu: goto label_2267cc;
            case 0x2267e8u: goto label_2267e8;
            case 0x22681cu: goto label_22681c;
            case 0x226850u: goto label_226850;
            case 0x22685cu: goto label_22685c;
            case 0x2268b8u: goto label_2268b8;
            case 0x2268d8u: goto label_2268d8;
            case 0x2268f8u: goto label_2268f8;
            case 0x226948u: goto label_226948;
            case 0x226958u: goto label_226958;
            case 0x22696cu: goto label_22696c;
            case 0x226978u: goto label_226978;
            case 0x226980u: goto label_226980;
            case 0x226998u: goto label_226998;
            default: break;
        }
    }


    // 0x2266f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2266f4: 0x24030002  addiu       $v1, $zero, 0x2
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2266f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2266f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2266fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2266fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x226700: 0x80802d  daddu       $s0, $a0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226708: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x226708u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x22670c: 0xa203186a  sb          $v1, 0x186A($s0)
    ctx->pc = 0x22670cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6250), (uint8_t)GPR_U32(ctx, 3));
    // 0x226710: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x226710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x226714: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x226714u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x226718: 0x34420400  ori         $v0, $v0, 0x400
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x22671c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22671Cu;
    {
        const bool branch_taken_0x22671c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x226720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22671Cu;
        // 0x226720: 0xae0216d4  sw          $v0, 0x16D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22671c) {
            ctx->pc = 0x226738u;
            goto label_226738;
        }
    }
    // 0x226724: 0x24020001  addiu       $v0, $zero, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226728: 0x50820067  beql        $a0, $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x226728u;
    {
        const bool branch_taken_0x226728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x226728) {
            ctx->pc = 0x22672Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226728u;
            // 0x22672c: 0x8e0205f0  lw          $v0, 0x5F0($s0) (Delay Slot)
    if (ps2xPatchFlag("fps60")) {
        static PS2Runtime::RecompiledFunction hook = nullptr;
        if (!hook) hook = ps2xHostHook("km_fps60_em_cd_s0_5f0");
        if (hook) hook(rdram, ctx, runtime);
    } else {
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
    }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2268C8u;
            goto label_2268c8;
        }
    }
    // 0x226730: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x226730u;
    {
        const bool branch_taken_0x226730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226730) {
            ctx->pc = 0x226978u;
            goto label_226978;
        }
    }
label_226738:
    // 0x226738: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x226738u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x22673c: 0xc09d91a  jal         func_276468
    SET_GPR_U32(ctx, 31, 0x226744u);
    ctx->pc = 0x226740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22673Cu;
    // 0x226740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Obj0000_Get_Byte_17C3_NZ_2_276468_0x276468, 0x276468u, 0x226744u)) {
        return;
    }
label_226744:
    // 0x226744: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x226744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x226748: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22674c: 0x28620252  slti        $v0, $v1, 0x252
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)594) ? 1 : 0);
    // 0x226750: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x226750u;
    {
        const bool branch_taken_0x226750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226750u;
        // 0x226754: 0x28620250  slti        $v0, $v1, 0x250 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)592) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x226750) {
            ctx->pc = 0x226770u;
            goto label_226770;
        }
    }
    // 0x226758: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x226758u;
    {
        const bool branch_taken_0x226758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226758u;
        // 0x22675c: 0x24020223  addiu       $v0, $zero, 0x223 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226758) {
            ctx->pc = 0x22677Cu;
            goto label_22677c;
        }
    }
    // 0x226760: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x226760u;
    {
        const bool branch_taken_0x226760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x226764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226760u;
        // 0x226764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226760) {
            ctx->pc = 0x226804u;
            goto label_226804;
        }
    }
    // 0x226768: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x226768u;
    {
        const bool branch_taken_0x226768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226768u;
        // 0x22676c: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226768) {
            ctx->pc = 0x226784u;
            goto label_226784;
        }
    }
label_226770:
    // 0x226770: 0x24020260  addiu       $v0, $zero, 0x260
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x226774: 0x5062000f  beql        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x226774u;
    {
        const bool branch_taken_0x226774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x226774) {
            ctx->pc = 0x226778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226774u;
            // 0x226778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2267B4u;
            goto label_2267b4;
        }
    }
label_22677c:
    // 0x22677c: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226780: 0x24050050  addiu       $a1, $zero, 0x50
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_226784:
    // 0x226784: 0x2406001e  addiu       $a2, $zero, 0x1E
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x226788: 0x2407003e  addiu       $a3, $zero, 0x3E
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x22678c: 0x2408ffff  addiu       $t0, $zero, -0x1
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x226790: 0xc09826a  jal         func_2609A8
    SET_GPR_U32(ctx, 31, 0x226798u);
    ctx->pc = 0x226794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226790u;
    // 0x226794: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &StoreMotionParamsBoth_2609A8_0x2609a8, 0x2609a8u, 0x226798u)) {
        return;
    }
label_226798:
    // 0x226798: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x226798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x22679c: 0x24050064  addiu       $a1, $zero, 0x64
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2267a0: 0x8c4319ac  lw          $v1, 0x19AC($v0)
    ctx->pc = 0x2267a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6572)));
    // 0x2267a4: 0x8c4419b0  lw          $a0, 0x19B0($v0)
    ctx->pc = 0x2267a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6576)));
    // 0x2267a8: 0x621821  addu        $v1, $v1, $v0
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2267ac: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2267ACu;
    {
        const bool branch_taken_0x2267ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2267B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2267ACu;
        // 0x2267b0: 0xae0505f0  sw          $a1, 0x5F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2267ac) {
            ctx->pc = 0x226830u;
            goto label_226830;
        }
    }
label_2267b4:
    // 0x2267b4: 0x24050046  addiu       $a1, $zero, 0x46
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2267b8: 0x2406001f  addiu       $a2, $zero, 0x1F
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2267bc: 0x2407003e  addiu       $a3, $zero, 0x3E
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x2267c0: 0x2408ffff  addiu       $t0, $zero, -0x1
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2267c4: 0xc098278  jal         func_2609E0
    SET_GPR_U32(ctx, 31, 0x2267CCu);
    ctx->pc = 0x2267C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2267C4u;
    // 0x2267c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &StoreMotionParams_2609E0_0x2609e0, 0x2609e0u, 0x2267ccu)) {
        return;
    }
label_2267cc:
    // 0x2267cc: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2267d0: 0x24050046  addiu       $a1, $zero, 0x46
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2267d4: 0x24060020  addiu       $a2, $zero, 0x20
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2267d8: 0x2407003e  addiu       $a3, $zero, 0x3E
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x2267dc: 0x2408ffff  addiu       $t0, $zero, -0x1
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2267e0: 0xc09827e  jal         func_2609F8
    SET_GPR_U32(ctx, 31, 0x2267E8u);
    ctx->pc = 0x2267E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2267E0u;
    // 0x2267e4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Set_Fields_1884_1894_2609F8_0x2609f8, 0x2609f8u, 0x2267e8u)) {
        return;
    }
label_2267e8:
    // 0x2267e8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2267e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2267ec: 0x24050064  addiu       $a1, $zero, 0x64
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2267f0: 0x8c4330bc  lw          $v1, 0x30BC($v0)
    ctx->pc = 0x2267f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12476)));
    // 0x2267f4: 0x8c4430c0  lw          $a0, 0x30C0($v0)
    ctx->pc = 0x2267f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12480)));
    // 0x2267f8: 0x621821  addu        $v1, $v1, $v0
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2267fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2267FCu;
    {
        const bool branch_taken_0x2267fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2267FCu;
        // 0x226800: 0xae0505f0  sw          $a1, 0x5F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2267fc) {
            ctx->pc = 0x226830u;
            goto label_226830;
        }
    }
label_226804:
    // 0x226804: 0x24060021  addiu       $a2, $zero, 0x21
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x226808: 0x24050032  addiu       $a1, $zero, 0x32
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x22680c: 0x2407003e  addiu       $a3, $zero, 0x3E
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x226810: 0x2408ffff  addiu       $t0, $zero, -0x1
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x226814: 0xc09826a  jal         func_2609A8
    SET_GPR_U32(ctx, 31, 0x22681Cu);
    ctx->pc = 0x226818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226814u;
    // 0x226818: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &StoreMotionParamsBoth_2609A8_0x2609a8, 0x2609a8u, 0x22681cu)) {
        return;
    }
label_22681c:
    // 0x22681c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x22681cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x226820: 0x8c432e0c  lw          $v1, 0x2E0C($v0)
    ctx->pc = 0x226820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11788)));
    // 0x226824: 0x8c442e10  lw          $a0, 0x2E10($v0)
    ctx->pc = 0x226824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11792)));
    // 0x226828: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x226828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x22682c: 0x621821  addu        $v1, $v1, $v0
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_226830:
    // 0x226830: 0x823021  addu        $a2, $a0, $v0
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x226834: 0x44806000  mtc1        $zero, $f12
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x226838: 0x60282d  daddu       $a1, $v1, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22683c: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226840: 0x220402d  daddu       $t0, $s1, $zero
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226844: 0x2407000a  addiu       $a3, $zero, 0xA
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x226848: 0xc0aa15e  jal         func_2A8578
    SET_GPR_U32(ctx, 31, 0x226850u);
    ctx->pc = 0x22684Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226848u;
    // 0x22684c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002A8578_0x2a8578, 0x2a8578u, 0x226850u)) {
        return;
    }
label_226850:
    // 0x226850: 0x3c040057  lui         $a0, 0x57
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x226854: 0xc07e804  jal         func_1FA010
    SET_GPR_U32(ctx, 31, 0x22685Cu);
    ctx->pc = 0x226858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226854u;
    // 0x226858: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cCoreSave_getGameLevel_0x1fa010, 0x1fa010u, 0x22685cu)) {
        return;
    }
label_22685c:
    // 0x22685c: 0x2443ffff  addiu       $v1, $v0, -0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x226860: 0x2c620005  sltiu       $v0, $v1, 0x5
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x226864: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x226864u;
    {
        const bool branch_taken_0x226864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226864u;
        // 0x226868: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226864) {
            ctx->pc = 0x226884u;
            goto label_226884;
        }
    }
    // 0x22686c: 0x31880  sll         $v1, $v1, 2
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x226870: 0x244285d0  addiu       $v0, $v0, -0x7A30
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936016));
    // 0x226874: 0x621821  addu        $v1, $v1, $v0
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x226878: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x226878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22687c: 0x800008  jr          $a0
    ctx->pc = 0x22687Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x226884u: goto label_226884;
            case 0x22688Cu: goto label_22688c;
            case 0x226894u: goto label_226894;
            case 0x22689Cu: goto label_22689c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22687Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_226884:
    // 0x226884: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x226884u;
    {
        const bool branch_taken_0x226884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226884u;
        // 0x226888: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226884) {
            ctx->pc = 0x226898u;
            goto label_226898;
        }
    }
label_22688c:
    // 0x22688c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22688Cu;
    {
        const bool branch_taken_0x22688c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22688Cu;
        // 0x226890: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22688c) {
            ctx->pc = 0x226898u;
            goto label_226898;
        }
    }
label_226894:
    // 0x226894: 0x2402005a  addiu       $v0, $zero, 0x5A
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_226898:
    // 0x226898: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x226898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
label_22689c:
    // 0x22689c: 0x24020064  addiu       $v0, $zero, 0x64
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2268a0: 0xae0005fc  sw          $zero, 0x5FC($s0)
    ctx->pc = 0x2268a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 0));
    // 0x2268a4: 0xae0205f4  sw          $v0, 0x5F4($s0)
    ctx->pc = 0x2268a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 2));
    // 0x2268a8: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2268ac: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2268b0: 0xc09bb90  jal         func_26EE40
    SET_GPR_U32(ctx, 31, 0x2268B8u);
    ctx->pc = 0x2268B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2268B0u;
    // 0x2268b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0026EE40_0x26ee40, 0x26ee40u, 0x2268b8u)) {
        return;
    }
label_2268b8:
    // 0x2268b8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2268b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2268bc: 0x24420001  addiu       $v0, $v0, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2268c0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2268c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x2268c4: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x2268c4u;
    if (ps2xPatchFlag("fps60")) {
        static PS2Runtime::RecompiledFunction hook = nullptr;
        if (!hook) hook = ps2xHostHook("km_fps60_em_cd_s0_5f0");
        if (hook) hook(rdram, ctx, runtime);
    } else {
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
    }
label_2268c8:
    // 0x2268c8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2268C8u;
    {
        const bool branch_taken_0x2268c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2268CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2268C8u;
        // 0x2268cc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2268c8) {
            ctx->pc = 0x2268F8u;
            goto label_2268f8;
        }
    }
    // 0x2268d0: 0xc0b6dac  jal         func_2DB6B0
    SET_GPR_U32(ctx, 31, 0x2268D8u);
    ctx->pc = 0x2268D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2268D0u;
    // 0x2268d4: 0xae0205f0  sw          $v0, 0x5F0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Getplayer_0x2db6b0, 0x2db6b0u, 0x2268d8u)) {
        return;
    }
label_2268d8:
    // 0x2268d8: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x2268d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2268dc: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2268e0: 0x3c013e49  lui         $at, 0x3E49
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x2268e4: 0x34210fdb  ori         $at, $at, 0xFDB
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2268e8: 0x44816000  mtc1        $at, $f12
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2268ec: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2268ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2268f0: 0xc0a9d26  jal         func_2A7498
    SET_GPR_U32(ctx, 31, 0x2268F8u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2268F0u;
    // 0x2268f4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x2268F0u, 0x2268F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_2268f8:
    // 0x2268f8: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x2268f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x2268fc: 0x30420001  andi        $v0, $v0, 0x1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x226900: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x226900u;
    {
        const bool branch_taken_0x226900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226900) {
            ctx->pc = 0x226904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226900u;
            // 0x226904: 0x8e0405f4  lw          $a0, 0x5F4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226924u;
            goto label_226924;
        }
    }
    // 0x226908: 0x8e0205f4  lw          $v0, 0x5F4($s0)
    ctx->pc = 0x226908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1524)));
    // 0x22690c: 0x2842000b  slti        $v0, $v0, 0xB
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x226910: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x226910u;
    {
        const bool branch_taken_0x226910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x226910) {
            ctx->pc = 0x226914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226910u;
            // 0x226914: 0x8e0405f4  lw          $a0, 0x5F4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226924u;
            goto label_226924;
        }
    }
    // 0x226918: 0x2402000a  addiu       $v0, $zero, 0xA
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22691c: 0xae0205f4  sw          $v0, 0x5F4($s0)
    ctx->pc = 0x22691cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 2));
    // 0x226920: 0x8e0405f4  lw          $a0, 0x5F4($s0)
    ctx->pc = 0x226920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1524)));
label_226924:
    // 0x226924: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x226924u;
    {
        const bool branch_taken_0x226924 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x226928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226924u;
        // 0x226928: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226924) {
            ctx->pc = 0x226940u;
            goto label_226940;
        }
    }
    // 0x22692c: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x22692cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x226930: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x226930u;
    if (ps2xPatchFlag("fps60")) {
        static PS2Runtime::RecompiledFunction hook = nullptr;
        if (!hook) hook = ps2xHostHook("km_fps60_countdown_a0");
        if (hook) hook(rdram, ctx, runtime);
    } else {
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    }
    // 0x226934: 0x431025  or          $v0, $v0, $v1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x226938: 0xae0405f4  sw          $a0, 0x5F4($s0)
    ctx->pc = 0x226938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 4));
    // 0x22693c: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x22693cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
label_226940:
    // 0x226940: 0xc055f06  jal         func_157C18
    SET_GPR_U32(ctx, 31, 0x226948u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226940u;
    // 0x226944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x226940u, 0x226948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_226948:
    // 0x226948: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x226948u;
    {
        const bool branch_taken_0x226948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226948) {
            ctx->pc = 0x226958u;
            goto label_226958;
        }
    }
    // 0x226950: 0xc09c176  jal         func_2705D8
    SET_GPR_U32(ctx, 31, 0x226958u);
    ctx->pc = 0x226954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226950u;
    // 0x226954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002705D8_0x2705d8, 0x2705d8u, 0x226958u)) {
        return;
    }
label_226958:
    // 0x226958: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22695c: 0x4481a000  mtc1        $at, $f20
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x226960: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226964: 0xc053e7c  jal         func_14F9F0
    SET_GPR_U32(ctx, 31, 0x22696Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226964u;
    // 0x226968: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x226964u, 0x22696Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_22696c:
    // 0x22696c: 0x4600a306  mov.s       $f12, $f20
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x226970: 0xc053e4a  jal         func_14F928
    SET_GPR_U32(ctx, 31, 0x226978u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226970u;
    // 0x226974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x226970u, 0x226978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_226978:
    // 0x226978: 0xc0982cc  jal         func_260B30
    SET_GPR_U32(ctx, 31, 0x226980u);
    ctx->pc = 0x22697Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226978u;
    // 0x22697c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00260B30_0x260b30, 0x260b30u, 0x226980u)) {
        return;
    }
label_226980:
    // 0x226980: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x226980u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x226984: 0x30420010  andi        $v0, $v0, 0x10
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x226988: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x226988u;
    {
        const bool branch_taken_0x226988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226988) {
            ctx->pc = 0x22698Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226988u;
            // 0x22698c: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2269A4u;
            goto label_2269a4;
        }
    }
    // 0x226990: 0xc098aaa  jal         func_262AA8
    SET_GPR_U32(ctx, 31, 0x226998u);
    ctx->pc = 0x226994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226990u;
    // 0x226994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00262AA8_0x262aa8, 0x262aa8u, 0x226998u)) {
        return;
    }
label_226998:
    // 0x226998: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x226998u;
    {
        const bool branch_taken_0x226998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x226998) {
            ctx->pc = 0x22699Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226998u;
            // 0x22699c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2269D8u;
            goto label_2269d8;
        }
    }
    // 0x2269a0: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x2269a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_2269a4:
    // 0x2269a4: 0x30420003  andi        $v0, $v0, 0x3
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2269a8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2269A8u;
    {
        const bool branch_taken_0x2269a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2269ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2269A8u;
        // 0x2269ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2269a8) {
            ctx->pc = 0x2269B4u;
            goto label_2269b4;
        }
    }
    // 0x2269b0: 0xae0205fc  sw          $v0, 0x5FC($s0)
    ctx->pc = 0x2269b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 2));
label_2269b4:
    // 0x2269b4: 0x8e0205fc  lw          $v0, 0x5FC($s0)
    ctx->pc = 0x2269b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1532)));
    // 0x2269b8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2269B8u;
    {
        const bool branch_taken_0x2269b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2269b8) {
            ctx->pc = 0x2269BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2269B8u;
            // 0x2269bc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2269D8u;
            goto label_2269d8;
        }
    }
    // 0x2269c0: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x2269c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x2269c4: 0x3c02ffff  lui         $v0, 0xFFFF
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2269c8: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x2269cc: 0x621824  and         $v1, $v1, $v0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2269d0: 0xae0316d4  sw          $v1, 0x16D4($s0)
    ctx->pc = 0x2269d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
    // 0x2269d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2269d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2269d8:
    // 0x2269d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2269d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2269dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2269dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2269e0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2269e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2269e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2269E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2269E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2269E4u;
        // 0x2269e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2269E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x2269ec: 0x0  nop
    // NOP
    ctx->pc = 0x2269f0u;
}