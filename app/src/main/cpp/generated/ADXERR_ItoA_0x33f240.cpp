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

// Function: ADXERR_ItoA
// Address: 0x33f240 - 0x33f348
void ADXERR_ItoA_0x33f240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ADXERR_ItoA_0x33f240");
#endif

    switch (ctx->pc) {
        case 0x33f298u: goto label_33f298;
        case 0x33f2e4u: goto label_33f2e4;
        case 0x33f308u: goto label_33f308;
        default: break;
    }

    ctx->pc = 0x33f240u;

    // 0x33f240: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x33f240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x33f244: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33f244u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33f248: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x33f248u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x33f24c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33f24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33f250: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x33f250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x33f254: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33f254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f258: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33f258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33f25c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x33f25cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f260: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33f260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33f264: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33f264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f268: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33f268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x33f26c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x33F26Cu;
    {
        const bool branch_taken_0x33f26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f26c) {
            ctx->pc = 0x33F270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F26Cu;
            // 0x33f270: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F274u;
            goto label_33f274;
        }
    }
    ctx->pc = 0x33F274u;
label_33f274:
    // 0x33f274: 0x4012  mflo        $t0
    ctx->pc = 0x33f274u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x33f278: 0x3810  mfhi        $a3
    ctx->pc = 0x33f278u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x33f27c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x33f27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f280: 0xa2070000  sb          $a3, 0x0($s0)
    ctx->pc = 0x33f280u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x33f284: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x33F284u;
    {
        const bool branch_taken_0x33f284 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x33f284) {
            ctx->pc = 0x33F288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F284u;
            // 0x33f288: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F298u;
            goto label_33f298;
        }
    }
    ctx->pc = 0x33F28Cu;
    // 0x33f28c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x33F28Cu;
    {
        const bool branch_taken_0x33f28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F28Cu;
        // 0x33f290: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f28c) {
            ctx->pc = 0x33F2D4u;
            goto label_33f2d4;
        }
    }
    ctx->pc = 0x33F294u;
    // 0x33f294: 0x0  nop
    ctx->pc = 0x33f294u;
    // NOP
label_33f298:
    // 0x33f298: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x33f298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x33f29c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33F29Cu;
    {
        const bool branch_taken_0x33f29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F29Cu;
        // 0x33f2a0: 0x2053021  addu        $a2, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f29c) {
            ctx->pc = 0x33F2D4u;
            goto label_33f2d4;
        }
    }
    ctx->pc = 0x33F2A4u;
    // 0x33f2a4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x33f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x33f2a8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x33f2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x33f2ac: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x33f2acu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x33f2b0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x33F2B0u;
    {
        const bool branch_taken_0x33f2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f2b0) {
            ctx->pc = 0x33F2B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F2B0u;
            // 0x33f2b4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F2B8u;
            goto label_33f2b8;
        }
    }
    ctx->pc = 0x33F2B8u;
label_33f2b8:
    // 0x33f2b8: 0x4012  mflo        $t0
    ctx->pc = 0x33f2b8u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x33f2bc: 0x3810  mfhi        $a3
    ctx->pc = 0x33f2bcu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x33f2c0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x33f2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f2c4: 0xa0c70000  sb          $a3, 0x0($a2)
    ctx->pc = 0x33f2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x33f2c8: 0x5480fff3  bnel        $a0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x33F2C8u;
    {
        const bool branch_taken_0x33f2c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x33f2c8) {
            ctx->pc = 0x33F2CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F2C8u;
            // 0x33f2cc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33f298;
        }
    }
    ctx->pc = 0x33F2D0u;
    // 0x33f2d0: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x33f2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
label_33f2d4:
    // 0x33f2d4: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x33f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x33f2d8: 0x245188d0  addiu       $s1, $v0, -0x7730
    ctx->pc = 0x33f2d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x33f2dc: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x33F2DCu;
    SET_GPR_U32(ctx, 31, 0x33F2E4u);
    ctx->pc = 0x33F2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F2DCu;
    // 0x33f2e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x33F2DCu, 0x33F2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F2E4u;
label_33f2e4:
    // 0x33f2e4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x33f2e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f2e8: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x33f2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x33f2ec: 0xe2182a  slt         $v1, $a3, $v0
    ctx->pc = 0x33f2ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33f2f0: 0x43380a  movz        $a3, $v0, $v1
    ctx->pc = 0x33f2f0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x33f2f4: 0x18e0000b  blez        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x33F2F4u;
    {
        const bool branch_taken_0x33f2f4 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x33F2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F2F4u;
        // 0x33f2f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f2f4) {
            ctx->pc = 0x33F324u;
            goto label_33f324;
        }
    }
    ctx->pc = 0x33F2FCu;
    // 0x33f2fc: 0xf11021  addu        $v0, $a3, $s1
    ctx->pc = 0x33f2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x33f300: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x33f300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33f304: 0x0  nop
    ctx->pc = 0x33f304u;
    // NOP
label_33f308:
    // 0x33f308: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x33f308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x33f30c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x33f30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x33f310: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x33f310u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33f314: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x33f314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x33f318: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x33f318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x33f31c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x33F31Cu;
    {
        const bool branch_taken_0x33f31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F31Cu;
        // 0x33f320: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f31c) {
            ctx->pc = 0x33F308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33f308;
        }
    }
    ctx->pc = 0x33F324u;
label_33f324:
    // 0x33f324: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x33f324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x33f328: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33f328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f32c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33f32cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33f330: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33f330u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33f334: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33f334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33f338: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x33f338u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f33c: 0x3e00008  jr          $ra
    ctx->pc = 0x33F33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F33Cu;
        // 0x33f340: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F344u;
    // 0x33f344: 0x0  nop
    ctx->pc = 0x33f344u;
    // NOP
    ctx->pc = 0x33f348u;
}
