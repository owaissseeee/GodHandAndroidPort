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

// Function: func_00360280
// Address: 0x360280 - 0x3603d8
void func_00360280_0x360280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00360280_0x360280");
#endif

    switch (ctx->pc) {
        case 0x3602c0u: goto label_3602c0;
        case 0x3602e8u: goto label_3602e8;
        case 0x360310u: goto label_360310;
        case 0x360348u: goto label_360348;
        case 0x360380u: goto label_360380;
        case 0x3603b0u: goto label_3603b0;
        default: break;
    }

    ctx->pc = 0x360280u;

    // 0x360280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x360280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x360284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x360284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x360288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x360288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36028c: 0x80d80a6  j           func_360298
    ctx->pc = 0x36028Cu;
    ctx->pc = 0x360290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36028Cu;
    // 0x360290: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360298u;
    goto label_360298;
    ctx->pc = 0x360294u;
    // 0x360294: 0x0  nop
    ctx->pc = 0x360294u;
    // NOP
label_360298:
    // 0x360298: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x360298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x36029c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x36029cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x3602a0: 0xa22026  xor         $a0, $a1, $v0
    ctx->pc = 0x3602a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x3602a4: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x3602a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x3602a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3602a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3602ac: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x3602acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3602b0: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x3602b0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x3602b4: 0x24e20020  addiu       $v0, $a3, 0x20
    ctx->pc = 0x3602b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x3602b8: 0x64280a  movz        $a1, $v1, $a0
    ctx->pc = 0x3602b8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x3602bc: 0x0  nop
    ctx->pc = 0x3602bcu;
    // NOP
label_3602c0:
    // 0x3602c0: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3602c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3602c4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3602c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3602c8: 0x0  nop
    ctx->pc = 0x3602c8u;
    // NOP
    // 0x3602cc: 0x0  nop
    ctx->pc = 0x3602ccu;
    // NOP
    // 0x3602d0: 0x0  nop
    ctx->pc = 0x3602d0u;
    // NOP
    // 0x3602d4: 0x501fffa  bgez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3602D4u;
    {
        const bool branch_taken_0x3602d4 = (GPR_S64(ctx, 8) >= 0);
        ctx->pc = 0x3602D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3602D4u;
        // 0x3602d8: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3602d4) {
            ctx->pc = 0x3602C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3602c0;
        }
    }
    ctx->pc = 0x3602DCu;
    // 0x3602dc: 0x24e20024  addiu       $v0, $a3, 0x24
    ctx->pc = 0x3602dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
    // 0x3602e0: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x3602e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3602e4: 0x0  nop
    ctx->pc = 0x3602e4u;
    // NOP
label_3602e8:
    // 0x3602e8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3602e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3602ec: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3602ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x3602f0: 0x0  nop
    ctx->pc = 0x3602f0u;
    // NOP
    // 0x3602f4: 0x0  nop
    ctx->pc = 0x3602f4u;
    // NOP
    // 0x3602f8: 0x0  nop
    ctx->pc = 0x3602f8u;
    // NOP
    // 0x3602fc: 0x501fffa  bgez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3602FCu;
    {
        const bool branch_taken_0x3602fc = (GPR_S64(ctx, 8) >= 0);
        ctx->pc = 0x360300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3602FCu;
        // 0x360300: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3602fc) {
            ctx->pc = 0x3602E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3602e8;
        }
    }
    ctx->pc = 0x360304u;
    // 0x360304: 0x14a6000c  bne         $a1, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x360304u;
    {
        const bool branch_taken_0x360304 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x360308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360304u;
        // 0x360308: 0x24080011  addiu       $t0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360304) {
            ctx->pc = 0x360338u;
            goto label_360338;
        }
    }
    ctx->pc = 0x36030Cu;
    // 0x36030c: 0x24e30044  addiu       $v1, $a3, 0x44
    ctx->pc = 0x36030cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 68));
label_360310:
    // 0x360310: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x360310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x360314: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x360314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x360318: 0x290200e0  slti        $v0, $t0, 0xE0
    ctx->pc = 0x360318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)224) ? 1 : 0);
    // 0x36031c: 0x0  nop
    ctx->pc = 0x36031cu;
    // NOP
    // 0x360320: 0x0  nop
    ctx->pc = 0x360320u;
    // NOP
    // 0x360324: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x360324u;
    {
        const bool branch_taken_0x360324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x360328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360324u;
        // 0x360328: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360324) {
            ctx->pc = 0x360310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_360310;
        }
    }
    ctx->pc = 0x36032Cu;
    // 0x36032c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x36032Cu;
    {
        const bool branch_taken_0x36032c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36032Cu;
        // 0x360330: 0x24e20380  addiu       $v0, $a3, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36032c) {
            ctx->pc = 0x36037Cu;
            goto label_36037c;
        }
    }
    ctx->pc = 0x360334u;
    // 0x360334: 0x0  nop
    ctx->pc = 0x360334u;
    // NOP
label_360338:
    // 0x360338: 0xc55023  subu        $t2, $a2, $a1
    ctx->pc = 0x360338u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x36033c: 0x240b00cf  addiu       $t3, $zero, 0xCF
    ctx->pc = 0x36033cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
    // 0x360340: 0x24e90044  addiu       $t1, $a3, 0x44
    ctx->pc = 0x360340u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 68));
    // 0x360344: 0x0  nop
    ctx->pc = 0x360344u;
    // NOP
label_360348:
    // 0x360348: 0x14b001b  divu        $zero, $t2, $t3
    ctx->pc = 0x360348u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x36034c: 0x2503ffef  addiu       $v1, $t0, -0x11
    ctx->pc = 0x36034cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967279));
    // 0x360350: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x360350u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x360354: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x360354u;
    {
        const bool branch_taken_0x360354 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x360354) {
            ctx->pc = 0x360358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x360354u;
            // 0x360358: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x36035Cu;
            goto label_36035c;
        }
    }
    ctx->pc = 0x36035Cu;
label_36035c:
    // 0x36035c: 0x290400e0  slti        $a0, $t0, 0xE0
    ctx->pc = 0x36035cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)224) ? 1 : 0);
    // 0x360360: 0x1012  mflo        $v0
    ctx->pc = 0x360360u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x360364: 0x436018  mult        $t4, $v0, $v1
    ctx->pc = 0x360364u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x360368: 0x1851021  addu        $v0, $t4, $a1
    ctx->pc = 0x360368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x36036c: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x36036cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x360370: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x360370u;
    {
        const bool branch_taken_0x360370 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x360374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360370u;
        // 0x360374: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360370) {
            ctx->pc = 0x360348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_360348;
        }
    }
    ctx->pc = 0x360378u;
    // 0x360378: 0x24e20380  addiu       $v0, $a3, 0x380
    ctx->pc = 0x360378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 896));
label_36037c:
    // 0x36037c: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x36037cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_360380:
    // 0x360380: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x360380u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x360384: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x360384u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x360388: 0x0  nop
    ctx->pc = 0x360388u;
    // NOP
    // 0x36038c: 0x0  nop
    ctx->pc = 0x36038cu;
    // NOP
    // 0x360390: 0x0  nop
    ctx->pc = 0x360390u;
    // NOP
    // 0x360394: 0x501fffa  bgez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x360394u;
    {
        const bool branch_taken_0x360394 = (GPR_S64(ctx, 8) >= 0);
        ctx->pc = 0x360398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360394u;
        // 0x360398: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360394) {
            ctx->pc = 0x360380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_360380;
        }
    }
    ctx->pc = 0x36039Cu;
    // 0x36039c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x36039cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x3603a0: 0x24e703c0  addiu       $a3, $a3, 0x3C0
    ctx->pc = 0x3603a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 960));
    // 0x3603a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3603a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3603a8: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x3603a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3603ac: 0x0  nop
    ctx->pc = 0x3603acu;
    // NOP
label_3603b0:
    // 0x3603b0: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3603b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3603b4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x3603b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x3603b8: 0x0  nop
    ctx->pc = 0x3603b8u;
    // NOP
    // 0x3603bc: 0x0  nop
    ctx->pc = 0x3603bcu;
    // NOP
    // 0x3603c0: 0x0  nop
    ctx->pc = 0x3603c0u;
    // NOP
    // 0x3603c4: 0x501fffa  bgez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3603C4u;
    {
        const bool branch_taken_0x3603c4 = (GPR_S64(ctx, 8) >= 0);
        ctx->pc = 0x3603C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3603C4u;
        // 0x3603c8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3603c4) {
            ctx->pc = 0x3603B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3603b0;
        }
    }
    ctx->pc = 0x3603CCu;
    // 0x3603cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3603CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3603CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3603D4u;
    // 0x3603d4: 0x0  nop
    ctx->pc = 0x3603d4u;
    // NOP
    ctx->pc = 0x3603d8u;
}
