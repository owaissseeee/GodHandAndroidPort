#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "r701_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r701
{
// Function: R701Init__Fv
// Address: 0x799220 - 0x7995b8
void R701Init__Fv_0x799220(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R701Init__Fv_0x799220");
#endif

    if (__builtin_expect(ctx->pc != 0x799220u, 0)) {
        switch (ctx->pc) {
            case 0x799258u: goto label_799258;
            case 0x79926cu: goto label_79926c;
            case 0x7992a8u: goto label_7992a8;
            case 0x7992d8u: goto label_7992d8;
            case 0x7992f0u: goto label_7992f0;
            case 0x799310u: goto label_799310;
            case 0x79932cu: goto label_79932c;
            case 0x799338u: goto label_799338;
            case 0x799354u: goto label_799354;
            case 0x799368u: goto label_799368;
            case 0x799378u: goto label_799378;
            case 0x79939cu: goto label_79939c;
            case 0x7993bcu: goto label_7993bc;
            case 0x7993dcu: goto label_7993dc;
            case 0x7993ecu: goto label_7993ec;
            case 0x79940cu: goto label_79940c;
            case 0x79941cu: goto label_79941c;
            case 0x79943cu: goto label_79943c;
            case 0x79944cu: goto label_79944c;
            case 0x799468u: goto label_799468;
            case 0x799488u: goto label_799488;
            case 0x799494u: goto label_799494;
            case 0x7994a8u: goto label_7994a8;
            case 0x7994e0u: goto label_7994e0;
            case 0x799508u: goto label_799508;
            case 0x799538u: goto label_799538;
            case 0x799578u: goto label_799578;
            case 0x79958cu: goto label_79958c;
            default: break;
        }
    }



    // 0x799220: 0x27bdff20  addiu       $sp, $sp, -0xE0
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x799224: 0x24040001  addiu       $a0, $zero, 0x1
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799228: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x79922c: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x79922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x799230: 0x3c10005f  lui         $s0, 0x5F
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
    // 0x799234: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x799234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x799238: 0x200882d  daddu       $s1, $s0, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79923c: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x79923cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x799240: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x799240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x799244: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x799244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x799248: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x799248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x79924c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x79924cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x799250: 0xc1e6460  jal         func_799180
    SET_GPR_U32(ctx, 31, 0x799258u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799250u;
    // 0x799254: 0x3c16003c  lui         $s6, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799250u, 0x799258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_799258:
    // 0x799258: 0x3c03007a  lui         $v1, 0x7A
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79925c: 0x26048658  addiu       $a0, $s0, -0x79A8
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936152));
    // 0x799260: 0xac62ac50  sw          $v0, -0x53B0($v1)
    ctx->pc = 0x799260u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x79AC50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79AC50u, _value); } while (0);
    // 0x799264: 0xc0afc42  jal         func_2BF108
    SET_GPR_U32(ctx, 31, 0x79926Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799264u;
    // 0x799268: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->callDirectStatic(rdram, ctx, &cRoomSave_getFree_0x2bf108, 0x2BF108u, 0x79926Cu)) {
        return;
    }
label_79926c:
    // 0x79926c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x79926cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x799270: 0x3c03007a  lui         $v1, 0x7A
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799274: 0x3c020075  lui         $v0, 0x75
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x799278: 0x27b30010  addiu       $s3, $sp, 0x10
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79927c: 0x8064aaa0  lb          $a0, -0x5560($v1)
    ctx->pc = 0x79927cu;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79AAA0u));
    // 0x799280: 0x27b20020  addiu       $s2, $sp, 0x20
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x799284: 0x27b40040  addiu       $s4, $sp, 0x40
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x799288: 0x27b50050  addiu       $s5, $sp, 0x50
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x79928c: 0x2466aaa0  addiu       $a2, $v1, -0x5560
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945440));
    // 0x799290: 0x24484c58  addiu       $t0, $v0, 0x4C58
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x799294: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799298: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x799298u;
    {
        const bool branch_taken_0x799298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799298u;
        // 0x79929c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799298) {
            ctx->pc = 0x7992D0u;
            goto label_7992d0;
        }
    }
    // 0x7992a0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7992a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7992a4: 0x0  nop
    // NOP
label_7992a8:
    // 0x7992a8: 0x720c0  sll         $a0, $a3, 3
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x7992ac: 0x24e70001  addiu       $a3, $a3, 0x1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x7992b0: 0x24c60001  addiu       $a2, $a2, 0x1
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7992b4: 0x821014  dsllv       $v0, $v0, $a0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x7992b8: 0x28e30008  slti        $v1, $a3, 0x8
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x7992bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7992BCu;
    {
        const bool branch_taken_0x7992bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992BCu;
        // 0x7992c0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992bc) {
            ctx->pc = 0x7992D0u;
            goto label_7992d0;
        }
    }
    // 0x7992c4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7992c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7992c8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7992C8u;
    {
        const bool branch_taken_0x7992c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7992c8) {
            ctx->pc = 0x7992CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7992C8u;
            // 0x7992cc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7992A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7992a8;
        }
    }
label_7992d0:
    // 0x7992d0: 0xc053f66  jal         func_14FD98
    SET_GPR_U32(ctx, 31, 0x7992D8u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992D0u;
    // 0x7992d4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->callDirectStatic(rdram, ctx, &cObjBaseArray_SearchOM_0x14fd98, 0x14FD98u, 0x7992D8u)) {
        return;
    }
label_7992d8:
    // 0x7992d8: 0x40802d  daddu       $s0, $v0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992dc: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x7992DCu;
    {
        const bool branch_taken_0x7992dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992DCu;
        // 0x7992e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992dc) {
            ctx->pc = 0x799314u;
            goto label_799314;
        }
    }
    // 0x7992e4: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992e8: 0xc06b6a2  jal         func_1ADA88
    SET_GPR_U32(ctx, 31, 0x7992F0u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992E8u;
    // 0x7992ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADA88u;
    if (!runtime->callDirectStatic(rdram, ctx, &cOm5a_setOpenType_0x1ada88, 0x1ADA88u, 0x7992F0u)) {
        return;
    }
label_7992f0:
    // 0x7992f0: 0x8e228658  lw          $v0, -0x79A8($s1)
    ctx->pc = 0x7992f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936152)));
    // 0x7992f4: 0x3c040800  lui         $a0, 0x800
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x7992f8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7992f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7992fc: 0x641824  and         $v1, $v1, $a0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x799300: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799300u;
    {
        const bool branch_taken_0x799300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799300u;
        // 0x799304: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799300) {
            ctx->pc = 0x799314u;
            goto label_799314;
        }
    }
    // 0x799308: 0xc06b646  jal         func_1AD918
    SET_GPR_U32(ctx, 31, 0x799310u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799308u;
    // 0x79930c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD918u;
    if (!runtime->callDirectStatic(rdram, ctx, &cOm5a_setOpenFix_0x1ad918, 0x1AD918u, 0x799310u)) {
        return;
    }
label_799310:
    // 0x799310: 0x24020001  addiu       $v0, $zero, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799314:
    // 0x799314: 0x24030006  addiu       $v1, $zero, 0x6
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x799318: 0x3a0202d  daddu       $a0, $sp, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79931c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79931cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799320: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x799320u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x799324: 0xc0a578e  jal         func_295E38
    SET_GPR_U32(ctx, 31, 0x79932Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799324u;
    // 0x799328: 0x240503e3  addiu       $a1, $zero, 0x3E3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 995));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmWrap_setDropItem_0x295e38, 0x295E38u, 0x79932Cu)) {
        return;
    }
label_79932c:
    // 0x79932c: 0x260202d  daddu       $a0, $s3, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799330: 0xc0a578e  jal         func_295E38
    SET_GPR_U32(ctx, 31, 0x799338u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799330u;
    // 0x799334: 0x240503e3  addiu       $a1, $zero, 0x3E3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 995));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmWrap_setDropItem_0x295e38, 0x295E38u, 0x799338u)) {
        return;
    }
label_799338:
    // 0x799338: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x799338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79933c: 0x3c020060  lui         $v0, 0x60
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x799340: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799344: 0x2450ea60  addiu       $s0, $v0, -0x15A0
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
    // 0x799348: 0x240302d  daddu       $a2, $s2, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79934c: 0xc0b0a92  jal         func_2C2A48
    SET_GPR_U32(ctx, 31, 0x799354u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79934Cu;
    // 0x799350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSceAtManager_getCenterPos_0x2c2a48, 0x2C2A48u, 0x799354u)) {
        return;
    }
label_799354:
    // 0x799354: 0x3c040058  lui         $a0, 0x58
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x799358: 0xa3a00030  sb          $zero, 0x30($sp)
    ctx->pc = 0x799358u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x79935c: 0x248464f0  addiu       $a0, $a0, 0x64F0
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x799360: 0xc0a421a  jal         func_290868
    SET_GPR_U32(ctx, 31, 0x799368u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799360u;
    // 0x799364: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmManage_GetEm_0x290868, 0x290868u, 0x799368u)) {
        return;
    }
label_799368:
    // 0x799368: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799368u;
    {
        const bool branch_taken_0x799368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799368u;
        // 0x79936c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799368) {
            ctx->pc = 0x799378u;
            goto label_799378;
        }
    }
    // 0x799370: 0xc0a240e  jal         func_289038
    SET_GPR_U32(ctx, 31, 0x799378u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799370u;
    // 0x799374: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289038u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEma2_SetEscPos_0x289038, 0x289038u, 0x799378u)) {
        return;
    }
label_799378:
    // 0x799378: 0x3c07007a  lui         $a3, 0x7A
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x79937c: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799380: 0x24e79cb0  addiu       $a3, $a3, -0x6350
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941872));
    // 0x799384: 0x24050002  addiu       $a1, $zero, 0x2
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799388: 0x2406ffff  addiu       $a2, $zero, -0x1
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79938c: 0x402d  daddu       $t0, $zero, $zero
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799390: 0x482d  daddu       $t1, $zero, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799394: 0xc0b09e4  jal         func_2C2790
    SET_GPR_U32(ctx, 31, 0x79939Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799394u;
    // 0x799398: 0x26328658  addiu       $s2, $s1, -0x79A8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSceAtManager_AtDataSet_exec_0x2c2790, 0x2C2790u, 0x79939Cu)) {
        return;
    }
label_79939c:
    // 0x79939c: 0x3c07007a  lui         $a3, 0x7A
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x7993a0: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993a4: 0x24e79ea8  addiu       $a3, $a3, -0x6158
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942376));
    // 0x7993a8: 0x24050003  addiu       $a1, $zero, 0x3
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7993ac: 0x2406ffff  addiu       $a2, $zero, -0x1
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7993b0: 0x402d  daddu       $t0, $zero, $zero
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993b4: 0xc0b09e4  jal         func_2C2790
    SET_GPR_U32(ctx, 31, 0x7993BCu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993B4u;
    // 0x7993b8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSceAtManager_AtDataSet_exec_0x2c2790, 0x2C2790u, 0x7993BCu)) {
        return;
    }
label_7993bc:
    // 0x7993bc: 0x8e238658  lw          $v1, -0x79A8($s1)
    ctx->pc = 0x7993bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936152)));
    // 0x7993c0: 0x3c041000  lui         $a0, 0x1000
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x7993c4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7993c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7993c8: 0x441024  and         $v0, $v0, $a0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x7993cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7993CCu;
    {
        const bool branch_taken_0x7993cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993CCu;
        // 0x7993d0: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993cc) {
            ctx->pc = 0x7993ECu;
            goto label_7993ec;
        }
    }
    // 0x7993d4: 0xc0b6cac  jal         func_2DB2B0
    SET_GPR_U32(ctx, 31, 0x7993DCu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993D4u;
    // 0x7993d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->callDirectStatic(rdram, ctx, &displayScrollLayer_0x2db2b0, 0x2DB2B0u, 0x7993DCu)) {
        return;
    }
label_7993dc:
    // 0x7993dc: 0x2404000a  addiu       $a0, $zero, 0xA
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7993e0: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7993e4: 0xc0b6cfa  jal         func_2DB3E8
    SET_GPR_U32(ctx, 31, 0x7993ECu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993E4u;
    // 0x7993e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3E8u;
    if (!runtime->callDirectStatic(rdram, ctx, &setScrollFlagScrollLayer_0x2db3e8, 0x2DB3E8u, 0x7993ECu)) {
        return;
    }
label_7993ec:
    // 0x7993ec: 0x8e228658  lw          $v0, -0x79A8($s1)
    ctx->pc = 0x7993ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936152)));
    // 0x7993f0: 0x3c042000  lui         $a0, 0x2000
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x7993f4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7993f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7993f8: 0x641824  and         $v1, $v1, $a0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x7993fc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x7993FCu;
    {
        const bool branch_taken_0x7993fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993FCu;
        // 0x799400: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993fc) {
            ctx->pc = 0x799420u;
            goto label_799420;
        }
    }
    // 0x799404: 0xc0b6cac  jal         func_2DB2B0
    SET_GPR_U32(ctx, 31, 0x79940Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799404u;
    // 0x799408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->callDirectStatic(rdram, ctx, &displayScrollLayer_0x2db2b0, 0x2DB2B0u, 0x79940Cu)) {
        return;
    }
label_79940c:
    // 0x79940c: 0x2404000b  addiu       $a0, $zero, 0xB
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x799410: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799414: 0xc0b6cfa  jal         func_2DB3E8
    SET_GPR_U32(ctx, 31, 0x79941Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799414u;
    // 0x799418: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3E8u;
    if (!runtime->callDirectStatic(rdram, ctx, &setScrollFlagScrollLayer_0x2db3e8, 0x2DB3E8u, 0x79941Cu)) {
        return;
    }
label_79941c:
    // 0x79941c: 0x8e228658  lw          $v0, -0x79A8($s1)
    ctx->pc = 0x79941cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936152)));
label_799420:
    // 0x799420: 0x3c044000  lui         $a0, 0x4000
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x799424: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x799428: 0x641824  and         $v1, $v1, $a0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79942c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x79942Cu;
    {
        const bool branch_taken_0x79942c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79942Cu;
        // 0x799430: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79942c) {
            ctx->pc = 0x79944Cu;
            goto label_79944c;
        }
    }
    // 0x799434: 0xc0b6cac  jal         func_2DB2B0
    SET_GPR_U32(ctx, 31, 0x79943Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799434u;
    // 0x799438: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->callDirectStatic(rdram, ctx, &displayScrollLayer_0x2db2b0, 0x2DB2B0u, 0x79943Cu)) {
        return;
    }
label_79943c:
    // 0x79943c: 0x2404000c  addiu       $a0, $zero, 0xC
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x799440: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799444: 0xc0b6cfa  jal         func_2DB3E8
    SET_GPR_U32(ctx, 31, 0x79944Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799444u;
    // 0x799448: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3E8u;
    if (!runtime->callDirectStatic(rdram, ctx, &setScrollFlagScrollLayer_0x2db3e8, 0x2DB3E8u, 0x79944Cu)) {
        return;
    }
label_79944c:
    // 0x79944c: 0x8e228658  lw          $v0, -0x79A8($s1)
    ctx->pc = 0x79944cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936152)));
    // 0x799450: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x799454: 0x461000d  bgez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x799454u;
    {
        const bool branch_taken_0x799454 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x799458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799454u;
        // 0x799458: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799454) {
            ctx->pc = 0x79948Cu;
            goto label_79948c;
        }
    }
    // 0x79945c: 0x2404000d  addiu       $a0, $zero, 0xD
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x799460: 0xc0b6cac  jal         func_2DB2B0
    SET_GPR_U32(ctx, 31, 0x799468u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799460u;
    // 0x799464: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->callDirectStatic(rdram, ctx, &displayScrollLayer_0x2db2b0, 0x2DB2B0u, 0x799468u)) {
        return;
    }
label_799468:
    // 0x799468: 0x3c07007a  lui         $a3, 0x7A
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x79946c: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799470: 0x24e7a490  addiu       $a3, $a3, -0x5B70
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943888));
    // 0x799474: 0x24050003  addiu       $a1, $zero, 0x3
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799478: 0x2406ffff  addiu       $a2, $zero, -0x1
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79947c: 0x402d  daddu       $t0, $zero, $zero
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799480: 0xc0b09e4  jal         func_2C2790
    SET_GPR_U32(ctx, 31, 0x799488u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799480u;
    // 0x799484: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSceAtManager_AtDataSet_exec_0x2c2790, 0x2C2790u, 0x799488u)) {
        return;
    }
label_799488:
    // 0x799488: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79948c:
    // 0x79948c: 0xc0afc42  jal         func_2BF108
    SET_GPR_U32(ctx, 31, 0x799494u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79948Cu;
    // 0x799490: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->callDirectStatic(rdram, ctx, &cRoomSave_getFree_0x2bf108, 0x2BF108u, 0x799494u)) {
        return;
    }
label_799494:
    // 0x799494: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799498: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799498u;
    {
        const bool branch_taken_0x799498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799498u;
        // 0x79949c: 0x3c030075  lui         $v1, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799498) {
            ctx->pc = 0x7994ACu;
            goto label_7994ac;
        }
    }
    // 0x7994a0: 0xc1e66d6  jal         func_799B58
    SET_GPR_U32(ctx, 31, 0x7994A8u);
    ctx->pc = 0x799B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799B58u, 0x7994A0u, 0x7994A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7994a8:
    // 0x7994a8: 0x3c030075  lui         $v1, 0x75
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
label_7994ac:
    // 0x7994ac: 0x3c02007a  lui         $v0, 0x7A
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x7994b0: 0x24724c38  addiu       $s2, $v1, 0x4C38
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 19512));
    // 0x7994b4: 0x2447aac8  addiu       $a3, $v0, -0x5538
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945480));
    // 0x7994b8: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x7994b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x7994bc: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x7994bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x7994c0: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x7994c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x7994c4: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x7994c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x7994c8: 0xb3a40047  sdl         $a0, 0x47($sp)
    ctx->pc = 0x7994c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7994cc: 0xb7a40040  sdr         $a0, 0x40($sp)
    ctx->pc = 0x7994ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7994d0: 0xb3a5004f  sdl         $a1, 0x4F($sp)
    ctx->pc = 0x7994d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7994d4: 0xb7a50048  sdr         $a1, 0x48($sp)
    ctx->pc = 0x7994d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7994d8: 0x182d  daddu       $v1, $zero, $zero
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994dc: 0x31080  sll         $v0, $v1, 2
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_7994e0:
    // 0x7994e0: 0x24710001  addiu       $s1, $v1, 0x1
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x7994e4: 0x40802d  daddu       $s0, $v0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994e8: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994ec: 0x2821021  addu        $v0, $s4, $v0
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x7994f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7994f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7994f4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x7994f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7994f8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7994F8u;
    {
        const bool branch_taken_0x7994f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994F8u;
        // 0x7994fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994f8) {
            ctx->pc = 0x799530u;
            goto label_799530;
        }
    }
    // 0x799500: 0x60302d  daddu       $a2, $v1, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799504: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799504u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799508:
    // 0x799508: 0x720c0  sll         $a0, $a3, 3
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79950c: 0x24e70001  addiu       $a3, $a3, 0x1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799510: 0x24c60001  addiu       $a2, $a2, 0x1
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799514: 0x821014  dsllv       $v0, $v0, $a0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799518: 0x28e30008  slti        $v1, $a3, 0x8
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79951c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79951Cu;
    {
        const bool branch_taken_0x79951c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79951Cu;
        // 0x799520: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79951c) {
            ctx->pc = 0x799530u;
            goto label_799530;
        }
    }
    // 0x799524: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799524u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799528: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799528u;
    {
        const bool branch_taken_0x799528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799528) {
            ctx->pc = 0x79952Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799528u;
            // 0x79952c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799508;
        }
    }
label_799530:
    // 0x799530: 0xc0b1508  jal         func_2C5420
    SET_GPR_U32(ctx, 31, 0x799538u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799530u;
    // 0x799534: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->callDirectStatic(rdram, ctx, &cScrArray_SearchScroll_0x2c5420, 0x2C5420u, 0x799538u)) {
        return;
    }
label_799538:
    // 0x799538: 0x40182d  daddu       $v1, $v0, $zero
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79953c: 0x2b01021  addu        $v0, $s5, $s0
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x799540: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799540u;
    {
        const bool branch_taken_0x799540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799540u;
        // 0x799544: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799540) {
            ctx->pc = 0x799554u;
            goto label_799554;
        }
    }
    // 0x799548: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x799548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x79954c: 0x34420002  ori         $v0, $v0, 0x2
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x799550: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x799550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
label_799554:
    // 0x799554: 0x220182d  daddu       $v1, $s1, $zero
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799558: 0x2c620004  sltiu       $v0, $v1, 0x4
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x79955c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x79955Cu;
    {
        const bool branch_taken_0x79955c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79955Cu;
        // 0x799560: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79955c) {
            ctx->pc = 0x7994E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7994e0;
        }
    }
    // 0x799564: 0x8ec42f84  lw          $a0, 0x2F84($s6)
    ctx->pc = 0x799564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
    // 0x799568: 0x3c05007a  lui         $a1, 0x7A
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79956c: 0x24a595c0  addiu       $a1, $a1, -0x6A40
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940096));
    // 0x799570: 0xc0b0e24  jal         func_2C3890
    SET_GPR_U32(ctx, 31, 0x799578u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799570u;
    // 0x799574: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->callDirectStatic(rdram, ctx, &cScenario_taskExec_2C3890_0x2c3890, 0x2C3890u, 0x799578u)) {
        return;
    }
label_799578:
    // 0x799578: 0x8ec42f84  lw          $a0, 0x2F84($s6)
    ctx->pc = 0x799578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
    // 0x79957c: 0x3c05007a  lui         $a1, 0x7A
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799580: 0x24a59d28  addiu       $a1, $a1, -0x62D8
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941992));
    // 0x799584: 0xc0b0e24  jal         func_2C3890
    SET_GPR_U32(ctx, 31, 0x79958Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799584u;
    // 0x799588: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->callDirectStatic(rdram, ctx, &cScenario_taskExec_2C3890_0x2c3890, 0x2C3890u, 0x79958Cu)) {
        return;
    }
label_79958c:
    // 0x79958c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x79958cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x799590: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x799590u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x799594: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x799594u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x799598: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x799598u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79959c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x79959cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x7995a0: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x7995a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7995a4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x7995a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7995a8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x7995a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7995ac: 0x3e00008  jr          $ra
    ctx->pc = 0x7995ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7995B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995ACu;
        // 0x7995b0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7995ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x7995b4: 0x0  nop
    // NOP
    ctx->pc = 0x7995b8u;
}
} // namespace gh_r701
