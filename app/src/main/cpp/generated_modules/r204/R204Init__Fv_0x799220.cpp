#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r204_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r204
{
// Function: R204Init__Fv
// Address: 0x799220 - 0x7993c0
void R204Init__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R204Init__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x799240u: goto label_799240;
        case 0x799270u: goto label_799270;
        case 0x7992a4u: goto label_7992a4;
        case 0x7992d8u: goto label_7992d8;
        case 0x7992ecu: goto label_7992ec;
        case 0x799310u: goto label_799310;
        case 0x799330u: goto label_799330;
        case 0x799350u: goto label_799350;
        case 0x79936cu: goto label_79936c;
        case 0x799388u: goto label_799388;
        case 0x7993a8u: goto label_7993a8;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x799224: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x799228: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79922c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x799230: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x799230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x799234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799238: 0xc1e6460  jal         func_799180
    ctx->pc = 0x799238u;
    SET_GPR_U32(ctx, 31, 0x799240u);
    ctx->pc = 0x79923Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799238u;
    // 0x79923c: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799238u, 0x799240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799240u;
label_799240:
    // 0x799240: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x799240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
    // 0x799244: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x799244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x799248: 0x8085af20  lb          $a1, -0x50E0($a0)
    ctx->pc = 0x799248u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x79AF20u));
    // 0x79924c: 0x2488af20  addiu       $t0, $a0, -0x50E0
    ctx->pc = 0x79924cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946592));
    // 0x799250: 0x24694c58  addiu       $t1, $v1, 0x4C58
    ctx->pc = 0x799250u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x799254: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799254u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799258: 0xae02b000  sw          $v0, -0x5000($s0)
    ctx->pc = 0x799258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294946816), GPR_U32(ctx, 2));
    // 0x79925c: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x79925Cu;
    {
        const bool branch_taken_0x79925c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x799260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79925Cu;
        // 0x799260: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79925c) {
            ctx->pc = 0x799298u;
            goto label_799298;
        }
    }
    ctx->pc = 0x799264u;
    // 0x799264: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x799264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799268: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x799268u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x79926c: 0x0  nop
    ctx->pc = 0x79926cu;
    // NOP
label_799270:
    // 0x799270: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x799270u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x799274: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799278: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x799278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x79927c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79927cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799280: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x799280u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799284: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799284u;
    {
        const bool branch_taken_0x799284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799284u;
        // 0x799288: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799284) {
            ctx->pc = 0x799298u;
            goto label_799298;
        }
    }
    ctx->pc = 0x79928Cu;
    // 0x79928c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x79928cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x799290: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799290u;
    {
        const bool branch_taken_0x799290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799290) {
            ctx->pc = 0x799294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799290u;
            // 0x799294: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
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
    // 0x799298: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x799298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79929c: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79929Cu;
    SET_GPR_U32(ctx, 31, 0x7992A4u);
    ctx->pc = 0x7992A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79929Cu;
    // 0x7992a0: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79929Cu, 0x7992A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992A4u;
label_7992a4:
    // 0x7992a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7992a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992a8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7992A8u;
    {
        const bool branch_taken_0x7992a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992A8u;
        // 0x7992ac: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992a8) {
            ctx->pc = 0x7992BCu;
            goto label_7992bc;
        }
    }
    ctx->pc = 0x7992B0u;
    // 0x7992b0: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x7992b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x7992b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7992b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x7992b8: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x7992b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
label_7992bc:
    // 0x7992bc: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x7992bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x7992c0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x7992c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x7992c4: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x7992c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x7992c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x7992c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7992cc: 0x24840d20  addiu       $a0, $a0, 0xD20
    ctx->pc = 0x7992ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3360));
    // 0x7992d0: 0xc07fa28  jal         func_1FE8A0
    ctx->pc = 0x7992D0u;
    SET_GPR_U32(ctx, 31, 0x7992D8u);
    ctx->pc = 0x7992D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992D0u;
    // 0x7992d4: 0x240503bb  addiu       $a1, $zero, 0x3BB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 955));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x7992D0u, 0x7992D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992D8u;
label_7992d8:
    // 0x7992d8: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x7992d8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x7992dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x7992dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7992e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7992e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7992e4: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x7992E4u;
    SET_GPR_U32(ctx, 31, 0x7992ECu);
    ctx->pc = 0x7992E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992E4u;
    // 0x7992e8: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x7992E4u, 0x7992ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992ECu;
label_7992ec:
    // 0x7992ec: 0x2631ea60  addiu       $s1, $s1, -0x15A0
    ctx->pc = 0x7992ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961760));
    // 0x7992f0: 0x261093c8  addiu       $s0, $s0, -0x6C38
    ctx->pc = 0x7992f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939592));
    // 0x7992f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7992f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992f8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x7992f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7992fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799300: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799304: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799304u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799308: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x799308u;
    SET_GPR_U32(ctx, 31, 0x799310u);
    ctx->pc = 0x79930Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799308u;
    // 0x79930c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799308u, 0x799310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799310u;
label_799310:
    // 0x799310: 0x3c12007a  lui         $s2, 0x7A
    ctx->pc = 0x799310u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
    // 0x799314: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x799314u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799318: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79931c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79931cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799320: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799324: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x799324u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799328: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x799328u;
    SET_GPR_U32(ctx, 31, 0x799330u);
    ctx->pc = 0x79932Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799328u;
    // 0x79932c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799328u, 0x799330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799330u;
label_799330:
    // 0x799330: 0x265296c8  addiu       $s2, $s2, -0x6938
    ctx->pc = 0x799330u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294940360));
    // 0x799334: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799338: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x799338u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79933c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79933cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799340: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799344: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799344u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799348: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x799348u;
    SET_GPR_U32(ctx, 31, 0x799350u);
    ctx->pc = 0x79934Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799348u;
    // 0x79934c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799348u, 0x799350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799350u;
label_799350:
    // 0x799350: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799354: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x799354u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799358: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79935c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79935cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799360: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x799360u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799364: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x799364u;
    SET_GPR_U32(ctx, 31, 0x79936Cu);
    ctx->pc = 0x799368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799364u;
    // 0x799368: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799364u, 0x79936Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79936Cu;
label_79936c:
    // 0x79936c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x79936cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799370: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799374: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x799374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x799378: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79937c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x79937cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799380: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x799380u;
    SET_GPR_U32(ctx, 31, 0x799388u);
    ctx->pc = 0x799384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799380u;
    // 0x799384: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799380u, 0x799388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799388u;
label_799388:
    // 0x799388: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799388u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x79938c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79938cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799390: 0x24e7a080  addiu       $a3, $a3, -0x5F80
    ctx->pc = 0x799390u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942848));
    // 0x799394: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x799394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x799398: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79939c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79939cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993a0: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x7993A0u;
    SET_GPR_U32(ctx, 31, 0x7993A8u);
    ctx->pc = 0x7993A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993A0u;
    // 0x7993a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x7993A0u, 0x7993A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993A8u;
label_7993a8:
    // 0x7993a8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7993a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7993ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7993acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7993b0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x7993b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7993b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7993b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7993b8: 0x3e00008  jr          $ra
    ctx->pc = 0x7993B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7993BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993B8u;
        // 0x7993bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7993B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7993C0u;
}
} // namespace gh_r204
