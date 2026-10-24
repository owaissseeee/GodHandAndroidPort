#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r701_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r701
{
// Function: func_007995C0
// Address: 0x7995c0 - 0x799840
void func_007995C0_0x7995c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007995C0_0x7995c0");
#endif

    switch (ctx->pc) {
        case 0x799608u: goto label_799608;
        case 0x799620u: goto label_799620;
        case 0x799634u: goto label_799634;
        case 0x79964cu: goto label_79964c;
        case 0x799660u: goto label_799660;
        case 0x799688u: goto label_799688;
        case 0x799718u: goto label_799718;
        case 0x799720u: goto label_799720;
        case 0x79972cu: goto label_79972c;
        case 0x799748u: goto label_799748;
        case 0x7997b0u: goto label_7997b0;
        case 0x7997bcu: goto label_7997bc;
        case 0x7997d0u: goto label_7997d0;
        case 0x7997dcu: goto label_7997dc;
        case 0x7997f8u: goto label_7997f8;
        case 0x799808u: goto label_799808;
        default: break;
    }

    ctx->pc = 0x7995c0u;

    // 0x7995c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x7995c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x7995c4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x7995c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x7995c8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x7995c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x7995cc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x7995ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7995d0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x7995d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x7995d4: 0x24508658  addiu       $s0, $v0, -0x79A8
    ctx->pc = 0x7995d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936152));
    // 0x7995d8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x7995d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x7995dc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x7995dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995e0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x7995e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x7995e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7995e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995e8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x7995e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x7995ec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x7995ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x7995f0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x7995f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x7995f4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x7995f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x7995f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7995f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7995fc: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x7995fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x799600: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799600u;
    SET_GPR_U32(ctx, 31, 0x799608u);
    ctx->pc = 0x799604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799600u;
    // 0x799604: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799600u, 0x799608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799608u;
label_799608:
    // 0x799608: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79960c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x79960Cu;
    {
        const bool branch_taken_0x79960c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79960Cu;
        // 0x799610: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79960c) {
            ctx->pc = 0x799628u;
            goto label_799628;
        }
    }
    ctx->pc = 0x799614u;
    // 0x799614: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x799614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x799618: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799618u;
    SET_GPR_U32(ctx, 31, 0x799620u);
    ctx->pc = 0x79961Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799618u;
    // 0x79961c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799618u, 0x799620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799620u;
label_799620:
    // 0x799620: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x799620u;
    {
        const bool branch_taken_0x799620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799620u;
        // 0x799624: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799620) {
            ctx->pc = 0x79980Cu;
            goto label_79980c;
        }
    }
    ctx->pc = 0x799628u;
label_799628:
    // 0x799628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79962c: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79962Cu;
    SET_GPR_U32(ctx, 31, 0x799634u);
    ctx->pc = 0x799630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79962Cu;
    // 0x799630: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79962Cu, 0x799634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799634u;
label_799634:
    // 0x799634: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x799634u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799638: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x799638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79963c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79963cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799640: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x799640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x799644: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799644u;
    SET_GPR_U32(ctx, 31, 0x79964Cu);
    ctx->pc = 0x799648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799644u;
    // 0x799648: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799644u, 0x79964Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79964Cu;
label_79964c:
    // 0x79964c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x79964cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799650: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x799650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x799654: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x799654u;
    {
        const bool branch_taken_0x799654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799654u;
        // 0x799658: 0x3c17003c  lui         $s7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799654) {
            ctx->pc = 0x7997D0u;
            goto label_7997d0;
        }
    }
    ctx->pc = 0x79965Cu;
    // 0x79965c: 0x0  nop
    ctx->pc = 0x79965cu;
    // NOP
label_799660:
    // 0x799660: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x799660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x799664: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x799664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31364)));
    // 0x799668: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79966c: 0x1460005f  bnez        $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x79966Cu;
    {
        const bool branch_taken_0x79966c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79966Cu;
        // 0x799670: 0x24457a84  addiu       $a1, $v0, 0x7A84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 31364));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79966c) {
            ctx->pc = 0x7997ECu;
            goto label_7997ec;
        }
    }
    ctx->pc = 0x799674u;
    // 0x799674: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x799674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x799678: 0x440005d  bltz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x799678u;
    {
        const bool branch_taken_0x799678 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x79967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799678u;
        // 0x79967c: 0x26c48658  addiu       $a0, $s6, -0x79A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799678) {
            ctx->pc = 0x7997F0u;
            goto label_7997f0;
        }
    }
    ctx->pc = 0x799680u;
    // 0x799680: 0xc1e6700  jal         func_799C00
    ctx->pc = 0x799680u;
    SET_GPR_U32(ctx, 31, 0x799688u);
    ctx->pc = 0x799C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799C00u, 0x799680u, 0x799688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799688u;
label_799688:
    // 0x799688: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x799688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79968c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79968cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799690: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x799690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799694: 0x244100a  movz        $v0, $s2, $a0
    ctx->pc = 0x799694u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 18));
    // 0x799698: 0x52900b  movn        $s2, $v0, $s2
    ctx->pc = 0x799698u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x79969c: 0x12430010  beq         $s2, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x79969Cu;
    {
        const bool branch_taken_0x79969c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x7996A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79969Cu;
        // 0x7996a0: 0x2a420002  slti        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79969c) {
            ctx->pc = 0x7996E0u;
            goto label_7996e0;
        }
    }
    ctx->pc = 0x7996A4u;
    // 0x7996a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7996A4u;
    {
        const bool branch_taken_0x7996a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996A4u;
        // 0x7996a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996a4) {
            ctx->pc = 0x7996BCu;
            goto label_7996bc;
        }
    }
    ctx->pc = 0x7996ACu;
    // 0x7996ac: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x7996ACu;
    {
        const bool branch_taken_0x7996ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996ACu;
        // 0x7996b0: 0x8ee22f84  lw          $v0, 0x2F84($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996ac) {
            ctx->pc = 0x7996CCu;
            goto label_7996cc;
        }
    }
    ctx->pc = 0x7996B4u;
    // 0x7996b4: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x7996B4u;
    {
        const bool branch_taken_0x7996b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996B4u;
        // 0x7996b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996b4) {
            ctx->pc = 0x7997C8u;
            goto label_7997c8;
        }
    }
    ctx->pc = 0x7996BCu;
label_7996bc:
    // 0x7996bc: 0x1242000e  beq         $s2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x7996BCu;
    {
        const bool branch_taken_0x7996bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x7996C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996BCu;
        // 0x7996c0: 0x8ee22f84  lw          $v0, 0x2F84($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996bc) {
            ctx->pc = 0x7996F8u;
            goto label_7996f8;
        }
    }
    ctx->pc = 0x7996C4u;
    // 0x7996c4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x7996C4u;
    {
        const bool branch_taken_0x7996c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996C4u;
        // 0x7996c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996c4) {
            ctx->pc = 0x7997C8u;
            goto label_7997c8;
        }
    }
    ctx->pc = 0x7996CCu;
label_7996cc:
    // 0x7996cc: 0x5480003e  bnel        $a0, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x7996CCu;
    {
        const bool branch_taken_0x7996cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x7996cc) {
            ctx->pc = 0x7996D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7996CCu;
            // 0x7996d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7997C8u;
            goto label_7997c8;
        }
    }
    ctx->pc = 0x7996D4u;
    // 0x7996d4: 0x241501c2  addiu       $s5, $zero, 0x1C2
    ctx->pc = 0x7996d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
    // 0x7996d8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x7996D8u;
    {
        const bool branch_taken_0x7996d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996D8u;
        // 0x7996dc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996d8) {
            ctx->pc = 0x7997C0u;
            goto label_7997c0;
        }
    }
    ctx->pc = 0x7996E0u;
label_7996e0:
    // 0x7996e0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x7996e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996e4: 0x4410036  bgez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x7996E4u;
    {
        const bool branch_taken_0x7996e4 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x7996E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996E4u;
        // 0x7996e8: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996e4) {
            ctx->pc = 0x7997C0u;
            goto label_7997c0;
        }
    }
    ctx->pc = 0x7996ECu;
    // 0x7996ec: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x7996ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996f0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x7996F0u;
    {
        const bool branch_taken_0x7996f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996F0u;
        // 0x7996f4: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996f0) {
            ctx->pc = 0x7997C0u;
            goto label_7997c0;
        }
    }
    ctx->pc = 0x7996F8u;
label_7996f8:
    // 0x7996f8: 0x3c14007a  lui         $s4, 0x7A
    ctx->pc = 0x7996f8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
    // 0x7996fc: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x7996fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x799700: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x799700u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x799704: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x799704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x799708: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x799708u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79970c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x79970cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799710: 0x2691ab00  addiu       $s1, $s4, -0x5500
    ctx->pc = 0x799710u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945536));
    // 0x799714: 0x0  nop
    ctx->pc = 0x799714u;
    // NOP
label_799718:
    // 0x799718: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x799718u;
    SET_GPR_U32(ctx, 31, 0x799720u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799718u, 0x799720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799720u;
label_799720:
    // 0x799720: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x799720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799724: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x799724u;
    SET_GPR_U32(ctx, 31, 0x79972Cu);
    ctx->pc = 0x799728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799724u;
    // 0x799728: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x799724u, 0x79972Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79972Cu;
label_79972c:
    // 0x79972c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x79972cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x799730: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x799730u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799734: 0x0  nop
    ctx->pc = 0x799734u;
    // NOP
    // 0x799738: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x799738u;
    {
        const bool branch_taken_0x799738 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799738u;
        // 0x79973c: 0x26c48658  addiu       $a0, $s6, -0x79A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799738) {
            ctx->pc = 0x79975Cu;
            goto label_79975c;
        }
    }
    ctx->pc = 0x799740u;
    // 0x799740: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799740u;
    SET_GPR_U32(ctx, 31, 0x799748u);
    ctx->pc = 0x799744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799740u;
    // 0x799744: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799740u, 0x799748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799748u;
label_799748:
    // 0x799748: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79974c: 0x52030004  beql        $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79974Cu;
    {
        const bool branch_taken_0x79974c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x79974c) {
            ctx->pc = 0x799750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79974Cu;
            // 0x799750: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799760u;
            goto label_799760;
        }
    }
    ctx->pc = 0x799754u;
    // 0x799754: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x799754u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x799758: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x799758u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79975c:
    // 0x79975c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x79975cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_799760:
    // 0x799760: 0x2e020015  sltiu       $v0, $s0, 0x15
    ctx->pc = 0x799760u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x799764: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x799764u;
    {
        const bool branch_taken_0x799764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799764u;
        // 0x799768: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799764) {
            ctx->pc = 0x799718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799718;
        }
    }
    ctx->pc = 0x79976Cu;
    // 0x79976c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79976cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799770: 0x12620014  beq         $s3, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x799770u;
    {
        const bool branch_taken_0x799770 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x799774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799770u;
        // 0x799774: 0x8ee22f84  lw          $v0, 0x2F84($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799770) {
            ctx->pc = 0x7997C4u;
            goto label_7997c4;
        }
    }
    ctx->pc = 0x799778u;
    // 0x799778: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x799778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x79977c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79977cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799780: 0x0  nop
    ctx->pc = 0x799780u;
    // NOP
    // 0x799784: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x799784u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799788: 0x0  nop
    ctx->pc = 0x799788u;
    // NOP
    // 0x79978c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x79978Cu;
    {
        const bool branch_taken_0x79978c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x799790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79978Cu;
        // 0x799790: 0x2683ab00  addiu       $v1, $s4, -0x5500 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79978c) {
            ctx->pc = 0x7997C4u;
            goto label_7997c4;
        }
    }
    ctx->pc = 0x799794u;
    // 0x799794: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x799794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x799798: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x799798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x79979c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79979cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7997a0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x7997a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7997a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x7997a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997a8: 0xc1e6610  jal         func_799840
    ctx->pc = 0x7997A8u;
    SET_GPR_U32(ctx, 31, 0x7997B0u);
    ctx->pc = 0x7997ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997A8u;
    // 0x7997ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799840u, 0x7997A8u, 0x7997B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997B0u;
label_7997b0:
    // 0x7997b0: 0x26c48658  addiu       $a0, $s6, -0x79A8
    ctx->pc = 0x7997b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936152));
    // 0x7997b4: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x7997B4u;
    SET_GPR_U32(ctx, 31, 0x7997BCu);
    ctx->pc = 0x7997B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997B4u;
    // 0x7997b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x7997B4u, 0x7997BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997BCu;
label_7997bc:
    // 0x7997bc: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x7997bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_7997c0:
    // 0x7997c0: 0x8ee22f84  lw          $v0, 0x2F84($s7)
    ctx->pc = 0x7997c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
label_7997c4:
    // 0x7997c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7997c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7997c8:
    // 0x7997c8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7997C8u;
    SET_GPR_U32(ctx, 31, 0x7997D0u);
    ctx->pc = 0x7997CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997C8u;
    // 0x7997cc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7997C8u, 0x7997D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997D0u;
label_7997d0:
    // 0x7997d0: 0x26c48658  addiu       $a0, $s6, -0x79A8
    ctx->pc = 0x7997d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936152));
    // 0x7997d4: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x7997D4u;
    SET_GPR_U32(ctx, 31, 0x7997DCu);
    ctx->pc = 0x7997D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997D4u;
    // 0x7997d8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x7997D4u, 0x7997DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997DCu;
label_7997dc:
    // 0x7997dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7997dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7997e0: 0x2c630006  sltiu       $v1, $v1, 0x6
    ctx->pc = 0x7997e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x7997e4: 0x1460ff9e  bnez        $v1, . + 4 + (-0x62 << 2)
    ctx->pc = 0x7997E4u;
    {
        const bool branch_taken_0x7997e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7997E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997E4u;
        // 0x7997e8: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997e4) {
            ctx->pc = 0x799660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799660;
        }
    }
    ctx->pc = 0x7997ECu;
label_7997ec:
    // 0x7997ec: 0x26c48658  addiu       $a0, $s6, -0x79A8
    ctx->pc = 0x7997ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936152));
label_7997f0:
    // 0x7997f0: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x7997F0u;
    SET_GPR_U32(ctx, 31, 0x7997F8u);
    ctx->pc = 0x7997F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997F0u;
    // 0x7997f4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x7997F0u, 0x7997F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997F8u;
label_7997f8:
    // 0x7997f8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x7997f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x7997fc: 0x8ee22f84  lw          $v0, 0x2F84($s7)
    ctx->pc = 0x7997fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
    // 0x799800: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799800u;
    SET_GPR_U32(ctx, 31, 0x799808u);
    ctx->pc = 0x799804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799800u;
    // 0x799804: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799800u, 0x799808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799808u;
label_799808:
    // 0x799808: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x799808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_79980c:
    // 0x79980c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x79980cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799810: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x799810u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799814: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x799814u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799818: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x799818u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79981c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x79981cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799820: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x799820u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799824: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x799824u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799828: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79982c: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x79982cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x799830: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x799830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799834: 0x3e00008  jr          $ra
    ctx->pc = 0x799834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799834u;
        // 0x799838: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79983Cu;
    // 0x79983c: 0x0  nop
    ctx->pc = 0x79983cu;
    // NOP
    ctx->pc = 0x799840u;
}
} // namespace gh_r701
