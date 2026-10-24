#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r604_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r604
{
// Function: R604Init__Fv
// Address: 0x799220 - 0x799340
void R604Init__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R604Init__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x799240u: goto label_799240;
        case 0x799248u: goto label_799248;
        case 0x799270u: goto label_799270;
        case 0x7992a0u: goto label_7992a0;
        case 0x7992d0u: goto label_7992d0;
        case 0x799300u: goto label_799300;
        case 0x799328u: goto label_799328;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x799224: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x799228: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79922c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x799230: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799230u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x799234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799238: 0xc1e6460  jal         func_799180
    ctx->pc = 0x799238u;
    SET_GPR_U32(ctx, 31, 0x799240u);
    ctx->pc = 0x79923Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799238u;
    // 0x79923c: 0x3c11007a  lui         $s1, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799238u, 0x799240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799240u;
label_799240:
    // 0x799240: 0xc1e64f6  jal         func_7993D8
    ctx->pc = 0x799240u;
    SET_GPR_U32(ctx, 31, 0x799248u);
    ctx->pc = 0x799244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799240u;
    // 0x799244: 0xae02b600  sw          $v0, -0x4A00($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294948352), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7993D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7993D8u, 0x799240u, 0x799248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799248u;
label_799248:
    // 0x799248: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79924c: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79924cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x799250: 0x8044b420  lb          $a0, -0x4BE0($v0)
    ctx->pc = 0x799250u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79B420u));
    // 0x799254: 0x2446b420  addiu       $a2, $v0, -0x4BE0
    ctx->pc = 0x799254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947872));
    // 0x799258: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x799258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79925c: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x79925cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x799260: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799264: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x799264u;
    {
        const bool branch_taken_0x799264 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799264u;
        // 0x799268: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799264) {
            ctx->pc = 0x799298u;
            goto label_799298;
        }
    }
    ctx->pc = 0x79926Cu;
    // 0x79926c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79926cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799270:
    // 0x799270: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799270u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799274: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799278: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79927c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79927cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799280: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799280u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799284: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799284u;
    {
        const bool branch_taken_0x799284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799284u;
        // 0x799288: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799284) {
            ctx->pc = 0x799298u;
            goto label_799298;
        }
    }
    ctx->pc = 0x79928Cu;
    // 0x79928c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79928cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799290: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799290u;
    {
        const bool branch_taken_0x799290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799290) {
            ctx->pc = 0x799294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799290u;
            // 0x799294: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799270;
        }
    }
    ctx->pc = 0x799298u;
label_799298:
    // 0x799298: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799298u;
    SET_GPR_U32(ctx, 31, 0x7992A0u);
    ctx->pc = 0x79929Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799298u;
    // 0x79929c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799298u, 0x7992A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992A0u;
label_7992a0:
    // 0x7992a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7992a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992a4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x7992A4u;
    {
        const bool branch_taken_0x7992a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992A4u;
        // 0x7992a8: 0x240203d0  addiu       $v0, $zero, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992a4) {
            ctx->pc = 0x7992B0u;
            goto label_7992b0;
        }
    }
    ctx->pc = 0x7992ACu;
    // 0x7992ac: 0xac620560  sw          $v0, 0x560($v1)
    ctx->pc = 0x7992acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1376), GPR_U32(ctx, 2));
label_7992b0:
    // 0x7992b0: 0x8222b428  lb          $v0, -0x4BD8($s1)
    ctx->pc = 0x7992b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294947880)));
    // 0x7992b4: 0x26084c58  addiu       $t0, $s0, 0x4C58
    ctx->pc = 0x7992b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 19544));
    // 0x7992b8: 0x2623b428  addiu       $v1, $s1, -0x4BD8
    ctx->pc = 0x7992b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947880));
    // 0x7992bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7992bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992c0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7992C0u;
    {
        const bool branch_taken_0x7992c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992C0u;
        // 0x7992c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992c0) {
            ctx->pc = 0x7992F8u;
            goto label_7992f8;
        }
    }
    ctx->pc = 0x7992C8u;
    // 0x7992c8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x7992c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992cc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7992ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7992d0:
    // 0x7992d0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7992d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x7992d4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7992d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x7992d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7992d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7992dc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7992dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x7992e0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7992e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x7992e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7992E4u;
    {
        const bool branch_taken_0x7992e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992E4u;
        // 0x7992e8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992e4) {
            ctx->pc = 0x7992F8u;
            goto label_7992f8;
        }
    }
    ctx->pc = 0x7992ECu;
    // 0x7992ec: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7992ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7992f0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7992F0u;
    {
        const bool branch_taken_0x7992f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7992f0) {
            ctx->pc = 0x7992F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7992F0u;
            // 0x7992f4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7992D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7992d0;
        }
    }
    ctx->pc = 0x7992F8u;
label_7992f8:
    // 0x7992f8: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x7992F8u;
    SET_GPR_U32(ctx, 31, 0x799300u);
    ctx->pc = 0x7992FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992F8u;
    // 0x7992fc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x7992F8u, 0x799300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799300u;
label_799300:
    // 0x799300: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x799300u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799304: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x799304u;
    {
        const bool branch_taken_0x799304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799304u;
        // 0x799308: 0x24020a3a  addiu       $v0, $zero, 0xA3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2618));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799304) {
            ctx->pc = 0x799310u;
            goto label_799310;
        }
    }
    ctx->pc = 0x79930Cu;
    // 0x79930c: 0xac620560  sw          $v0, 0x560($v1)
    ctx->pc = 0x79930cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1376), GPR_U32(ctx, 2));
label_799310:
    // 0x799310: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799314: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799318: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x799318u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79931c: 0x24a593d0  addiu       $a1, $a1, -0x6C30
    ctx->pc = 0x79931cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939600));
    // 0x799320: 0xc0b1370  jal         func_2C4DC0
    ctx->pc = 0x799320u;
    SET_GPR_U32(ctx, 31, 0x799328u);
    ctx->pc = 0x799324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799320u;
    // 0x799324: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4DC0u, 0x799320u, 0x799328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799328u;
label_799328:
    // 0x799328: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x799328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79932c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79932cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799334: 0x3e00008  jr          $ra
    ctx->pc = 0x799334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799334u;
        // 0x799338: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79933Cu;
    // 0x79933c: 0x0  nop
    ctx->pc = 0x79933cu;
    // NOP
    ctx->pc = 0x799340u;
}
} // namespace gh_r604
