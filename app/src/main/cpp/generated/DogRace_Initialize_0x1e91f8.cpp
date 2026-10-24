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

// Function: DogRace_Initialize
// Address: 0x1e91f8 - 0x1e97b0
void DogRace_Initialize_0x1e91f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DogRace_Initialize_0x1e91f8");
#endif

    switch (ctx->pc) {
        case 0x1e9250u: goto label_1e9250;
        case 0x1e9278u: goto label_1e9278;
        case 0x1e92a8u: goto label_1e92a8;
        case 0x1e92d0u: goto label_1e92d0;
        case 0x1e9300u: goto label_1e9300;
        case 0x1e9328u: goto label_1e9328;
        case 0x1e9358u: goto label_1e9358;
        case 0x1e9380u: goto label_1e9380;
        case 0x1e93b0u: goto label_1e93b0;
        case 0x1e93d8u: goto label_1e93d8;
        case 0x1e9408u: goto label_1e9408;
        case 0x1e9430u: goto label_1e9430;
        case 0x1e9460u: goto label_1e9460;
        case 0x1e9488u: goto label_1e9488;
        case 0x1e94b8u: goto label_1e94b8;
        case 0x1e94e0u: goto label_1e94e0;
        case 0x1e9510u: goto label_1e9510;
        case 0x1e9538u: goto label_1e9538;
        case 0x1e9568u: goto label_1e9568;
        case 0x1e9590u: goto label_1e9590;
        case 0x1e95c0u: goto label_1e95c0;
        case 0x1e95e8u: goto label_1e95e8;
        case 0x1e9618u: goto label_1e9618;
        case 0x1e9640u: goto label_1e9640;
        case 0x1e9670u: goto label_1e9670;
        case 0x1e9698u: goto label_1e9698;
        case 0x1e96c8u: goto label_1e96c8;
        case 0x1e96f0u: goto label_1e96f0;
        case 0x1e9720u: goto label_1e9720;
        case 0x1e9748u: goto label_1e9748;
        case 0x1e9778u: goto label_1e9778;
        default: break;
    }

    ctx->pc = 0x1e91f8u;

    // 0x1e91f8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e91f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1e91fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e91fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9200: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1e9200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1e9204: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e9204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9208: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1e9208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1e920c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1e920cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1e9210: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e9210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e9214: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1e9214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1e9218: 0x3c120043  lui         $s2, 0x43
    ctx->pc = 0x1e9218u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)67 << 16));
    // 0x1e921c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e921cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1e9220: 0x3c130043  lui         $s3, 0x43
    ctx->pc = 0x1e9220u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)67 << 16));
    // 0x1e9224: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1e9224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1e9228: 0x3c140043  lui         $s4, 0x43
    ctx->pc = 0x1e9228u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)67 << 16));
    // 0x1e922c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1e922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1e9230: 0x3c150043  lui         $s5, 0x43
    ctx->pc = 0x1e9230u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)67 << 16));
    // 0x1e9234: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1e9234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1e9238: 0x3c160043  lui         $s6, 0x43
    ctx->pc = 0x1e9238u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)67 << 16));
    // 0x1e923c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1e923cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x1e9240: 0x3c170043  lui         $s7, 0x43
    ctx->pc = 0x1e9240u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)67 << 16));
    // 0x1e9244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e9248: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E9248u;
    SET_GPR_U32(ctx, 31, 0x1E9250u);
    ctx->pc = 0x1E924Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9248u;
    // 0x1e924c: 0x3c1e0043  lui         $fp, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)67 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E9248u, 0x1E9250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9250u;
label_1e9250:
    // 0x1e9250: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1e9250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1e9254: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x1e9254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x1e9258: 0x8044bbc0  lb          $a0, -0x4440($v0)
    ctx->pc = 0x1e9258u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x42BBC0u));
    // 0x1e925c: 0x2446bbc0  addiu       $a2, $v0, -0x4440
    ctx->pc = 0x1e925cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949824));
    // 0x1e9260: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1e9260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9264: 0x24684c38  addiu       $t0, $v1, 0x4C38
    ctx->pc = 0x1e9264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19512));
    // 0x1e9268: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e9268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e926c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E926Cu;
    {
        const bool branch_taken_0x1e926c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E926Cu;
        // 0x1e9270: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e926c) {
            ctx->pc = 0x1E92A0u;
            goto label_1e92a0;
        }
    }
    ctx->pc = 0x1E9274u;
    // 0x1e9274: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1e9274u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1e9278:
    // 0x1e9278: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x1e9278u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1e927c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e927cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e9280: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e9280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e9284: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x1e9284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x1e9288: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x1e9288u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e928c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E928Cu;
    {
        const bool branch_taken_0x1e928c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E928Cu;
        // 0x1e9290: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e928c) {
            ctx->pc = 0x1E92A0u;
            goto label_1e92a0;
        }
    }
    ctx->pc = 0x1E9294u;
    // 0x1e9294: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1e9294u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e9298: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1E9298u;
    {
        const bool branch_taken_0x1e9298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9298) {
            ctx->pc = 0x1E929Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9298u;
            // 0x1e929c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9278;
        }
    }
    ctx->pc = 0x1E92A0u;
label_1e92a0:
    // 0x1e92a0: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x1E92A0u;
    SET_GPR_U32(ctx, 31, 0x1E92A8u);
    ctx->pc = 0x1E92A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E92A0u;
    // 0x1e92a4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x1E92A0u, 0x1E92A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E92A8u;
label_1e92a8:
    // 0x1e92a8: 0xae0201ec  sw          $v0, 0x1EC($s0)
    ctx->pc = 0x1e92a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 2));
    // 0x1e92ac: 0x26284c38  addiu       $t0, $s1, 0x4C38
    ctx->pc = 0x1e92acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19512));
    // 0x1e92b0: 0x2643bbc8  addiu       $v1, $s2, -0x4438
    ctx->pc = 0x1e92b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294949832));
    // 0x1e92b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e92b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e92b8: 0x8242bbc8  lb          $v0, -0x4438($s2)
    ctx->pc = 0x1e92b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294949832)));
    // 0x1e92bc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E92BCu;
    {
        const bool branch_taken_0x1e92bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E92C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E92BCu;
        // 0x1e92c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e92bc) {
            ctx->pc = 0x1E92F8u;
            goto label_1e92f8;
        }
    }
    ctx->pc = 0x1E92C4u;
    // 0x1e92c4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1e92c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e92c8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1e92c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e92cc: 0x0  nop
    ctx->pc = 0x1e92ccu;
    // NOP
label_1e92d0:
    // 0x1e92d0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x1e92d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1e92d4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e92d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e92d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e92d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e92dc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x1e92dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x1e92e0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x1e92e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e92e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E92E4u;
    {
        const bool branch_taken_0x1e92e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E92E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E92E4u;
        // 0x1e92e8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e92e4) {
            ctx->pc = 0x1E92F8u;
            goto label_1e92f8;
        }
    }
    ctx->pc = 0x1E92ECu;
    // 0x1e92ec: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1e92ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e92f0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1E92F0u;
    {
        const bool branch_taken_0x1e92f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e92f0) {
            ctx->pc = 0x1E92F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E92F0u;
            // 0x1e92f4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E92D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e92d0;
        }
    }
    ctx->pc = 0x1E92F8u;
label_1e92f8:
    // 0x1e92f8: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x1E92F8u;
    SET_GPR_U32(ctx, 31, 0x1E9300u);
    ctx->pc = 0x1E92FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E92F8u;
    // 0x1e92fc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x1E92F8u, 0x1E9300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9300u;
label_1e9300:
    // 0x1e9300: 0xae0201f0  sw          $v0, 0x1F0($s0)
    ctx->pc = 0x1e9300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 496), GPR_U32(ctx, 2));
    // 0x1e9304: 0x26284c38  addiu       $t0, $s1, 0x4C38
    ctx->pc = 0x1e9304u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19512));
    // 0x1e9308: 0x2663bbd0  addiu       $v1, $s3, -0x4430
    ctx->pc = 0x1e9308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294949840));
    // 0x1e930c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e930cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9310: 0x8262bbd0  lb          $v0, -0x4430($s3)
    ctx->pc = 0x1e9310u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294949840)));
    // 0x1e9314: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E9314u;
    {
        const bool branch_taken_0x1e9314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9314u;
        // 0x1e9318: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9314) {
            ctx->pc = 0x1E9350u;
            goto label_1e9350;
        }
    }
    ctx->pc = 0x1E931Cu;
    // 0x1e931c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1e931cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9320: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1e9320u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e9324: 0x0  nop
    ctx->pc = 0x1e9324u;
    // NOP
label_1e9328:
    // 0x1e9328: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x1e9328u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1e932c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e932cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e9330: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e9330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e9334: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x1e9334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x1e9338: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x1e9338u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e933c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E933Cu;
    {
        const bool branch_taken_0x1e933c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E933Cu;
        // 0x1e9340: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e933c) {
            ctx->pc = 0x1E9350u;
            goto label_1e9350;
        }
    }
    ctx->pc = 0x1E9344u;
    // 0x1e9344: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1e9344u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e9348: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1E9348u;
    {
        const bool branch_taken_0x1e9348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9348) {
            ctx->pc = 0x1E934Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9348u;
            // 0x1e934c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9328;
        }
    }
    ctx->pc = 0x1E9350u;
label_1e9350:
    // 0x1e9350: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x1E9350u;
    SET_GPR_U32(ctx, 31, 0x1E9358u);
    ctx->pc = 0x1E9354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9350u;
    // 0x1e9354: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x1E9350u, 0x1E9358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9358u;
label_1e9358:
    // 0x1e9358: 0xae0201f4  sw          $v0, 0x1F4($s0)
    ctx->pc = 0x1e9358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 2));
    // 0x1e935c: 0x26284c38  addiu       $t0, $s1, 0x4C38
    ctx->pc = 0x1e935cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19512));
    // 0x1e9360: 0x2683bbd8  addiu       $v1, $s4, -0x4428
    ctx->pc = 0x1e9360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949848));
    // 0x1e9364: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e9364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9368: 0x8282bbd8  lb          $v0, -0x4428($s4)
    ctx->pc = 0x1e9368u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294949848)));
    // 0x1e936c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E936Cu;
    {
        const bool branch_taken_0x1e936c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E936Cu;
        // 0x1e9370: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e936c) {
            ctx->pc = 0x1E93A8u;
            goto label_1e93a8;
        }
    }
    ctx->pc = 0x1E9374u;
    // 0x1e9374: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1e9374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9378: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1e9378u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e937c: 0x0  nop
    ctx->pc = 0x1e937cu;
    // NOP
label_1e9380:
    // 0x1e9380: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x1e9380u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1e9384: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e9384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e9388: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e9388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e938c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x1e938cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x1e9390: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x1e9390u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e9394: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9394u;
    {
        const bool branch_taken_0x1e9394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9394u;
        // 0x1e9398: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9394) {
            ctx->pc = 0x1E93A8u;
            goto label_1e93a8;
        }
    }
    ctx->pc = 0x1E939Cu;
    // 0x1e939c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1e939cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e93a0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1E93A0u;
    {
        const bool branch_taken_0x1e93a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e93a0) {
            ctx->pc = 0x1E93A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E93A0u;
            // 0x1e93a4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9380;
        }
    }
    ctx->pc = 0x1E93A8u;
label_1e93a8:
    // 0x1e93a8: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x1E93A8u;
    SET_GPR_U32(ctx, 31, 0x1E93B0u);
    ctx->pc = 0x1E93ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E93A8u;
    // 0x1e93ac: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x1E93A8u, 0x1E93B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E93B0u;
label_1e93b0:
    // 0x1e93b0: 0xae0201f8  sw          $v0, 0x1F8($s0)
    ctx->pc = 0x1e93b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 2));
    // 0x1e93b4: 0x26284c38  addiu       $t0, $s1, 0x4C38
    ctx->pc = 0x1e93b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19512));
    // 0x1e93b8: 0x26a3bbe0  addiu       $v1, $s5, -0x4420
    ctx->pc = 0x1e93b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949856));
    // 0x1e93bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e93bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e93c0: 0x82a2bbe0  lb          $v0, -0x4420($s5)
    ctx->pc = 0x1e93c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 4294949856)));
    // 0x1e93c4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E93C4u;
    {
        const bool branch_taken_0x1e93c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E93C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E93C4u;
        // 0x1e93c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e93c4) {
            ctx->pc = 0x1E9400u;
            goto label_1e9400;
        }
    }
    ctx->pc = 0x1E93CCu;
    // 0x1e93cc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1e93ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e93d0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1e93d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e93d4: 0x0  nop
    ctx->pc = 0x1e93d4u;
    // NOP
label_1e93d8:
    // 0x1e93d8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x1e93d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1e93dc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e93dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e93e0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e93e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e93e4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x1e93e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x1e93e8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x1e93e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e93ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E93ECu;
    {
        const bool branch_taken_0x1e93ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E93F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E93ECu;
        // 0x1e93f0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e93ec) {
            ctx->pc = 0x1E9400u;
            goto label_1e9400;
        }
    }
    ctx->pc = 0x1E93F4u;
    // 0x1e93f4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1e93f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e93f8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1E93F8u;
    {
        const bool branch_taken_0x1e93f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e93f8) {
            ctx->pc = 0x1E93FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E93F8u;
            // 0x1e93fc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E93D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e93d8;
        }
    }
    ctx->pc = 0x1E9400u;
label_1e9400:
    // 0x1e9400: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x1E9400u;
    SET_GPR_U32(ctx, 31, 0x1E9408u);
    ctx->pc = 0x1E9404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9400u;
    // 0x1e9404: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x1E9400u, 0x1E9408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9408u;
label_1e9408:
    // 0x1e9408: 0xae0201fc  sw          $v0, 0x1FC($s0)
    ctx->pc = 0x1e9408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 508), GPR_U32(ctx, 2));
    // 0x1e940c: 0x26284c38  addiu       $t0, $s1, 0x4C38
    ctx->pc = 0x1e940cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19512));
    // 0x1e9410: 0x26c3bbe8  addiu       $v1, $s6, -0x4418
    ctx->pc = 0x1e9410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949864));
    // 0x1e9414: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e9414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9418: 0x82c2bbe8  lb          $v0, -0x4418($s6)
    ctx->pc = 0x1e9418u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 4294949864)));
    // 0x1e941c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E941Cu;
    {
        const bool branch_taken_0x1e941c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E941Cu;
        // 0x1e9420: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e941c) {
            ctx->pc = 0x1E9458u;
            goto label_1e9458;
        }
    }
    ctx->pc = 0x1E9424u;
    // 0x1e9424: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1e9424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9428: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1e9428u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e942c: 0x0  nop
    ctx->pc = 0x1e942cu;
    // NOP
label_1e9430:
    // 0x1e9430: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x1e9430u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1e9434: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e9434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e9438: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e9438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e943c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x1e943cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x1e9440: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x1e9440u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e9444: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9444u;
    {
        const bool branch_taken_0x1e9444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9444u;
        // 0x1e9448: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9444) {
            ctx->pc = 0x1E9458u;
            goto label_1e9458;
        }
    }
    ctx->pc = 0x1E944Cu;
    // 0x1e944c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1e944cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e9450: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1E9450u;
    {
        const bool branch_taken_0x1e9450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9450) {
            ctx->pc = 0x1E9454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9450u;
            // 0x1e9454: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9430;
        }
    }
    ctx->pc = 0x1E9458u;
label_1e9458:
    // 0x1e9458: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x1E9458u;
    SET_GPR_U32(ctx, 31, 0x1E9460u);
    ctx->pc = 0x1E945Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9458u;
    // 0x1e945c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x1E9458u, 0x1E9460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9460u;
label_1e9460:
    // 0x1e9460: 0xae0201c4  sw          $v0, 0x1C4($s0)
    ctx->pc = 0x1e9460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
    // 0x1e9464: 0x26284c38  addiu       $t0, $s1, 0x4C38
    ctx->pc = 0x1e9464u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19512));
    // 0x1e9468: 0x26e3bbf8  addiu       $v1, $s7, -0x4408
    ctx->pc = 0x1e9468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294949880));
    // 0x1e946c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e946cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9470: 0x82e2bbf8  lb          $v0, -0x4408($s7)
    ctx->pc = 0x1e9470u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 4294949880)));
    // 0x1e9474: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E9474u;
    {
        const bool branch_taken_0x1e9474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9474u;
        // 0x1e9478: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9474) {
            ctx->pc = 0x1E94B0u;
            goto label_1e94b0;
        }
    }
    ctx->pc = 0x1E947Cu;
    // 0x1e947c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1e947cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9480: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1e9480u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e9484: 0x0  nop
    ctx->pc = 0x1e9484u;
    // NOP
label_1e9488:
    // 0x1e9488: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x1e9488u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1e948c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e948cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e9490: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e9490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e9494: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x1e9494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x1e9498: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x1e9498u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e949c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E949Cu;
    {
        const bool branch_taken_0x1e949c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E94A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E949Cu;
        // 0x1e94a0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e949c) {
            ctx->pc = 0x1E94B0u;
            goto label_1e94b0;
        }
    }
    ctx->pc = 0x1E94A4u;
    // 0x1e94a4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1e94a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e94a8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1E94A8u;
    {
        const bool branch_taken_0x1e94a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e94a8) {
            ctx->pc = 0x1E94ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E94A8u;
            // 0x1e94ac: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9488;
        }
    }
    ctx->pc = 0x1E94B0u;
label_1e94b0:
    // 0x1e94b0: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x1E94B0u;
    SET_GPR_U32(ctx, 31, 0x1E94B8u);
    ctx->pc = 0x1E94B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E94B0u;
    // 0x1e94b4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x1E94B0u, 0x1E94B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E94B8u;
label_1e94b8:
    // 0x1e94b8: 0xae0201c8  sw          $v0, 0x1C8($s0)
    ctx->pc = 0x1e94b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 2));
    // 0x1e94bc: 0x26284c38  addiu       $t0, $s1, 0x4C38
    ctx->pc = 0x1e94bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19512));
    // 0x1e94c0: 0x27c3bc08  addiu       $v1, $fp, -0x43F8
    ctx->pc = 0x1e94c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294949896));
    // 0x1e94c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e94c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e94c8: 0x83c2bc08  lb          $v0, -0x43F8($fp)
    ctx->pc = 0x1e94c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294949896)));
    // 0x1e94cc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E94CCu;
    {
        const bool branch_taken_0x1e94cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E94D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E94CCu;
        // 0x1e94d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e94cc) {
            ctx->pc = 0x1E9508u;
            goto label_1e9508;
        }
    }
    ctx->pc = 0x1E94D4u;
    // 0x1e94d4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1e94d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e94d8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1e94d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e94dc: 0x0  nop
    ctx->pc = 0x1e94dcu;
    // NOP
label_1e94e0:
    // 0x1e94e0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x1e94e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1e94e4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e94e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e94e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e94e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e94ec: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x1e94ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x1e94f0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x1e94f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e94f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E94F4u;
    {
        const bool branch_taken_0x1e94f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E94F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E94F4u;
        // 0x1e94f8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e94f4) {
            ctx->pc = 0x1E9508u;
            goto label_1e9508;
        }
    }
    ctx->pc = 0x1E94FCu;
    // 0x1e94fc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1e94fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e9500: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1E9500u;
    {
        const bool branch_taken_0x1e9500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9500) {
            ctx->pc = 0x1E9504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9500u;
            // 0x1e9504: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E94E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e94e0;
        }
    }
    ctx->pc = 0x1E9508u;
label_1e9508:
    // 0x1e9508: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x1E9508u;
    SET_GPR_U32(ctx, 31, 0x1E9510u);
    ctx->pc = 0x1E950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9508u;
    // 0x1e950c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x1E9508u, 0x1E9510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9510u;
label_1e9510:
    // 0x1e9510: 0xae0201cc  sw          $v0, 0x1CC($s0)
    ctx->pc = 0x1e9510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 2));
    // 0x1e9514: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x1e9514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x1e9518: 0x26284c38  addiu       $t0, $s1, 0x4C38
    ctx->pc = 0x1e9518u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19512));
    // 0x1e951c: 0x2483bc18  addiu       $v1, $a0, -0x43E8
    ctx->pc = 0x1e951cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949912));
    // 0x1e9520: 0x8082bc18  lb          $v0, -0x43E8($a0)
    ctx->pc = 0x1e9520u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x42BC18u));
    // 0x1e9524: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e9524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9528: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E9528u;
    {
        const bool branch_taken_0x1e9528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9528u;
        // 0x1e952c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9528) {
            ctx->pc = 0x1E9560u;
            goto label_1e9560;
        }
    }
    ctx->pc = 0x1E9530u;
    // 0x1e9530: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1e9530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9534: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1e9534u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1e9538:
    // 0x1e9538: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x1e9538u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1e953c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e953cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e9540: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e9540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e9544: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x1e9544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x1e9548: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x1e9548u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e954c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E954Cu;
    {
        const bool branch_taken_0x1e954c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E954Cu;
        // 0x1e9550: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e954c) {
            ctx->pc = 0x1E9560u;
            goto label_1e9560;
        }
    }
    ctx->pc = 0x1E9554u;
    // 0x1e9554: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1e9554u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e9558: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1E9558u;
    {
        const bool branch_taken_0x1e9558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9558) {
            ctx->pc = 0x1E955Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9558u;
            // 0x1e955c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9538;
        }
    }
    ctx->pc = 0x1E9560u;
label_1e9560:
    // 0x1e9560: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x1E9560u;
    SET_GPR_U32(ctx, 31, 0x1E9568u);
    ctx->pc = 0x1E9564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9560u;
    // 0x1e9564: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x1E9560u, 0x1E9568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9568u;
label_1e9568:
    // 0x1e9568: 0xae0201d0  sw          $v0, 0x1D0($s0)
    ctx->pc = 0x1e9568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 2));
    // 0x1e956c: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x1e956cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x1e9570: 0x26284c38  addiu       $t0, $s1, 0x4C38
    ctx->pc = 0x1e9570u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19512));
    // 0x1e9574: 0x2483bc28  addiu       $v1, $a0, -0x43D8
    ctx->pc = 0x1e9574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949928));
    // 0x1e9578: 0x8082bc28  lb          $v0, -0x43D8($a0)
    ctx->pc = 0x1e9578u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x42BC28u));
    // 0x1e957c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e957cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9580: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E9580u;
    {
        const bool branch_taken_0x1e9580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9580u;
        // 0x1e9584: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9580) {
            ctx->pc = 0x1E95B8u;
            goto label_1e95b8;
        }
    }
    ctx->pc = 0x1E9588u;
    // 0x1e9588: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1e9588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e958c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1e958cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1e9590:
    // 0x1e9590: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x1e9590u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1e9594: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e9594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e9598: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e9598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e959c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x1e959cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x1e95a0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x1e95a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e95a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E95A4u;
    {
        const bool branch_taken_0x1e95a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E95A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E95A4u;
        // 0x1e95a8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e95a4) {
            ctx->pc = 0x1E95B8u;
            goto label_1e95b8;
        }
    }
    ctx->pc = 0x1E95ACu;
    // 0x1e95ac: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1e95acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e95b0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1E95B0u;
    {
        const bool branch_taken_0x1e95b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e95b0) {
            ctx->pc = 0x1E95B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E95B0u;
            // 0x1e95b4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9590;
        }
    }
    ctx->pc = 0x1E95B8u;
label_1e95b8:
    // 0x1e95b8: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x1E95B8u;
    SET_GPR_U32(ctx, 31, 0x1E95C0u);
    ctx->pc = 0x1E95BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E95B8u;
    // 0x1e95bc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x1E95B8u, 0x1E95C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E95C0u;
label_1e95c0:
    // 0x1e95c0: 0xae0201d4  sw          $v0, 0x1D4($s0)
    ctx->pc = 0x1e95c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
    // 0x1e95c4: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x1e95c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x1e95c8: 0x26284c38  addiu       $t0, $s1, 0x4C38
    ctx->pc = 0x1e95c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19512));
    // 0x1e95cc: 0x2483bc38  addiu       $v1, $a0, -0x43C8
    ctx->pc = 0x1e95ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949944));
    // 0x1e95d0: 0x8082bc38  lb          $v0, -0x43C8($a0)
    ctx->pc = 0x1e95d0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x42BC38u));
    // 0x1e95d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e95d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e95d8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E95D8u;
    {
        const bool branch_taken_0x1e95d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E95DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E95D8u;
        // 0x1e95dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e95d8) {
            ctx->pc = 0x1E9610u;
            goto label_1e9610;
        }
    }
    ctx->pc = 0x1E95E0u;
    // 0x1e95e0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1e95e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e95e4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1e95e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1e95e8:
    // 0x1e95e8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x1e95e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1e95ec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e95ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e95f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e95f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e95f4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x1e95f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x1e95f8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x1e95f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e95fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E95FCu;
    {
        const bool branch_taken_0x1e95fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E95FCu;
        // 0x1e9600: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e95fc) {
            ctx->pc = 0x1E9610u;
            goto label_1e9610;
        }
    }
    ctx->pc = 0x1E9604u;
    // 0x1e9604: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1e9604u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e9608: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1E9608u;
    {
        const bool branch_taken_0x1e9608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9608) {
            ctx->pc = 0x1E960Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9608u;
            // 0x1e960c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E95E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e95e8;
        }
    }
    ctx->pc = 0x1E9610u;
label_1e9610:
    // 0x1e9610: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x1E9610u;
    SET_GPR_U32(ctx, 31, 0x1E9618u);
    ctx->pc = 0x1E9614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9610u;
    // 0x1e9614: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x1E9610u, 0x1E9618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9618u;
label_1e9618:
    // 0x1e9618: 0xae0201d8  sw          $v0, 0x1D8($s0)
    ctx->pc = 0x1e9618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 2));
    // 0x1e961c: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x1e961cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x1e9620: 0x26284c38  addiu       $t0, $s1, 0x4C38
    ctx->pc = 0x1e9620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19512));
    // 0x1e9624: 0x2483bc48  addiu       $v1, $a0, -0x43B8
    ctx->pc = 0x1e9624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949960));
    // 0x1e9628: 0x8082bc48  lb          $v0, -0x43B8($a0)
    ctx->pc = 0x1e9628u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x42BC48u));
    // 0x1e962c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e962cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9630: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E9630u;
    {
        const bool branch_taken_0x1e9630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9630u;
        // 0x1e9634: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9630) {
            ctx->pc = 0x1E9668u;
            goto label_1e9668;
        }
    }
    ctx->pc = 0x1E9638u;
    // 0x1e9638: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1e9638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e963c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1e963cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1e9640:
    // 0x1e9640: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x1e9640u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1e9644: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e9644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e9648: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e9648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e964c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x1e964cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x1e9650: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x1e9650u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e9654: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9654u;
    {
        const bool branch_taken_0x1e9654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9654u;
        // 0x1e9658: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9654) {
            ctx->pc = 0x1E9668u;
            goto label_1e9668;
        }
    }
    ctx->pc = 0x1E965Cu;
    // 0x1e965c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1e965cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e9660: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1E9660u;
    {
        const bool branch_taken_0x1e9660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9660) {
            ctx->pc = 0x1E9664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9660u;
            // 0x1e9664: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9640;
        }
    }
    ctx->pc = 0x1E9668u;
label_1e9668:
    // 0x1e9668: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x1E9668u;
    SET_GPR_U32(ctx, 31, 0x1E9670u);
    ctx->pc = 0x1E966Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9668u;
    // 0x1e966c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x1E9668u, 0x1E9670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9670u;
label_1e9670:
    // 0x1e9670: 0xae0201dc  sw          $v0, 0x1DC($s0)
    ctx->pc = 0x1e9670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 2));
    // 0x1e9674: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x1e9674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x1e9678: 0x26284c38  addiu       $t0, $s1, 0x4C38
    ctx->pc = 0x1e9678u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19512));
    // 0x1e967c: 0x2483bc58  addiu       $v1, $a0, -0x43A8
    ctx->pc = 0x1e967cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949976));
    // 0x1e9680: 0x8082bc58  lb          $v0, -0x43A8($a0)
    ctx->pc = 0x1e9680u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x42BC58u));
    // 0x1e9684: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e9684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9688: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E9688u;
    {
        const bool branch_taken_0x1e9688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9688u;
        // 0x1e968c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9688) {
            ctx->pc = 0x1E96C0u;
            goto label_1e96c0;
        }
    }
    ctx->pc = 0x1E9690u;
    // 0x1e9690: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1e9690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9694: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1e9694u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1e9698:
    // 0x1e9698: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x1e9698u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1e969c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e969cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e96a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e96a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e96a4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x1e96a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x1e96a8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x1e96a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e96ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E96ACu;
    {
        const bool branch_taken_0x1e96ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E96B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E96ACu;
        // 0x1e96b0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e96ac) {
            ctx->pc = 0x1E96C0u;
            goto label_1e96c0;
        }
    }
    ctx->pc = 0x1E96B4u;
    // 0x1e96b4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1e96b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e96b8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1E96B8u;
    {
        const bool branch_taken_0x1e96b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e96b8) {
            ctx->pc = 0x1E96BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E96B8u;
            // 0x1e96bc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9698;
        }
    }
    ctx->pc = 0x1E96C0u;
label_1e96c0:
    // 0x1e96c0: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x1E96C0u;
    SET_GPR_U32(ctx, 31, 0x1E96C8u);
    ctx->pc = 0x1E96C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E96C0u;
    // 0x1e96c4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x1E96C0u, 0x1E96C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E96C8u;
label_1e96c8:
    // 0x1e96c8: 0xae0201e0  sw          $v0, 0x1E0($s0)
    ctx->pc = 0x1e96c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 2));
    // 0x1e96cc: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x1e96ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x1e96d0: 0x26284c38  addiu       $t0, $s1, 0x4C38
    ctx->pc = 0x1e96d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19512));
    // 0x1e96d4: 0x2483bc68  addiu       $v1, $a0, -0x4398
    ctx->pc = 0x1e96d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949992));
    // 0x1e96d8: 0x8082bc68  lb          $v0, -0x4398($a0)
    ctx->pc = 0x1e96d8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x42BC68u));
    // 0x1e96dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e96dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e96e0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E96E0u;
    {
        const bool branch_taken_0x1e96e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E96E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E96E0u;
        // 0x1e96e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e96e0) {
            ctx->pc = 0x1E9718u;
            goto label_1e9718;
        }
    }
    ctx->pc = 0x1E96E8u;
    // 0x1e96e8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1e96e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e96ec: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1e96ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1e96f0:
    // 0x1e96f0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x1e96f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1e96f4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e96f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e96f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e96f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e96fc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x1e96fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x1e9700: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x1e9700u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e9704: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9704u;
    {
        const bool branch_taken_0x1e9704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9704u;
        // 0x1e9708: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9704) {
            ctx->pc = 0x1E9718u;
            goto label_1e9718;
        }
    }
    ctx->pc = 0x1E970Cu;
    // 0x1e970c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1e970cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e9710: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1E9710u;
    {
        const bool branch_taken_0x1e9710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9710) {
            ctx->pc = 0x1E9714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9710u;
            // 0x1e9714: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E96F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e96f0;
        }
    }
    ctx->pc = 0x1E9718u;
label_1e9718:
    // 0x1e9718: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x1E9718u;
    SET_GPR_U32(ctx, 31, 0x1E9720u);
    ctx->pc = 0x1E971Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9718u;
    // 0x1e971c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x1E9718u, 0x1E9720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9720u;
label_1e9720:
    // 0x1e9720: 0xae0201e4  sw          $v0, 0x1E4($s0)
    ctx->pc = 0x1e9720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 2));
    // 0x1e9724: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x1e9724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x1e9728: 0x26284c38  addiu       $t0, $s1, 0x4C38
    ctx->pc = 0x1e9728u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19512));
    // 0x1e972c: 0x2483bc78  addiu       $v1, $a0, -0x4388
    ctx->pc = 0x1e972cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950008));
    // 0x1e9730: 0x8082bc78  lb          $v0, -0x4388($a0)
    ctx->pc = 0x1e9730u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x42BC78u));
    // 0x1e9734: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e9734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9738: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E9738u;
    {
        const bool branch_taken_0x1e9738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9738u;
        // 0x1e973c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9738) {
            ctx->pc = 0x1E9770u;
            goto label_1e9770;
        }
    }
    ctx->pc = 0x1E9740u;
    // 0x1e9740: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1e9740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9744: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1e9744u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1e9748:
    // 0x1e9748: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x1e9748u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1e974c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e974cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e9750: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e9750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e9754: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x1e9754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x1e9758: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x1e9758u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e975c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E975Cu;
    {
        const bool branch_taken_0x1e975c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E975Cu;
        // 0x1e9760: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e975c) {
            ctx->pc = 0x1E9770u;
            goto label_1e9770;
        }
    }
    ctx->pc = 0x1E9764u;
    // 0x1e9764: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1e9764u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e9768: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1E9768u;
    {
        const bool branch_taken_0x1e9768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9768) {
            ctx->pc = 0x1E976Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9768u;
            // 0x1e976c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9748;
        }
    }
    ctx->pc = 0x1E9770u;
label_1e9770:
    // 0x1e9770: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x1E9770u;
    SET_GPR_U32(ctx, 31, 0x1E9778u);
    ctx->pc = 0x1E9774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9770u;
    // 0x1e9774: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x1E9770u, 0x1E9778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9778u;
label_1e9778:
    // 0x1e9778: 0xae0201e8  sw          $v0, 0x1E8($s0)
    ctx->pc = 0x1e9778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 2));
    // 0x1e977c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1e977cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e9780: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1e9780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e9784: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1e9784u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e9788: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1e9788u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e978c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e978cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9790: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1e9790u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e9794: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1e9794u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e9798: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1e9798u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e979c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1e979cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e97a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e97a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e97a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E97A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E97A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E97A4u;
        // 0x1e97a8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E97A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E97ACu;
    // 0x1e97ac: 0x0  nop
    ctx->pc = 0x1e97acu;
    // NOP
    ctx->pc = 0x1e97b0u;
}
