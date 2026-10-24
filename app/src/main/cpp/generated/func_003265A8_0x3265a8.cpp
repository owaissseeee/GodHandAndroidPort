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

// Function: func_003265A8
// Address: 0x3265a8 - 0x326718
void func_003265A8_0x3265a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003265A8_0x3265a8");
#endif

    switch (ctx->pc) {
        case 0x3265f0u: goto label_3265f0;
        case 0x326638u: goto label_326638;
        case 0x326644u: goto label_326644;
        case 0x326654u: goto label_326654;
        case 0x326678u: goto label_326678;
        case 0x326694u: goto label_326694;
        case 0x3266a8u: goto label_3266a8;
        case 0x3266d4u: goto label_3266d4;
        default: break;
    }

    ctx->pc = 0x3265a8u;

    // 0x3265a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3265a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3265ac: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x3265acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x3265b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3265b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3265b4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3265b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3265b8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3265b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3265bc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3265bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3265c0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3265c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3265c4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3265c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3265c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3265c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3265cc: 0x24e3f9f0  addiu       $v1, $a3, -0x610
    ctx->pc = 0x3265ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965744));
    // 0x3265d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3265d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3265d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3265d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3265d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3265d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3265dc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3265dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3265e0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3265e0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x3CF9F0u));
    // 0x3265e4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3265E4u;
    {
        const bool branch_taken_0x3265e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3265E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3265E4u;
        // 0x3265e8: 0x8e900000  lw          $s0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3265e4) {
            ctx->pc = 0x326614u;
            goto label_326614;
        }
    }
    ctx->pc = 0x3265ECu;
    // 0x3265ec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3265ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3265f0:
    // 0x3265f0: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x3265f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3265f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3265F4u;
    {
        const bool branch_taken_0x3265f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3265F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3265F4u;
        // 0x3265f8: 0x246300ac  addiu       $v1, $v1, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3265f4) {
            ctx->pc = 0x326614u;
            goto label_326614;
        }
    }
    ctx->pc = 0x3265FCu;
    // 0x3265fc: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3265fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x326600: 0x0  nop
    ctx->pc = 0x326600u;
    // NOP
    // 0x326604: 0x0  nop
    ctx->pc = 0x326604u;
    // NOP
    // 0x326608: 0x0  nop
    ctx->pc = 0x326608u;
    // NOP
    // 0x32660c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x32660Cu;
    {
        const bool branch_taken_0x32660c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32660c) {
            ctx->pc = 0x326610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32660Cu;
            // 0x326610: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3265F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3265f0;
        }
    }
    ctx->pc = 0x326614u;
label_326614:
    // 0x326614: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x326614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x326618: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x326618u;
    {
        const bool branch_taken_0x326618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x32661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326618u;
        // 0x32661c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326618) {
            ctx->pc = 0x3266F0u;
            goto label_3266f0;
        }
    }
    ctx->pc = 0x326620u;
    // 0x326620: 0x240200ac  addiu       $v0, $zero, 0xAC
    ctx->pc = 0x326620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x326624: 0x24e3f9f0  addiu       $v1, $a3, -0x610
    ctx->pc = 0x326624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965744));
    // 0x326628: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x326628u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x32662c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32662cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326630: 0xc0ce7fe  jal         func_339FF8
    ctx->pc = 0x326630u;
    SET_GPR_U32(ctx, 31, 0x326638u);
    ctx->pc = 0x326634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326630u;
    // 0x326634: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339FF8u, 0x326630u, 0x326638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326638u;
label_326638:
    // 0x326638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x326638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32663c: 0xc0ce800  jal         func_33A000
    ctx->pc = 0x32663Cu;
    SET_GPR_U32(ctx, 31, 0x326644u);
    ctx->pc = 0x326640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32663Cu;
    // 0x326640: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A000u, 0x32663Cu, 0x326644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326644u;
label_326644:
    // 0x326644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x326644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326648: 0x287c2  srl         $s0, $v0, 31
    ctx->pc = 0x326648u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x32664c: 0xc0ce802  jal         func_33A008
    ctx->pc = 0x32664Cu;
    SET_GPR_U32(ctx, 31, 0x326654u);
    ctx->pc = 0x326650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32664Cu;
    // 0x326650: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A008u, 0x32664Cu, 0x326654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326654u;
label_326654:
    // 0x326654: 0x23fc2  srl         $a3, $v0, 31
    ctx->pc = 0x326654u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x326658: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x326658u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x32665c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x32665cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x326660: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x326660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326664: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x326664u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x326668: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x326668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32666c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32666cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326670: 0xc0cf1fe  jal         func_33C7F8
    ctx->pc = 0x326670u;
    SET_GPR_U32(ctx, 31, 0x326678u);
    ctx->pc = 0x326674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326670u;
    // 0x326674: 0xc73821  addu        $a3, $a2, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C7F8u, 0x326670u, 0x326678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326678u;
label_326678:
    // 0x326678: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x326678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32667c: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x32667Cu;
    {
        const bool branch_taken_0x32667c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x326680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32667Cu;
        // 0x326680: 0xae440004  sw          $a0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32667c) {
            ctx->pc = 0x3266F0u;
            goto label_3266f0;
        }
    }
    ctx->pc = 0x326684u;
    // 0x326684: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x326684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x326688: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x326688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32668c: 0xc0cf39a  jal         func_33CE68
    ctx->pc = 0x32668Cu;
    SET_GPR_U32(ctx, 31, 0x326694u);
    ctx->pc = 0x326690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32668Cu;
    // 0x326690: 0x24a56b98  addiu       $a1, $a1, 0x6B98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CE68u, 0x32668Cu, 0x326694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326694u;
label_326694:
    // 0x326694: 0xae550008  sw          $s5, 0x8($s2)
    ctx->pc = 0x326694u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 21));
    // 0x326698: 0xa2530002  sb          $s3, 0x2($s2)
    ctx->pc = 0x326698u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x32669c: 0x1a60000a  blez        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x32669Cu;
    {
        const bool branch_taken_0x32669c = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x3266A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32669Cu;
        // 0x3266a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32669c) {
            ctx->pc = 0x3266C8u;
            goto label_3266c8;
        }
    }
    ctx->pc = 0x3266A4u;
    // 0x3266a4: 0x2647000c  addiu       $a3, $s2, 0xC
    ctx->pc = 0x3266a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_3266a8:
    // 0x3266a8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3266a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3266ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3266acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3266b0: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x3266b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3266b4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3266b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3266b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3266b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3266bc: 0xd3282a  slt         $a1, $a2, $s3
    ctx->pc = 0x3266bcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x3266c0: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3266C0u;
    {
        const bool branch_taken_0x3266c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3266C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3266C0u;
        // 0x3266c4: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3266c0) {
            ctx->pc = 0x3266A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3266a8;
        }
    }
    ctx->pc = 0x3266C8u;
label_3266c8:
    // 0x3266c8: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x3266c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3266cc: 0xc0c995a  jal         func_326568
    ctx->pc = 0x3266CCu;
    SET_GPR_U32(ctx, 31, 0x3266D4u);
    ctx->pc = 0x3266D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3266CCu;
    // 0x3266d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326568u, 0x3266CCu, 0x3266D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3266D4u;
label_3266d4:
    // 0x3266d4: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x3266d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x3266d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3266d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3266dc: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x3266dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
    // 0x3266e0: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x3266e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
    // 0x3266e4: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x3266e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
    // 0x3266e8: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x3266e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3266ec: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3266ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3266f0:
    // 0x3266f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3266f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3266f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3266f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3266f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3266f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3266fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3266fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x326700: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x326700u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326704: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x326704u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x326708: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x326708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32670c: 0x3e00008  jr          $ra
    ctx->pc = 0x32670Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32670Cu;
        // 0x326710: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32670Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326714u;
    // 0x326714: 0x0  nop
    ctx->pc = 0x326714u;
    // NOP
    ctx->pc = 0x326718u;
}
