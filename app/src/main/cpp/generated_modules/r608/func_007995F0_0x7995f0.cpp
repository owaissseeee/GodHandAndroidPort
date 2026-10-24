#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r608_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r608
{
// Function: func_007995F0
// Address: 0x7995f0 - 0x7998b0
void func_007995F0_0x7995f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007995F0_0x7995f0");
#endif

    switch (ctx->pc) {
        case 0x799630u: goto label_799630;
        case 0x799660u: goto label_799660;
        case 0x799690u: goto label_799690;
        case 0x7996a0u: goto label_7996a0;
        case 0x7996c8u: goto label_7996c8;
        case 0x7996f8u: goto label_7996f8;
        case 0x799730u: goto label_799730;
        case 0x799760u: goto label_799760;
        case 0x799798u: goto label_799798;
        case 0x7997a4u: goto label_7997a4;
        case 0x7997c0u: goto label_7997c0;
        case 0x7997d4u: goto label_7997d4;
        case 0x7997e8u: goto label_7997e8;
        case 0x799800u: goto label_799800;
        case 0x799814u: goto label_799814;
        case 0x799820u: goto label_799820;
        case 0x79982cu: goto label_79982c;
        case 0x799848u: goto label_799848;
        case 0x79985cu: goto label_79985c;
        case 0x799870u: goto label_799870;
        case 0x79988cu: goto label_79988c;
        case 0x799894u: goto label_799894;
        case 0x79989cu: goto label_79989c;
        default: break;
    }

    ctx->pc = 0x7995f0u;

    // 0x7995f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7995f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7995f4: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x7995f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x7995f8: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x7995f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x7995fc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x7995fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x799600: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x799600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x799604: 0x2446afa0  addiu       $a2, $v0, -0x5060
    ctx->pc = 0x799604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946720));
    // 0x799608: 0x8044afa0  lb          $a0, -0x5060($v0)
    ctx->pc = 0x799608u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79AFA0u));
    // 0x79960c: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x79960cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799610: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x799614: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x799614u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x799618: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79961c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79961cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799620: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x799620u;
    {
        const bool branch_taken_0x799620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799620u;
        // 0x799624: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799620) {
            ctx->pc = 0x799658u;
            goto label_799658;
        }
    }
    ctx->pc = 0x799628u;
    // 0x799628: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799628u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79962c: 0x0  nop
    ctx->pc = 0x79962cu;
    // NOP
label_799630:
    // 0x799630: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799630u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799634: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799638: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79963c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79963cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799640: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799640u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799644: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799644u;
    {
        const bool branch_taken_0x799644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799644u;
        // 0x799648: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799644) {
            ctx->pc = 0x799658u;
            goto label_799658;
        }
    }
    ctx->pc = 0x79964Cu;
    // 0x79964c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79964cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799650: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799650u;
    {
        const bool branch_taken_0x799650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799650) {
            ctx->pc = 0x799654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799650u;
            // 0x799654: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799630;
        }
    }
    ctx->pc = 0x799658u;
label_799658:
    // 0x799658: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799658u;
    SET_GPR_U32(ctx, 31, 0x799660u);
    ctx->pc = 0x79965Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799658u;
    // 0x79965c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799658u, 0x799660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799660u;
label_799660:
    // 0x799660: 0x8e03b1c4  lw          $v1, -0x4E3C($s0)
    ctx->pc = 0x799660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947268)));
    // 0x799664: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x799664u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x799668: 0x8e02b1c4  lw          $v0, -0x4E3C($s0)
    ctx->pc = 0x799668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947268)));
    // 0x79966c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x79966cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799670: 0x5080008b  beql        $a0, $zero, . + 4 + (0x8B << 2)
    ctx->pc = 0x799670u;
    {
        const bool branch_taken_0x799670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x799670) {
            ctx->pc = 0x799674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799670u;
            // 0x799674: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7998A0u;
            goto label_7998a0;
        }
    }
    ctx->pc = 0x799678u;
    // 0x799678: 0x3c01bf9c  lui         $at, 0xBF9C
    ctx->pc = 0x799678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49052 << 16));
    // 0x79967c: 0x342161aa  ori         $at, $at, 0x61AA
    ctx->pc = 0x79967cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25002);
    // 0x799680: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799684: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x799684u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x799688: 0xc0693f8  jal         func_1A4FE0
    ctx->pc = 0x799688u;
    SET_GPR_U32(ctx, 31, 0x799690u);
    ctx->pc = 0x1A4FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4FE0u, 0x799688u, 0x799690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799690u;
label_799690:
    // 0x799690: 0x8e02b1c4  lw          $v0, -0x4E3C($s0)
    ctx->pc = 0x799690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947268)));
    // 0x799694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799698: 0xc0693c8  jal         func_1A4F20
    ctx->pc = 0x799698u;
    SET_GPR_U32(ctx, 31, 0x7996A0u);
    ctx->pc = 0x79969Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799698u;
    // 0x79969c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F20u, 0x799698u, 0x7996A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996A0u;
label_7996a0:
    // 0x7996a0: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x7996a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x7996a4: 0x26284c58  addiu       $t0, $s1, 0x4C58
    ctx->pc = 0x7996a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19544));
    // 0x7996a8: 0x8043afa8  lb          $v1, -0x5058($v0)
    ctx->pc = 0x7996a8u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x79AFA8u));
    // 0x7996ac: 0x2444afa8  addiu       $a0, $v0, -0x5058
    ctx->pc = 0x7996acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946728));
    // 0x7996b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7996b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996b4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x7996B4u;
    {
        const bool branch_taken_0x7996b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996B4u;
        // 0x7996b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996b4) {
            ctx->pc = 0x7996F0u;
            goto label_7996f0;
        }
    }
    ctx->pc = 0x7996BCu;
    // 0x7996bc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x7996bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996c0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7996c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7996c4: 0x0  nop
    ctx->pc = 0x7996c4u;
    // NOP
label_7996c8:
    // 0x7996c8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7996c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x7996cc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7996ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x7996d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7996d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7996d4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7996d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x7996d8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7996d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x7996dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7996DCu;
    {
        const bool branch_taken_0x7996dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996DCu;
        // 0x7996e0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996dc) {
            ctx->pc = 0x7996F0u;
            goto label_7996f0;
        }
    }
    ctx->pc = 0x7996E4u;
    // 0x7996e4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7996e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7996e8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7996E8u;
    {
        const bool branch_taken_0x7996e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7996e8) {
            ctx->pc = 0x7996ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7996E8u;
            // 0x7996ec: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7996C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7996c8;
        }
    }
    ctx->pc = 0x7996F0u;
label_7996f0:
    // 0x7996f0: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x7996F0u;
    SET_GPR_U32(ctx, 31, 0x7996F8u);
    ctx->pc = 0x7996F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996F0u;
    // 0x7996f4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x7996F0u, 0x7996F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996F8u;
label_7996f8:
    // 0x7996f8: 0x8e03b1c4  lw          $v1, -0x4E3C($s0)
    ctx->pc = 0x7996f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947268)));
    // 0x7996fc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x7996fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x799700: 0x8e02b1c4  lw          $v0, -0x4E3C($s0)
    ctx->pc = 0x799700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947268)));
    // 0x799704: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x799708: 0x10600064  beqz        $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x799708u;
    {
        const bool branch_taken_0x799708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799708u;
        // 0x79970c: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799708) {
            ctx->pc = 0x79989Cu;
            goto label_79989c;
        }
    }
    ctx->pc = 0x799710u;
    // 0x799710: 0x26284c58  addiu       $t0, $s1, 0x4C58
    ctx->pc = 0x799710u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19544));
    // 0x799714: 0x8043afb0  lb          $v1, -0x5050($v0)
    ctx->pc = 0x799714u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946736)));
    // 0x799718: 0x2444afb0  addiu       $a0, $v0, -0x5050
    ctx->pc = 0x799718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946736));
    // 0x79971c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79971cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799720: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x799720u;
    {
        const bool branch_taken_0x799720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799720u;
        // 0x799724: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799720) {
            ctx->pc = 0x799758u;
            goto label_799758;
        }
    }
    ctx->pc = 0x799728u;
    // 0x799728: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x799728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79972c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79972cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799730:
    // 0x799730: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799730u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799734: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799738: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79973c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79973cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799740: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799740u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799744: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799744u;
    {
        const bool branch_taken_0x799744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799744u;
        // 0x799748: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799744) {
            ctx->pc = 0x799758u;
            goto label_799758;
        }
    }
    ctx->pc = 0x79974Cu;
    // 0x79974c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79974cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799750: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799750u;
    {
        const bool branch_taken_0x799750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799750) {
            ctx->pc = 0x799754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799750u;
            // 0x799754: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799730;
        }
    }
    ctx->pc = 0x799758u;
label_799758:
    // 0x799758: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799758u;
    SET_GPR_U32(ctx, 31, 0x799760u);
    ctx->pc = 0x79975Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799758u;
    // 0x79975c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799758u, 0x799760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799760u;
label_799760:
    // 0x799760: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x799760u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799764: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x799764u;
    {
        const bool branch_taken_0x799764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799764u;
        // 0x799768: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799764) {
            ctx->pc = 0x79989Cu;
            goto label_79989c;
        }
    }
    ctx->pc = 0x79976Cu;
    // 0x79976c: 0x8c6205b8  lw          $v0, 0x5B8($v1)
    ctx->pc = 0x79976cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1464)));
    // 0x799770: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x799770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x799774: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x799774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x799778: 0xac6205b8  sw          $v0, 0x5B8($v1)
    ctx->pc = 0x799778u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1464), GPR_U32(ctx, 2));
    // 0x79977c: 0x8c838658  lw          $v1, -0x79A8($a0)
    ctx->pc = 0x79977cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799780: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799784: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x799784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x799788: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x799788u;
    {
        const bool branch_taken_0x799788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799788u;
        // 0x79978c: 0x8e02b1c4  lw          $v0, -0x4E3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799788) {
            ctx->pc = 0x799808u;
            goto label_799808;
        }
    }
    ctx->pc = 0x799790u;
    // 0x799790: 0xc0693a2  jal         func_1A4E88
    ctx->pc = 0x799790u;
    SET_GPR_U32(ctx, 31, 0x799798u);
    ctx->pc = 0x799794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799790u;
    // 0x799794: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E88u, 0x799790u, 0x799798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799798u;
label_799798:
    // 0x799798: 0x8e02b1c4  lw          $v0, -0x4E3C($s0)
    ctx->pc = 0x799798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947268)));
    // 0x79979c: 0xc05f9ce  jal         func_17E738
    ctx->pc = 0x79979Cu;
    SET_GPR_U32(ctx, 31, 0x7997A4u);
    ctx->pc = 0x7997A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79979Cu;
    // 0x7997a0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E738u, 0x79979Cu, 0x7997A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997A4u;
label_7997a4:
    // 0x7997a4: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x7997a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x7997a8: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7997a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7997ac: 0x2610ae50  addiu       $s0, $s0, -0x51B0
    ctx->pc = 0x7997acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946384));
    // 0x7997b0: 0x24a5afb8  addiu       $a1, $a1, -0x5048
    ctx->pc = 0x7997b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946744));
    // 0x7997b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7997b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997b8: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x7997B8u;
    SET_GPR_U32(ctx, 31, 0x7997C0u);
    ctx->pc = 0x7997BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997B8u;
    // 0x7997bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x7997B8u, 0x7997C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997C0u;
label_7997c0:
    // 0x7997c0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7997c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7997c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7997c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997c8: 0x24a5afc8  addiu       $a1, $a1, -0x5038
    ctx->pc = 0x7997c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946760));
    // 0x7997cc: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x7997CCu;
    SET_GPR_U32(ctx, 31, 0x7997D4u);
    ctx->pc = 0x7997D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997CCu;
    // 0x7997d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x7997CCu, 0x7997D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997D4u;
label_7997d4:
    // 0x7997d4: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7997d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7997d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7997d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997dc: 0x24a5afd8  addiu       $a1, $a1, -0x5028
    ctx->pc = 0x7997dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946776));
    // 0x7997e0: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x7997E0u;
    SET_GPR_U32(ctx, 31, 0x7997E8u);
    ctx->pc = 0x7997E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997E0u;
    // 0x7997e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x7997E0u, 0x7997E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997E8u;
label_7997e8:
    // 0x7997e8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7997e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x7997ec: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7997ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7997f0: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x7997f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x7997f4: 0x24a598b0  addiu       $a1, $a1, -0x6750
    ctx->pc = 0x7997f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940848));
    // 0x7997f8: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7997F8u;
    SET_GPR_U32(ctx, 31, 0x799800u);
    ctx->pc = 0x7997FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997F8u;
    // 0x7997fc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7997F8u, 0x799800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799800u;
label_799800:
    // 0x799800: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x799800u;
    {
        const bool branch_taken_0x799800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799800u;
        // 0x799804: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799800) {
            ctx->pc = 0x7998A0u;
            goto label_7998a0;
        }
    }
    ctx->pc = 0x799808u;
label_799808:
    // 0x799808: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79980c: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x79980Cu;
    SET_GPR_U32(ctx, 31, 0x799814u);
    ctx->pc = 0x799810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79980Cu;
    // 0x799810: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x79980Cu, 0x799814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799814u;
label_799814:
    // 0x799814: 0x8e02b1c4  lw          $v0, -0x4E3C($s0)
    ctx->pc = 0x799814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947268)));
    // 0x799818: 0xc069380  jal         func_1A4E00
    ctx->pc = 0x799818u;
    SET_GPR_U32(ctx, 31, 0x799820u);
    ctx->pc = 0x79981Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799818u;
    // 0x79981c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E00u, 0x799818u, 0x799820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799820u;
label_799820:
    // 0x799820: 0x8e02b1c4  lw          $v0, -0x4E3C($s0)
    ctx->pc = 0x799820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947268)));
    // 0x799824: 0xc05f9a8  jal         func_17E6A0
    ctx->pc = 0x799824u;
    SET_GPR_U32(ctx, 31, 0x79982Cu);
    ctx->pc = 0x799828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799824u;
    // 0x799828: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E6A0u, 0x799824u, 0x79982Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79982Cu;
label_79982c:
    // 0x79982c: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x79982cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x799830: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799834: 0x2610ae50  addiu       $s0, $s0, -0x51B0
    ctx->pc = 0x799834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946384));
    // 0x799838: 0x24a5afb8  addiu       $a1, $a1, -0x5048
    ctx->pc = 0x799838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946744));
    // 0x79983c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79983cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799840: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x799840u;
    SET_GPR_U32(ctx, 31, 0x799848u);
    ctx->pc = 0x799844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799840u;
    // 0x799844: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799840u, 0x799848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799848u;
label_799848:
    // 0x799848: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79984c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79984cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799850: 0x24a5afc8  addiu       $a1, $a1, -0x5038
    ctx->pc = 0x799850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946760));
    // 0x799854: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x799854u;
    SET_GPR_U32(ctx, 31, 0x79985Cu);
    ctx->pc = 0x799858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799854u;
    // 0x799858: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799854u, 0x79985Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79985Cu;
label_79985c:
    // 0x79985c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79985cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799864: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799868: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x799868u;
    SET_GPR_U32(ctx, 31, 0x799870u);
    ctx->pc = 0x79986Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799868u;
    // 0x79986c: 0x24a5afd8  addiu       $a1, $a1, -0x5028 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799868u, 0x799870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799870u;
label_799870:
    // 0x799870: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799874: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x799878: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x799878u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x79987c: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x79987cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x799880: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x799880u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x799884: 0xc0a421a  jal         func_290868
    ctx->pc = 0x799884u;
    SET_GPR_U32(ctx, 31, 0x79988Cu);
    ctx->pc = 0x799888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799884u;
    // 0x799888: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799884u, 0x79988Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79988Cu;
label_79988c:
    // 0x79988c: 0xc09d86c  jal         func_2761B0
    ctx->pc = 0x79988Cu;
    SET_GPR_U32(ctx, 31, 0x799894u);
    ctx->pc = 0x799890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79988Cu;
    // 0x799890: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2761B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2761B0u, 0x79988Cu, 0x799894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799894u;
label_799894:
    // 0x799894: 0xc0a56ce  jal         func_295B38
    ctx->pc = 0x799894u;
    SET_GPR_U32(ctx, 31, 0x79989Cu);
    ctx->pc = 0x799898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799894u;
    // 0x799898: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B38u, 0x799894u, 0x79989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79989Cu;
label_79989c:
    // 0x79989c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79989cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_7998a0:
    // 0x7998a0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x7998a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7998a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x7998a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7998a8: 0x3e00008  jr          $ra
    ctx->pc = 0x7998A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7998ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998A8u;
        // 0x7998ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7998A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7998B0u;
}
} // namespace gh_r608
