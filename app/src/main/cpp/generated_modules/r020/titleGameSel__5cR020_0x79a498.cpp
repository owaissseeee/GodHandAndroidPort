#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r020_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r020
{
// Function: titleGameSel__5cR020
// Address: 0x79a498 - 0x79b0e0
void titleGameSel__5cR020_0x79a498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("titleGameSel__5cR020_0x79a498");
#endif

    switch (ctx->pc) {
        case 0x79a50cu: goto label_79a50c;
        case 0x79a524u: goto label_79a524;
        case 0x79a540u: goto label_79a540;
        case 0x79a554u: goto label_79a554;
        case 0x79a57cu: goto label_79a57c;
        case 0x79a598u: goto label_79a598;
        case 0x79a608u: goto label_79a608;
        case 0x79a6dcu: goto label_79a6dc;
        case 0x79a784u: goto label_79a784;
        case 0x79a7c0u: goto label_79a7c0;
        case 0x79a810u: goto label_79a810;
        case 0x79a81cu: goto label_79a81c;
        case 0x79a834u: goto label_79a834;
        case 0x79a84cu: goto label_79a84c;
        case 0x79a86cu: goto label_79a86c;
        case 0x79a880u: goto label_79a880;
        case 0x79a890u: goto label_79a890;
        case 0x79a8a4u: goto label_79a8a4;
        case 0x79a8d8u: goto label_79a8d8;
        case 0x79a8f4u: goto label_79a8f4;
        case 0x79a950u: goto label_79a950;
        case 0x79a964u: goto label_79a964;
        case 0x79a9a8u: goto label_79a9a8;
        case 0x79a9dcu: goto label_79a9dc;
        case 0x79aa00u: goto label_79aa00;
        case 0x79aa18u: goto label_79aa18;
        case 0x79aa2cu: goto label_79aa2c;
        case 0x79aa48u: goto label_79aa48;
        case 0x79aa60u: goto label_79aa60;
        case 0x79aa70u: goto label_79aa70;
        case 0x79aa88u: goto label_79aa88;
        case 0x79ab00u: goto label_79ab00;
        case 0x79ab34u: goto label_79ab34;
        case 0x79ab64u: goto label_79ab64;
        case 0x79ab90u: goto label_79ab90;
        case 0x79aba0u: goto label_79aba0;
        case 0x79abacu: goto label_79abac;
        case 0x79abf8u: goto label_79abf8;
        case 0x79acb8u: goto label_79acb8;
        case 0x79acd0u: goto label_79acd0;
        case 0x79acdcu: goto label_79acdc;
        case 0x79ad00u: goto label_79ad00;
        case 0x79ad1cu: goto label_79ad1c;
        case 0x79ad6cu: goto label_79ad6c;
        case 0x79ad90u: goto label_79ad90;
        case 0x79ade0u: goto label_79ade0;
        case 0x79adf0u: goto label_79adf0;
        case 0x79ae00u: goto label_79ae00;
        case 0x79ae2cu: goto label_79ae2c;
        case 0x79aea8u: goto label_79aea8;
        case 0x79aec0u: goto label_79aec0;
        case 0x79aed8u: goto label_79aed8;
        case 0x79aee8u: goto label_79aee8;
        case 0x79aef8u: goto label_79aef8;
        case 0x79af04u: goto label_79af04;
        case 0x79af28u: goto label_79af28;
        case 0x79af5cu: goto label_79af5c;
        case 0x79afd8u: goto label_79afd8;
        case 0x79b034u: goto label_79b034;
        default: break;
    }

    ctx->pc = 0x79a498u;

    // 0x79a498: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x79a498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x79a49c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x79a49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x79a4a0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x79a4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x79a4a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x79a4a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4a8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x79a4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x79a4ac: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x79a4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x79a4b0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x79a4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x79a4b4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x79a4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x79a4b8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x79a4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x79a4bc: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x79a4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x79a4c0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x79a4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x79a4c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a4c8: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x79a4c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x79a4cc: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x79a4ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x79a4d0: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x79a4d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x79a4d4: 0x2c620021  sltiu       $v0, $v1, 0x21
    ctx->pc = 0x79a4d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x79a4d8: 0x104002f3  beqz        $v0, . + 4 + (0x2F3 << 2)
    ctx->pc = 0x79A4D8u;
    {
        const bool branch_taken_0x79a4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4D8u;
        // 0x79a4dc: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4d8) {
            ctx->pc = 0x79B0A8u;
            goto label_79b0a8;
        }
    }
    ctx->pc = 0x79A4E0u;
    // 0x79a4e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79a4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79a4e4: 0x2442cb90  addiu       $v0, $v0, -0x3470
    ctx->pc = 0x79a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953872));
    // 0x79a4e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79a4ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79a4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79a4f0: 0x800008  jr          $a0
    ctx->pc = 0x79A4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79A4F8u: goto label_79a4f8;
            case 0x79A5D0u: goto label_79a5d0;
            case 0x79A940u: goto label_79a940;
            case 0x79AAD8u: goto label_79aad8;
            case 0x79ABD8u: goto label_79abd8;
            case 0x79AC8Cu: goto label_79ac8c;
            case 0x79AD48u: goto label_79ad48;
            case 0x79ADB0u: goto label_79adb0;
            case 0x79AE20u: goto label_79ae20;
            case 0x79AE4Cu: goto label_79ae4c;
            case 0x79AF7Cu: goto label_79af7c;
            case 0x79AFB4u: goto label_79afb4;
            case 0x79AFF8u: goto label_79aff8;
            case 0x79B054u: goto label_79b054;
            case 0x79B0A8u: goto label_79b0a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A4F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79A4F8u;
label_79a4f8:
    // 0x79a4f8: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x79a4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x79a4fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a500: 0x3c13dfff  lui         $s3, 0xDFFF
    ctx->pc = 0x79a500u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)57343 << 16));
    // 0x79a504: 0xc1e7170  jal         func_79C5C0
    ctx->pc = 0x79A504u;
    SET_GPR_U32(ctx, 31, 0x79A50Cu);
    ctx->pc = 0x79A508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A504u;
    // 0x79a508: 0x26300080  addiu       $s0, $s1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C5C0u, 0x79A504u, 0x79A50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A50Cu;
label_79a50c:
    // 0x79a50c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x79a50cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a514: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x79a514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x79a518: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a51c: 0xc0aa94e  jal         func_2AA538
    ctx->pc = 0x79A51Cu;
    SET_GPR_U32(ctx, 31, 0x79A524u);
    ctx->pc = 0x79A520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A51Cu;
    // 0x79a520: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA538u, 0x79A51Cu, 0x79A524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A524u;
label_79a524:
    // 0x79a524: 0x3c1e2000  lui         $fp, 0x2000
    ctx->pc = 0x79a524u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)8192 << 16));
    // 0x79a528: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x79a528u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x79a52c: 0x24170033  addiu       $s7, $zero, 0x33
    ctx->pc = 0x79a52cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x79a530: 0x24160031  addiu       $s6, $zero, 0x31
    ctx->pc = 0x79a530u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x79a534: 0x24150032  addiu       $s5, $zero, 0x32
    ctx->pc = 0x79a534u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x79a538: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x79a538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x79a53c: 0x0  nop
    ctx->pc = 0x79a53cu;
    // NOP
label_79a540:
    // 0x79a540: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x79a540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x79a544: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x79a544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x79a548: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x79a548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a54c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A54Cu;
    SET_GPR_U32(ctx, 31, 0x79A554u);
    ctx->pc = 0x79A550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A54Cu;
    // 0x79a550: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A54Cu, 0x79A554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A554u;
label_79a554:
    // 0x79a554: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x79a554u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x79a558: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79a558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79a55c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x79a55cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a560: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x79a560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x79a564: 0x26d60003  addiu       $s6, $s6, 0x3
    ctx->pc = 0x79a564u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 3));
    // 0x79a568: 0x7e1825  or          $v1, $v1, $fp
    ctx->pc = 0x79a568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
    // 0x79a56c: 0x26b50003  addiu       $s5, $s5, 0x3
    ctx->pc = 0x79a56cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
    // 0x79a570: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x79a570u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x79a574: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A574u;
    SET_GPR_U32(ctx, 31, 0x79A57Cu);
    ctx->pc = 0x79A578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A574u;
    // 0x79a578: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A574u, 0x79A57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A57Cu;
label_79a57c:
    // 0x79a57c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79a57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79a580: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x79a580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a584: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x79a584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x79a588: 0x26f70003  addiu       $s7, $s7, 0x3
    ctx->pc = 0x79a588u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 3));
    // 0x79a58c: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x79a58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x79a590: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A590u;
    SET_GPR_U32(ctx, 31, 0x79A598u);
    ctx->pc = 0x79A594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A590u;
    // 0x79a594: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A590u, 0x79A598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A598u;
label_79a598:
    // 0x79a598: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79a598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79a59c: 0x2a440003  slti        $a0, $s2, 0x3
    ctx->pc = 0x79a59cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x79a5a0: 0x7e1825  or          $v1, $v1, $fp
    ctx->pc = 0x79a5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
    // 0x79a5a4: 0x1480ffe6  bnez        $a0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x79A5A4u;
    {
        const bool branch_taken_0x79a5a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5A4u;
        // 0x79a5a8: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5a4) {
            ctx->pc = 0x79A540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a540;
        }
    }
    ctx->pc = 0x79A5ACu;
    // 0x79a5ac: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x79a5acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x79a5b0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x79a5b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79a5b4: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x79a5b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x79a5b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a5bc: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x79a5bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79a5c0: 0xa2240001  sb          $a0, 0x1($s1)
    ctx->pc = 0x79a5c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x79a5c4: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x79a5c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a5c8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x79a5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x79a5cc: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x79a5ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
label_79a5d0:
    // 0x79a5d0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x79a5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x79a5d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x79a5d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a5d8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x79a5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x79a5dc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x79a5dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x79a5e0: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x79a5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x79a5e4: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x79a5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x79a5e8: 0x26230040  addiu       $v1, $s1, 0x40
    ctx->pc = 0x79a5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x79a5ec: 0x3c014320  lui         $at, 0x4320
    ctx->pc = 0x79a5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17184 << 16));
    // 0x79a5f0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x79a5f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x79a5f4: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x79a5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x79a5f8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79a5f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79a5fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79a600: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79a604: 0x0  nop
    ctx->pc = 0x79a604u;
    // NOP
label_79a608:
    // 0x79a608: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x79a608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x79a60c: 0x14520008  bne         $v0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x79A60Cu;
    {
        const bool branch_taken_0x79a60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x79A610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A60Cu;
        // 0x79a610: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a60c) {
            ctx->pc = 0x79A630u;
            goto label_79a630;
        }
    }
    ctx->pc = 0x79A614u;
    // 0x79a614: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x79a614u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x79a618: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x79a618u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a61c: 0x0  nop
    ctx->pc = 0x79a61cu;
    // NOP
    // 0x79a620: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x79A620u;
    {
        const bool branch_taken_0x79a620 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79A624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A620u;
        // 0x79a624: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a620) {
            ctx->pc = 0x79A650u;
            goto label_79a650;
        }
    }
    ctx->pc = 0x79A628u;
    // 0x79a628: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x79A628u;
    {
        const bool branch_taken_0x79a628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A628u;
        // 0x79a62c: 0xe4630000  swc1        $f3, 0x0($v1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a628) {
            ctx->pc = 0x79A650u;
            goto label_79a650;
        }
    }
    ctx->pc = 0x79A630u;
label_79a630:
    // 0x79a630: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x79a630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x79a634: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a638: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x79a638u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x79a63c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x79a63cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a640: 0x0  nop
    ctx->pc = 0x79a640u;
    // NOP
    // 0x79a644: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x79A644u;
    {
        const bool branch_taken_0x79a644 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A644u;
        // 0x79a648: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a644) {
            ctx->pc = 0x79A650u;
            goto label_79a650;
        }
    }
    ctx->pc = 0x79A64Cu;
    // 0x79a64c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x79a64cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_79a650:
    // 0x79a650: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x79a650u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x79a654: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x79a654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x79a658: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x79A658u;
    {
        const bool branch_taken_0x79a658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A658u;
        // 0x79a65c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a658) {
            ctx->pc = 0x79A608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a608;
        }
    }
    ctx->pc = 0x79A660u;
    // 0x79a660: 0x24a474a0  addiu       $a0, $a1, 0x74A0
    ctx->pc = 0x79a660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 29856));
    // 0x79a664: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x79a664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x79a668: 0xdc8301b0  ld          $v1, 0x1B0($a0)
    ctx->pc = 0x79a668u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x79a66c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79a66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79a670: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79A670u;
    {
        const bool branch_taken_0x79a670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A670u;
        // 0x79a674: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a670) {
            ctx->pc = 0x79A694u;
            goto label_79a694;
        }
    }
    ctx->pc = 0x79A678u;
    // 0x79a678: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x79a678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x79a67c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x79a67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x79a680: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79A680u;
    {
        const bool branch_taken_0x79a680 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x79A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A680u;
        // 0x79a684: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a680) {
            ctx->pc = 0x79A6B8u;
            goto label_79a6b8;
        }
    }
    ctx->pc = 0x79A688u;
    // 0x79a688: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79a688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a68c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x79A68Cu;
    {
        const bool branch_taken_0x79a68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A68Cu;
        // 0x79a690: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a68c) {
            ctx->pc = 0x79A6B8u;
            goto label_79a6b8;
        }
    }
    ctx->pc = 0x79A694u;
label_79a694:
    // 0x79a694: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79a694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79a698: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x79A698u;
    {
        const bool branch_taken_0x79a698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a698) {
            ctx->pc = 0x79A69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A698u;
            // 0x79a69c: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A6E4u;
            goto label_79a6e4;
        }
    }
    ctx->pc = 0x79A6A0u;
    // 0x79a6a0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x79a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x79a6a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a6a8: 0x28430003  slti        $v1, $v0, 0x3
    ctx->pc = 0x79a6a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x79a6ac: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x79A6ACu;
    {
        const bool branch_taken_0x79a6ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6ACu;
        // 0x79a6b0: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6ac) {
            ctx->pc = 0x79A6B8u;
            goto label_79a6b8;
        }
    }
    ctx->pc = 0x79A6B4u;
    // 0x79a6b4: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x79a6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_79a6b8:
    // 0x79a6b8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a6bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a6c0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a6c4: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x79a6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x79a6c8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a6c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a6cc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a6ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a6d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a6d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a6d4: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A6D4u;
    SET_GPR_U32(ctx, 31, 0x79A6DCu);
    ctx->pc = 0x79A6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6D4u;
    // 0x79a6d8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A6D4u, 0x79A6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6DCu;
label_79a6dc:
    // 0x79a6dc: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x79A6DCu;
    {
        const bool branch_taken_0x79a6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6DCu;
        // 0x79a6e0: 0x8e230018  lw          $v1, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6dc) {
            ctx->pc = 0x79A7CCu;
            goto label_79a7cc;
        }
    }
    ctx->pc = 0x79A6E4u;
label_79a6e4:
    // 0x79a6e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a6e8: 0x28430004  slti        $v1, $v0, 0x4
    ctx->pc = 0x79a6e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x79a6ec: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x79A6ECu;
    {
        const bool branch_taken_0x79a6ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6ECu;
        // 0x79a6f0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6ec) {
            ctx->pc = 0x79A760u;
            goto label_79a760;
        }
    }
    ctx->pc = 0x79A6F4u;
    // 0x79a6f4: 0xdc8201a0  ld          $v0, 0x1A0($a0)
    ctx->pc = 0x79a6f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 416)));
    // 0x79a6f8: 0x34038010  ori         $v1, $zero, 0x8010
    ctx->pc = 0x79a6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x79a6fc: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x79a6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x79a700: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79a700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79a704: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x79A704u;
    {
        const bool branch_taken_0x79a704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A704u;
        // 0x79a708: 0x24a274a0  addiu       $v0, $a1, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a704) {
            ctx->pc = 0x79A764u;
            goto label_79a764;
        }
    }
    ctx->pc = 0x79A70Cu;
    // 0x79a70c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x79a70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x79a710: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A710u;
    {
        const bool branch_taken_0x79a710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A710u;
        // 0x79a714: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a710) {
            ctx->pc = 0x79A724u;
            goto label_79a724;
        }
    }
    ctx->pc = 0x79A718u;
    // 0x79a718: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x79a718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79a71c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79A71Cu;
    {
        const bool branch_taken_0x79a71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A71Cu;
        // 0x79a720: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a71c) {
            ctx->pc = 0x79A738u;
            goto label_79a738;
        }
    }
    ctx->pc = 0x79A724u;
label_79a724:
    // 0x79a724: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A724u;
    {
        const bool branch_taken_0x79a724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x79A728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A724u;
        // 0x79a728: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a724) {
            ctx->pc = 0x79A734u;
            goto label_79a734;
        }
    }
    ctx->pc = 0x79A72Cu;
    // 0x79a72c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A72Cu;
    {
        const bool branch_taken_0x79a72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A72Cu;
        // 0x79a730: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a72c) {
            ctx->pc = 0x79A738u;
            goto label_79a738;
        }
    }
    ctx->pc = 0x79A734u;
label_79a734:
    // 0x79a734: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x79a734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_79a738:
    // 0x79a738: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x79a738u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x79a73c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x79a73cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a740: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x79a740u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x79a744: 0xa2240002  sb          $a0, 0x2($s1)
    ctx->pc = 0x79a744u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x79a748: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x79a748u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a74c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a74cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a750: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a754: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a758: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x79A758u;
    {
        const bool branch_taken_0x79a758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A758u;
        // 0x79a75c: 0x24060160  addiu       $a2, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a758) {
            ctx->pc = 0x79A7ACu;
            goto label_79a7ac;
        }
    }
    ctx->pc = 0x79A760u;
label_79a760:
    // 0x79a760: 0x24a274a0  addiu       $v0, $a1, 0x74A0
    ctx->pc = 0x79a760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 29856));
label_79a764:
    // 0x79a764: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x79a764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x79a768: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x79a768u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x79a76c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79a76cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79a770: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x79A770u;
    {
        const bool branch_taken_0x79a770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A770u;
        // 0x79a774: 0x26240080  addiu       $a0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a770) {
            ctx->pc = 0x79A7C8u;
            goto label_79a7c8;
        }
    }
    ctx->pc = 0x79A778u;
    // 0x79a778: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x79a778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x79a77c: 0xc0aa94e  jal         func_2AA538
    ctx->pc = 0x79A77Cu;
    SET_GPR_U32(ctx, 31, 0x79A784u);
    ctx->pc = 0x79A780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A77Cu;
    // 0x79a780: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA538u, 0x79A77Cu, 0x79A784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A784u;
label_79a784:
    // 0x79a784: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x79a784u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79a788: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79a788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a78c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a78cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a790: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x79a790u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a794: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x79a794u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a798: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a79c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x79a79cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a7a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a7a4: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x79a7a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x79a7a8: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x79a7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
label_79a7ac:
    // 0x79a7ac: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a7acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a7b0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a7b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a7b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a7b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a7b8: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A7B8u;
    SET_GPR_U32(ctx, 31, 0x79A7C0u);
    ctx->pc = 0x79A7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7B8u;
    // 0x79a7bc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A7B8u, 0x79A7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7C0u;
label_79a7c0:
    // 0x79a7c0: 0x1000023a  b           . + 4 + (0x23A << 2)
    ctx->pc = 0x79A7C0u;
    {
        const bool branch_taken_0x79a7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7C0u;
        // 0x79a7c4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7c0) {
            ctx->pc = 0x79B0ACu;
            goto label_79b0ac;
        }
    }
    ctx->pc = 0x79A7C8u;
label_79a7c8:
    // 0x79a7c8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x79a7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_79a7cc:
    // 0x79a7cc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x79a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x79a7d0: 0x10620235  beq         $v1, $v0, . + 4 + (0x235 << 2)
    ctx->pc = 0x79A7D0u;
    {
        const bool branch_taken_0x79a7d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7D0u;
        // 0x79a7d4: 0x26340080  addiu       $s4, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7d0) {
            ctx->pc = 0x79B0A8u;
            goto label_79b0a8;
        }
    }
    ctx->pc = 0x79A7D8u;
    // 0x79a7d8: 0x3c15dfff  lui         $s5, 0xDFFF
    ctx->pc = 0x79a7d8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57343 << 16));
    // 0x79a7dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79a7e0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79a7e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x79a7e4: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x79a7e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a7e8: 0x3c013f38  lui         $at, 0x3F38
    ctx->pc = 0x79a7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16184 << 16));
    // 0x79a7ec: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x79a7ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x79a7f0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79a7f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79a7f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x79a7f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a7f8: 0x3c1e2000  lui         $fp, 0x2000
    ctx->pc = 0x79a7f8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)8192 << 16));
    // 0x79a7fc: 0x36b5ffff  ori         $s5, $s5, 0xFFFF
    ctx->pc = 0x79a7fcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x79a800: 0x24130033  addiu       $s3, $zero, 0x33
    ctx->pc = 0x79a800u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x79a804: 0x24170031  addiu       $s7, $zero, 0x31
    ctx->pc = 0x79a804u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x79a808: 0x24160032  addiu       $s6, $zero, 0x32
    ctx->pc = 0x79a808u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x79a80c: 0x0  nop
    ctx->pc = 0x79a80cu;
    // NOP
label_79a810:
    // 0x79a810: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79a810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a814: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A814u;
    SET_GPR_U32(ctx, 31, 0x79A81Cu);
    ctx->pc = 0x79A818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A814u;
    // 0x79a818: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A814u, 0x79A81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A81Cu;
label_79a81c:
    // 0x79a81c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79a81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79a820: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x79a820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x79a824: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x79a824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a828: 0x7e1825  or          $v1, $v1, $fp
    ctx->pc = 0x79a828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
    // 0x79a82c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A82Cu;
    SET_GPR_U32(ctx, 31, 0x79A834u);
    ctx->pc = 0x79A830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A82Cu;
    // 0x79a830: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A82Cu, 0x79A834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A834u;
label_79a834:
    // 0x79a834: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79a834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79a838: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x79a838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x79a83c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x79a83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a840: 0x7e1825  or          $v1, $v1, $fp
    ctx->pc = 0x79a840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
    // 0x79a844: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A844u;
    SET_GPR_U32(ctx, 31, 0x79A84Cu);
    ctx->pc = 0x79A848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A844u;
    // 0x79a848: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A844u, 0x79A84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A84Cu;
label_79a84c:
    // 0x79a84c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79a84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79a850: 0x751824  and         $v1, $v1, $s5
    ctx->pc = 0x79a850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 21));
    // 0x79a854: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x79a854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x79a858: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x79a858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x79a85c: 0x1642000a  bne         $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x79A85Cu;
    {
        const bool branch_taken_0x79a85c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x79A860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A85Cu;
        // 0x79a860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a85c) {
            ctx->pc = 0x79A888u;
            goto label_79a888;
        }
    }
    ctx->pc = 0x79A864u;
    // 0x79a864: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A864u;
    SET_GPR_U32(ctx, 31, 0x79A86Cu);
    ctx->pc = 0x79A868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A864u;
    // 0x79a868: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A864u, 0x79A86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A86Cu;
label_79a86c:
    // 0x79a86c: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x79a86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x79a870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a874: 0xa043004f  sb          $v1, 0x4F($v0)
    ctx->pc = 0x79a874u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x79a878: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A878u;
    SET_GPR_U32(ctx, 31, 0x79A880u);
    ctx->pc = 0x79A87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A878u;
    // 0x79a87c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A878u, 0x79A880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A880u;
label_79a880:
    // 0x79a880: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x79A880u;
    {
        const bool branch_taken_0x79a880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A880u;
        // 0x79a884: 0xe4550040  swc1        $f21, 0x40($v0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a880) {
            ctx->pc = 0x79A8A8u;
            goto label_79a8a8;
        }
    }
    ctx->pc = 0x79A888u;
label_79a888:
    // 0x79a888: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A888u;
    SET_GPR_U32(ctx, 31, 0x79A890u);
    ctx->pc = 0x79A88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A888u;
    // 0x79a88c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A888u, 0x79A890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A890u;
label_79a890:
    // 0x79a890: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x79a890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x79a894: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x79a894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a898: 0xa044004f  sb          $a0, 0x4F($v0)
    ctx->pc = 0x79a898u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 79), (uint8_t)GPR_U32(ctx, 4));
    // 0x79a89c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A89Cu;
    SET_GPR_U32(ctx, 31, 0x79A8A4u);
    ctx->pc = 0x79A8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A89Cu;
    // 0x79a8a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A89Cu, 0x79A8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8A4u;
label_79a8a4:
    // 0x79a8a4: 0xe4540040  swc1        $f20, 0x40($v0)
    ctx->pc = 0x79a8a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_79a8a8:
    // 0x79a8a8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x79a8a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x79a8ac: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x79a8acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x79a8b0: 0x26f70003  addiu       $s7, $s7, 0x3
    ctx->pc = 0x79a8b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 3));
    // 0x79a8b4: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x79a8b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x79a8b8: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x79A8B8u;
    {
        const bool branch_taken_0x79a8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8B8u;
        // 0x79a8bc: 0x26d60003  addiu       $s6, $s6, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8b8) {
            ctx->pc = 0x79A810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a810;
        }
    }
    ctx->pc = 0x79A8C0u;
    // 0x79a8c0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x79a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x79a8c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79a8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8c8: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x79a8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x79a8cc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x79a8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x79a8d0: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A8D0u;
    SET_GPR_U32(ctx, 31, 0x79A8D8u);
    ctx->pc = 0x79A8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8D0u;
    // 0x79a8d4: 0x24a50031  addiu       $a1, $a1, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A8D0u, 0x79A8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8D8u;
label_79a8d8:
    // 0x79a8d8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x79a8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x79a8dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a8dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79a8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8e4: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x79a8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x79a8e8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x79a8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x79a8ec: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A8ECu;
    SET_GPR_U32(ctx, 31, 0x79A8F4u);
    ctx->pc = 0x79A8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8ECu;
    // 0x79a8f0: 0x24a50031  addiu       $a1, $a1, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A8ECu, 0x79A8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8F4u;
label_79a8f4:
    // 0x79a8f4: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x79a8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a8f8: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x79a8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a8fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x79a8fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a900: 0x3c01c220  lui         $at, 0xC220
    ctx->pc = 0x79a900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49696 << 16));
    // 0x79a904: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a908: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x79A908u;
    {
        const bool branch_taken_0x79a908 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x79a908) {
            ctx->pc = 0x79A90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A908u;
            // 0x79a90c: 0xe620003c  swc1        $f0, 0x3C($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A920u;
            goto label_79a920;
        }
    }
    ctx->pc = 0x79A910u;
    // 0x79a910: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x79a910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x79a914: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a918: 0x0  nop
    ctx->pc = 0x79a918u;
    // NOP
    // 0x79a91c: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x79a91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
label_79a920:
    // 0x79a920: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x79a920u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x79a924: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x79a924u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79a928: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x79a928u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x79a92c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a930: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x79a930u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79a934: 0xa2240001  sb          $a0, 0x1($s1)
    ctx->pc = 0x79a934u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x79a938: 0x100001da  b           . + 4 + (0x1DA << 2)
    ctx->pc = 0x79A938u;
    {
        const bool branch_taken_0x79a938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A938u;
        // 0x79a93c: 0xa2220002  sb          $v0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a938) {
            ctx->pc = 0x79B0A4u;
            goto label_79b0a4;
        }
    }
    ctx->pc = 0x79A940u;
label_79a940:
    // 0x79a940: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x79a940u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a944: 0x26340080  addiu       $s4, $s1, 0x80
    ctx->pc = 0x79a944u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x79a948: 0x24100033  addiu       $s0, $zero, 0x33
    ctx->pc = 0x79a948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x79a94c: 0x0  nop
    ctx->pc = 0x79a94cu;
    // NOP
label_79a950:
    // 0x79a950: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x79a950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x79a954: 0x12420007  beq         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79A954u;
    {
        const bool branch_taken_0x79a954 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A954u;
        // 0x79a958: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a954) {
            ctx->pc = 0x79A974u;
            goto label_79a974;
        }
    }
    ctx->pc = 0x79A95Cu;
    // 0x79a95c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A95Cu;
    SET_GPR_U32(ctx, 31, 0x79A964u);
    ctx->pc = 0x79A960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A95Cu;
    // 0x79a960: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A95Cu, 0x79A964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A964u;
label_79a964:
    // 0x79a964: 0xc621003c  lwc1        $f1, 0x3C($s1)
    ctx->pc = 0x79a964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a968: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x79a968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a96c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x79a96cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x79a970: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x79a970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_79a974:
    // 0x79a974: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x79a974u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x79a978: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x79a978u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x79a97c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x79A97Cu;
    {
        const bool branch_taken_0x79a97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A97Cu;
        // 0x79a980: 0x26100003  addiu       $s0, $s0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a97c) {
            ctx->pc = 0x79A950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a950;
        }
    }
    ctx->pc = 0x79A984u;
    // 0x79a984: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x79a984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x79a988: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79a988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a98c: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x79a98cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x79a990: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x79a990u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x79a994: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79a994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79a998: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x79a998u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x79a99c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x79a99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x79a9a0: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A9A0u;
    SET_GPR_U32(ctx, 31, 0x79A9A8u);
    ctx->pc = 0x79A9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9A0u;
    // 0x79a9a4: 0x24a50033  addiu       $a1, $a1, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A9A0u, 0x79A9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9A8u;
label_79a9a8:
    // 0x79a9a8: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x79a9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a9ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79a9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a9b0: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x79a9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x79a9b4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x79a9b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x79a9b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a9b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a9bc: 0x0  nop
    ctx->pc = 0x79a9bcu;
    // NOP
    // 0x79a9c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x79a9c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x79a9c4: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x79a9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x79a9c8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x79a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x79a9cc: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x79a9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x79a9d0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x79a9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x79a9d4: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A9D4u;
    SET_GPR_U32(ctx, 31, 0x79A9DCu);
    ctx->pc = 0x79A9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9D4u;
    // 0x79a9d8: 0x24a50033  addiu       $a1, $a1, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A9D4u, 0x79A9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9DCu;
label_79a9dc:
    // 0x79a9dc: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x79a9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a9e0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x79a9e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a9e4: 0x0  nop
    ctx->pc = 0x79a9e4u;
    // NOP
    // 0x79a9e8: 0x450001af  bc1f        . + 4 + (0x1AF << 2)
    ctx->pc = 0x79A9E8u;
    {
        const bool branch_taken_0x79a9e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79A9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9E8u;
        // 0x79a9ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9e8) {
            ctx->pc = 0x79B0A8u;
            goto label_79b0a8;
        }
    }
    ctx->pc = 0x79A9F0u;
    // 0x79a9f0: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x79a9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x79a9f4: 0x3c10dfff  lui         $s0, 0xDFFF
    ctx->pc = 0x79a9f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57343 << 16));
    // 0x79a9f8: 0xc1e7170  jal         func_79C5C0
    ctx->pc = 0x79A9F8u;
    SET_GPR_U32(ctx, 31, 0x79AA00u);
    ctx->pc = 0x79A9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9F8u;
    // 0x79a9fc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C5C0u, 0x79A9F8u, 0x79AA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA00u;
label_79aa00:
    // 0x79aa00: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x79aa00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x79aa04: 0x241e0033  addiu       $fp, $zero, 0x33
    ctx->pc = 0x79aa04u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x79aa08: 0x24170031  addiu       $s7, $zero, 0x31
    ctx->pc = 0x79aa08u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x79aa0c: 0x24160033  addiu       $s6, $zero, 0x33
    ctx->pc = 0x79aa0cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x79aa10: 0x24150033  addiu       $s5, $zero, 0x33
    ctx->pc = 0x79aa10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x79aa14: 0x24130031  addiu       $s3, $zero, 0x31
    ctx->pc = 0x79aa14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_79aa18:
    // 0x79aa18: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x79aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x79aa1c: 0x16420012  bne         $s2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x79AA1Cu;
    {
        const bool branch_taken_0x79aa1c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x79AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA1Cu;
        // 0x79aa20: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa1c) {
            ctx->pc = 0x79AA68u;
            goto label_79aa68;
        }
    }
    ctx->pc = 0x79AA24u;
    // 0x79aa24: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79AA24u;
    SET_GPR_U32(ctx, 31, 0x79AA2Cu);
    ctx->pc = 0x79AA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA24u;
    // 0x79aa28: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79AA24u, 0x79AA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA2Cu;
label_79aa2c:
    // 0x79aa2c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79aa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79aa30: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x79aa30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x79aa34: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x79aa34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x79aa38: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x79aa38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa3c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x79aa3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x79aa40: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79AA40u;
    SET_GPR_U32(ctx, 31, 0x79AA48u);
    ctx->pc = 0x79AA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA40u;
    // 0x79aa44: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79AA40u, 0x79AA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA48u;
label_79aa48:
    // 0x79aa48: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79aa48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79aa4c: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x79aa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x79aa50: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x79aa50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa54: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x79aa54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x79aa58: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79AA58u;
    SET_GPR_U32(ctx, 31, 0x79AA60u);
    ctx->pc = 0x79AA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA58u;
    // 0x79aa5c: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79AA58u, 0x79AA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA60u;
label_79aa60:
    // 0x79aa60: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x79AA60u;
    {
        const bool branch_taken_0x79aa60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA60u;
        // 0x79aa64: 0xe4540040  swc1        $f20, 0x40($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa60) {
            ctx->pc = 0x79AA98u;
            goto label_79aa98;
        }
    }
    ctx->pc = 0x79AA68u;
label_79aa68:
    // 0x79aa68: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79AA68u;
    SET_GPR_U32(ctx, 31, 0x79AA70u);
    ctx->pc = 0x79AA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA68u;
    // 0x79aa6c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79AA68u, 0x79AA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA70u;
label_79aa70:
    // 0x79aa70: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79aa70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79aa74: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x79aa74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x79aa78: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x79aa78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa7c: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x79aa7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x79aa80: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79AA80u;
    SET_GPR_U32(ctx, 31, 0x79AA88u);
    ctx->pc = 0x79AA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA80u;
    // 0x79aa84: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79AA80u, 0x79AA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA88u;
label_79aa88:
    // 0x79aa88: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79aa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79aa8c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x79aa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x79aa90: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x79aa90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x79aa94: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x79aa94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
label_79aa98:
    // 0x79aa98: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x79aa98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x79aa9c: 0x27de0003  addiu       $fp, $fp, 0x3
    ctx->pc = 0x79aa9cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 3));
    // 0x79aaa0: 0x26f70003  addiu       $s7, $s7, 0x3
    ctx->pc = 0x79aaa0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 3));
    // 0x79aaa4: 0x26d60003  addiu       $s6, $s6, 0x3
    ctx->pc = 0x79aaa4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 3));
    // 0x79aaa8: 0x26b50003  addiu       $s5, $s5, 0x3
    ctx->pc = 0x79aaa8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
    // 0x79aaac: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x79aaacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x79aab0: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x79AAB0u;
    {
        const bool branch_taken_0x79aab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAB0u;
        // 0x79aab4: 0x26730003  addiu       $s3, $s3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aab0) {
            ctx->pc = 0x79AA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aa18;
        }
    }
    ctx->pc = 0x79AAB8u;
    // 0x79aab8: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x79aab8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x79aabc: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x79aabcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79aac0: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x79aac0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x79aac4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79aac8: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x79aac8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79aacc: 0xa2240001  sb          $a0, 0x1($s1)
    ctx->pc = 0x79aaccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x79aad0: 0x10000174  b           . + 4 + (0x174 << 2)
    ctx->pc = 0x79AAD0u;
    {
        const bool branch_taken_0x79aad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAD0u;
        // 0x79aad4: 0xa2220002  sb          $v0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aad0) {
            ctx->pc = 0x79B0A4u;
            goto label_79b0a4;
        }
    }
    ctx->pc = 0x79AAD8u;
label_79aad8:
    // 0x79aad8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x79aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x79aadc: 0x26300080  addiu       $s0, $s1, 0x80
    ctx->pc = 0x79aadcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x79aae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79aae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aae4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79aae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79aae8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79aae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79aaec: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x79aaecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x79aaf0: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x79aaf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aaf4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x79aaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x79aaf8: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79AAF8u;
    SET_GPR_U32(ctx, 31, 0x79AB00u);
    ctx->pc = 0x79AAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAF8u;
    // 0x79aafc: 0x24a50033  addiu       $a1, $a1, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79AAF8u, 0x79AB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB00u;
label_79ab00:
    // 0x79ab00: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x79ab00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79ab04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79ab04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ab08: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x79ab08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x79ab0c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x79ab0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x79ab10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79ab10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79ab14: 0x0  nop
    ctx->pc = 0x79ab14u;
    // NOP
    // 0x79ab18: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x79ab18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x79ab1c: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x79ab1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x79ab20: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x79ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x79ab24: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x79ab24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x79ab28: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x79ab28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x79ab2c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79AB2Cu;
    SET_GPR_U32(ctx, 31, 0x79AB34u);
    ctx->pc = 0x79AB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB2Cu;
    // 0x79ab30: 0x24a50033  addiu       $a1, $a1, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79AB2Cu, 0x79AB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB34u;
label_79ab34:
    // 0x79ab34: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x79ab34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79ab38: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x79ab38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79ab3c: 0x0  nop
    ctx->pc = 0x79ab3cu;
    // NOP
    // 0x79ab40: 0x45000159  bc1f        . + 4 + (0x159 << 2)
    ctx->pc = 0x79AB40u;
    {
        const bool branch_taken_0x79ab40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB40u;
        // 0x79ab44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab40) {
            ctx->pc = 0x79B0A8u;
            goto label_79b0a8;
        }
    }
    ctx->pc = 0x79AB48u;
    // 0x79ab48: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x79ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x79ab4c: 0x24100033  addiu       $s0, $zero, 0x33
    ctx->pc = 0x79ab4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x79ab50: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x79ab50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79ab54: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x79ab54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x79ab58: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x79ab58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x79ab5c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79AB5Cu;
    SET_GPR_U32(ctx, 31, 0x79AB64u);
    ctx->pc = 0x79AB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB5Cu;
    // 0x79ab60: 0x24a50031  addiu       $a1, $a1, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79AB5Cu, 0x79AB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB64u;
label_79ab64:
    // 0x79ab64: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x79ab64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79ab68: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x79ab68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x79ab6c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79ab6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79ab70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79ab70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ab74: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x79ab74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x79ab78: 0xac45002c  sw          $a1, 0x2C($v0)
    ctx->pc = 0x79ab78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 5));
    // 0x79ab7c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x79ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x79ab80: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x79ab80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x79ab84: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x79ab84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x79ab88: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79AB88u;
    SET_GPR_U32(ctx, 31, 0x79AB90u);
    ctx->pc = 0x79AB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB88u;
    // 0x79ab8c: 0x24a50033  addiu       $a1, $a1, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79AB88u, 0x79AB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB90u;
label_79ab90:
    // 0x79ab90: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79ab94: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x79ab94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x79ab98: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x79ab98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x79ab9c: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x79ab9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
label_79aba0:
    // 0x79aba0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79aba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aba4: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79ABA4u;
    SET_GPR_U32(ctx, 31, 0x79ABACu);
    ctx->pc = 0x79ABA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ABA4u;
    // 0x79aba8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79ABA4u, 0x79ABACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABACu;
label_79abac:
    // 0x79abac: 0x26100003  addiu       $s0, $s0, 0x3
    ctx->pc = 0x79abacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x79abb0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x79abb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x79abb4: 0x641fffa  bgez        $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79ABB4u;
    {
        const bool branch_taken_0x79abb4 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x79ABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABB4u;
        // 0x79abb8: 0xe4540040  swc1        $f20, 0x40($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abb4) {
            ctx->pc = 0x79ABA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aba0;
        }
    }
    ctx->pc = 0x79ABBCu;
    // 0x79abbc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x79abbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79abc0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79abc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79abc4: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x79abc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x79abc8: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x79abc8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79abcc: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x79abccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x79abd0: 0x10000134  b           . + 4 + (0x134 << 2)
    ctx->pc = 0x79ABD0u;
    {
        const bool branch_taken_0x79abd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABD0u;
        // 0x79abd4: 0xa2240002  sb          $a0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abd0) {
            ctx->pc = 0x79B0A4u;
            goto label_79b0a4;
        }
    }
    ctx->pc = 0x79ABD8u;
label_79abd8:
    // 0x79abd8: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x79abd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x79abdc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x79abdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x79abe0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x79abe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79abe4: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x79abe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x79abe8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79abe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79abec: 0x26230040  addiu       $v1, $s1, 0x40
    ctx->pc = 0x79abecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x79abf0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x79abf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79abf4: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x79abf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79abf8:
    // 0x79abf8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x79abf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79abfc: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x79abfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79ac00: 0x0  nop
    ctx->pc = 0x79ac00u;
    // NOP
    // 0x79ac04: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x79AC04u;
    {
        const bool branch_taken_0x79ac04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x79ac04) {
            ctx->pc = 0x79AC08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AC04u;
            // 0x79ac08: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AC34u;
            goto label_79ac34;
        }
    }
    ctx->pc = 0x79AC0Cu;
    // 0x79ac0c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x79ac0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x79ac10: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x79ac10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x79ac14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79ac14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79ac18: 0x0  nop
    ctx->pc = 0x79ac18u;
    // NOP
    // 0x79ac1c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x79ac1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79ac20: 0x0  nop
    ctx->pc = 0x79ac20u;
    // NOP
    // 0x79ac24: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x79AC24u;
    {
        const bool branch_taken_0x79ac24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC24u;
        // 0x79ac28: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac24) {
            ctx->pc = 0x79AC4Cu;
            goto label_79ac4c;
        }
    }
    ctx->pc = 0x79AC2Cu;
    // 0x79ac2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79AC2Cu;
    {
        const bool branch_taken_0x79ac2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC2Cu;
        // 0x79ac30: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac2c) {
            ctx->pc = 0x79AC48u;
            goto label_79ac48;
        }
    }
    ctx->pc = 0x79AC34u;
label_79ac34:
    // 0x79ac34: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x79ac34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79ac38: 0x0  nop
    ctx->pc = 0x79ac38u;
    // NOP
    // 0x79ac3c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x79AC3Cu;
    {
        const bool branch_taken_0x79ac3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC3Cu;
        // 0x79ac40: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac3c) {
            ctx->pc = 0x79AC4Cu;
            goto label_79ac4c;
        }
    }
    ctx->pc = 0x79AC44u;
    // 0x79ac44: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x79ac44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_79ac48:
    // 0x79ac48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79ac4c:
    // 0x79ac4c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x79ac4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x79ac50: 0x641ffe9  bgez        $s2, . + 4 + (-0x17 << 2)
    ctx->pc = 0x79AC50u;
    {
        const bool branch_taken_0x79ac50 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x79AC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC50u;
        // 0x79ac54: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac50) {
            ctx->pc = 0x79ABF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79abf8;
        }
    }
    ctx->pc = 0x79AC58u;
    // 0x79ac58: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x79ac58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x79ac5c: 0x54400112  bnel        $v0, $zero, . + 4 + (0x112 << 2)
    ctx->pc = 0x79AC5Cu;
    {
        const bool branch_taken_0x79ac5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ac5c) {
            ctx->pc = 0x79AC60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AC5Cu;
            // 0x79ac60: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B0A8u;
            goto label_79b0a8;
        }
    }
    ctx->pc = 0x79AC64u;
    // 0x79ac64: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x79ac64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x79ac68: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x79ac68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79ac6c: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x79ac6cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x79ac70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79ac74: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x79ac74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79ac78: 0xa2240001  sb          $a0, 0x1($s1)
    ctx->pc = 0x79ac78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x79ac7c: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x79ac7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x79ac80: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x79ac80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x79ac84: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x79AC84u;
    {
        const bool branch_taken_0x79ac84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC84u;
        // 0x79ac88: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac84) {
            ctx->pc = 0x79B0A8u;
            goto label_79b0a8;
        }
    }
    ctx->pc = 0x79AC8Cu;
label_79ac8c:
    // 0x79ac8c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x79ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x79ac90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79ac94: 0x28430003  slti        $v1, $v0, 0x3
    ctx->pc = 0x79ac94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x79ac98: 0x14600103  bnez        $v1, . + 4 + (0x103 << 2)
    ctx->pc = 0x79AC98u;
    {
        const bool branch_taken_0x79ac98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC98u;
        // 0x79ac9c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac98) {
            ctx->pc = 0x79B0A8u;
            goto label_79b0a8;
        }
    }
    ctx->pc = 0x79ACA0u;
    // 0x79aca0: 0x26300080  addiu       $s0, $s1, 0x80
    ctx->pc = 0x79aca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x79aca4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x79aca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x79aca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79aca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79acac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79acacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79acb0: 0xc0aa94e  jal         func_2AA538
    ctx->pc = 0x79ACB0u;
    SET_GPR_U32(ctx, 31, 0x79ACB8u);
    ctx->pc = 0x79ACB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACB0u;
    // 0x79acb4: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA538u, 0x79ACB0u, 0x79ACB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACB8u;
label_79acb8:
    // 0x79acb8: 0x3c162000  lui         $s6, 0x2000
    ctx->pc = 0x79acb8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)8192 << 16));
    // 0x79acbc: 0x24150033  addiu       $s5, $zero, 0x33
    ctx->pc = 0x79acbcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x79acc0: 0x24130031  addiu       $s3, $zero, 0x31
    ctx->pc = 0x79acc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x79acc4: 0x24100032  addiu       $s0, $zero, 0x32
    ctx->pc = 0x79acc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x79acc8: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x79acc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79accc: 0x0  nop
    ctx->pc = 0x79acccu;
    // NOP
label_79acd0:
    // 0x79acd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79acd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79acd4: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79ACD4u;
    SET_GPR_U32(ctx, 31, 0x79ACDCu);
    ctx->pc = 0x79ACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACD4u;
    // 0x79acd8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79ACD4u, 0x79ACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACDCu;
label_79acdc:
    // 0x79acdc: 0x26100003  addiu       $s0, $s0, 0x3
    ctx->pc = 0x79acdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x79ace0: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79ace0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79ace4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x79ace4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ace8: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x79ace8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x79acec: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x79acecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x79acf0: 0x761825  or          $v1, $v1, $s6
    ctx->pc = 0x79acf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
    // 0x79acf4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x79acf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x79acf8: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79ACF8u;
    SET_GPR_U32(ctx, 31, 0x79AD00u);
    ctx->pc = 0x79ACFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACF8u;
    // 0x79acfc: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79ACF8u, 0x79AD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD00u;
label_79ad00:
    // 0x79ad00: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79ad00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79ad04: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x79ad04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad08: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x79ad08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x79ad0c: 0x26b50003  addiu       $s5, $s5, 0x3
    ctx->pc = 0x79ad0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
    // 0x79ad10: 0x761825  or          $v1, $v1, $s6
    ctx->pc = 0x79ad10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
    // 0x79ad14: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79AD14u;
    SET_GPR_U32(ctx, 31, 0x79AD1Cu);
    ctx->pc = 0x79AD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD14u;
    // 0x79ad18: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79AD14u, 0x79AD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD1Cu;
label_79ad1c:
    // 0x79ad1c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79ad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79ad20: 0x761825  or          $v1, $v1, $s6
    ctx->pc = 0x79ad20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
    // 0x79ad24: 0x641ffea  bgez        $s2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x79AD24u;
    {
        const bool branch_taken_0x79ad24 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x79AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD24u;
        // 0x79ad28: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad24) {
            ctx->pc = 0x79ACD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79acd0;
        }
    }
    ctx->pc = 0x79AD2Cu;
    // 0x79ad2c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x79ad2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79ad30: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x79ad30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79ad34: 0xa2320001  sb          $s2, 0x1($s1)
    ctx->pc = 0x79ad34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 18));
    // 0x79ad38: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x79ad38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79ad3c: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x79ad3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x79ad40: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x79AD40u;
    {
        const bool branch_taken_0x79ad40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD40u;
        // 0x79ad44: 0xa2200002  sb          $zero, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad40) {
            ctx->pc = 0x79B0A8u;
            goto label_79b0a8;
        }
    }
    ctx->pc = 0x79AD48u;
label_79ad48:
    // 0x79ad48: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79ad48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79ad4c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79ad4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79ad50: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79ad50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79ad54: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x79ad54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x79ad58: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79ad58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79ad5c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79ad5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79ad60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79ad60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad64: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79AD64u;
    SET_GPR_U32(ctx, 31, 0x79AD6Cu);
    ctx->pc = 0x79AD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD64u;
    // 0x79ad68: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79AD64u, 0x79AD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD6Cu;
label_79ad6c:
    // 0x79ad6c: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x79ad6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x79ad70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79ad70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad74: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x79ad74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x79ad78: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x79ad78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79ad7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79ad7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79ad80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad84: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x79ad84u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x79ad88: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x79AD88u;
    SET_GPR_U32(ctx, 31, 0x79AD90u);
    ctx->pc = 0x79AD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD88u;
    // 0x79ad8c: 0x240a001e  addiu       $t2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x79AD88u, 0x79AD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD90u;
label_79ad90:
    // 0x79ad90: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x79ad90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x79ad94: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x79ad94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79ad98: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x79ad98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x79ad9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79ada0: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x79ada0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79ada4: 0xa2240001  sb          $a0, 0x1($s1)
    ctx->pc = 0x79ada4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x79ada8: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x79ada8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x79adac: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x79adacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
label_79adb0:
    // 0x79adb0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79adb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79adb4: 0x9042748c  lbu         $v0, 0x748C($v0)
    ctx->pc = 0x79adb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x79adb8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79ADB8u;
    {
        const bool branch_taken_0x79adb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADB8u;
        // 0x79adbc: 0x21082  srl         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79adb8) {
            ctx->pc = 0x79ADCCu;
            goto label_79adcc;
        }
    }
    ctx->pc = 0x79ADC0u;
    // 0x79adc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79adc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79adc4: 0x104000b9  beqz        $v0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x79ADC4u;
    {
        const bool branch_taken_0x79adc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADC4u;
        // 0x79adc8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79adc4) {
            ctx->pc = 0x79B0ACu;
            goto label_79b0ac;
        }
    }
    ctx->pc = 0x79ADCCu;
label_79adcc:
    // 0x79adcc: 0x26300080  addiu       $s0, $s1, 0x80
    ctx->pc = 0x79adccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x79add0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79add0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79add4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79add4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79add8: 0xc0aa94e  jal         func_2AA538
    ctx->pc = 0x79ADD8u;
    SET_GPR_U32(ctx, 31, 0x79ADE0u);
    ctx->pc = 0x79ADDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ADD8u;
    // 0x79addc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA538u, 0x79ADD8u, 0x79ADE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ADE0u;
label_79ade0:
    // 0x79ade0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79ade0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ade4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x79ade4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x79ade8: 0xc0aa94e  jal         func_2AA538
    ctx->pc = 0x79ADE8u;
    SET_GPR_U32(ctx, 31, 0x79ADF0u);
    ctx->pc = 0x79ADECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ADE8u;
    // 0x79adec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA538u, 0x79ADE8u, 0x79ADF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ADF0u;
label_79adf0:
    // 0x79adf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79adf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79adf4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x79adf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x79adf8: 0xc0aa94e  jal         func_2AA538
    ctx->pc = 0x79ADF8u;
    SET_GPR_U32(ctx, 31, 0x79AE00u);
    ctx->pc = 0x79ADFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ADF8u;
    // 0x79adfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA538u, 0x79ADF8u, 0x79AE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE00u;
label_79ae00:
    // 0x79ae00: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x79ae00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x79ae04: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x79ae04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79ae08: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x79ae08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x79ae0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79ae10: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x79ae10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79ae14: 0xa2240001  sb          $a0, 0x1($s1)
    ctx->pc = 0x79ae14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x79ae18: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x79ae18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x79ae1c: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x79ae1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
label_79ae20:
    // 0x79ae20: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79ae24: 0xc0afc9a  jal         func_2BF268
    ctx->pc = 0x79AE24u;
    SET_GPR_U32(ctx, 31, 0x79AE2Cu);
    ctx->pc = 0x79AE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE24u;
    // 0x79ae28: 0x8c442648  lw          $a0, 0x2648($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF268u, 0x79AE24u, 0x79AE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE2Cu;
label_79ae2c:
    // 0x79ae2c: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x79ae2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x79ae30: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x79ae30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79ae34: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x79ae34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x79ae38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x79ae38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79ae3c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x79ae3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79ae40: 0xa2240001  sb          $a0, 0x1($s1)
    ctx->pc = 0x79ae40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x79ae44: 0xa2230002  sb          $v1, 0x2($s1)
    ctx->pc = 0x79ae44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x79ae48: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x79ae48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
label_79ae4c:
    // 0x79ae4c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79ae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79ae50: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x79ae50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x79ae54: 0x24457a84  addiu       $a1, $v0, 0x7A84
    ctx->pc = 0x79ae54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 31364));
    // 0x79ae58: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x79ae58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A88u));
    // 0x79ae5c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79ae5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79ae60: 0x14600092  bnez        $v1, . + 4 + (0x92 << 2)
    ctx->pc = 0x79AE60u;
    {
        const bool branch_taken_0x79ae60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE60u;
        // 0x79ae64: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae60) {
            ctx->pc = 0x79B0ACu;
            goto label_79b0ac;
        }
    }
    ctx->pc = 0x79AE68u;
    // 0x79ae68: 0x8ca2ffa0  lw          $v0, -0x60($a1)
    ctx->pc = 0x79ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967200)));
    // 0x79ae6c: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x79ae6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
    // 0x79ae70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79ae70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79ae74: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79AE74u;
    {
        const bool branch_taken_0x79ae74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE74u;
        // 0x79ae78: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae74) {
            ctx->pc = 0x79AE94u;
            goto label_79ae94;
        }
    }
    ctx->pc = 0x79AE7Cu;
    // 0x79ae7c: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x79ae7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x79ae80: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x79ae80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79ae84: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x79ae84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x79ae88: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x79ae88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x79ae8c: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x79AE8Cu;
    {
        const bool branch_taken_0x79ae8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE8Cu;
        // 0x79ae90: 0xaca0fa2c  sw          $zero, -0x5D4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294965804), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae8c) {
            ctx->pc = 0x79B0ACu;
            goto label_79b0ac;
        }
    }
    ctx->pc = 0x79AE94u;
label_79ae94:
    // 0x79ae94: 0x26300080  addiu       $s0, $s1, 0x80
    ctx->pc = 0x79ae94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x79ae98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79ae98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79ae9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aea0: 0xc0aa94e  jal         func_2AA538
    ctx->pc = 0x79AEA0u;
    SET_GPR_U32(ctx, 31, 0x79AEA8u);
    ctx->pc = 0x79AEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AEA0u;
    // 0x79aea4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA538u, 0x79AEA0u, 0x79AEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AEA8u;
label_79aea8:
    // 0x79aea8: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x79aea8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aeac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79aeacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aeb0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x79aeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x79aeb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79aeb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79aeb8: 0xc0aa94e  jal         func_2AA538
    ctx->pc = 0x79AEB8u;
    SET_GPR_U32(ctx, 31, 0x79AEC0u);
    ctx->pc = 0x79AEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AEB8u;
    // 0x79aebc: 0x3c162000  lui         $s6, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA538u, 0x79AEB8u, 0x79AEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AEC0u;
label_79aec0:
    // 0x79aec0: 0x24150033  addiu       $s5, $zero, 0x33
    ctx->pc = 0x79aec0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x79aec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79aec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aec8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x79aec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x79aecc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79aeccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79aed0: 0xc0aa94e  jal         func_2AA538
    ctx->pc = 0x79AED0u;
    SET_GPR_U32(ctx, 31, 0x79AED8u);
    ctx->pc = 0x79AED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AED0u;
    // 0x79aed4: 0x24130032  addiu       $s3, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA538u, 0x79AED0u, 0x79AED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AED8u;
label_79aed8:
    // 0x79aed8: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x79aed8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79aedc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79aedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aee0: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79AEE0u;
    SET_GPR_U32(ctx, 31, 0x79AEE8u);
    ctx->pc = 0x79AEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AEE0u;
    // 0x79aee4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79AEE0u, 0x79AEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AEE8u;
label_79aee8:
    // 0x79aee8: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79aee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79aeec: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x79aeecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x79aef0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x79aef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x79aef4: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x79aef4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
label_79aef8:
    // 0x79aef8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x79aef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aefc: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79AEFCu;
    SET_GPR_U32(ctx, 31, 0x79AF04u);
    ctx->pc = 0x79AF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AEFCu;
    // 0x79af00: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79AEFCu, 0x79AF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF04u;
label_79af04:
    // 0x79af04: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x79af04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x79af08: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79af08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79af0c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x79af0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79af10: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x79af10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x79af14: 0x26b50003  addiu       $s5, $s5, 0x3
    ctx->pc = 0x79af14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
    // 0x79af18: 0x761825  or          $v1, $v1, $s6
    ctx->pc = 0x79af18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
    // 0x79af1c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x79af1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x79af20: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79AF20u;
    SET_GPR_U32(ctx, 31, 0x79AF28u);
    ctx->pc = 0x79AF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF20u;
    // 0x79af24: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79AF20u, 0x79AF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF28u;
label_79af28:
    // 0x79af28: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79af28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79af2c: 0x761825  or          $v1, $v1, $s6
    ctx->pc = 0x79af2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
    // 0x79af30: 0x641fff1  bgez        $s2, . + 4 + (-0xF << 2)
    ctx->pc = 0x79AF30u;
    {
        const bool branch_taken_0x79af30 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x79AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF30u;
        // 0x79af34: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af30) {
            ctx->pc = 0x79AEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aef8;
        }
    }
    ctx->pc = 0x79AF38u;
    // 0x79af38: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x79af38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x79af3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79af3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79af40: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x79af40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x79af44: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x79af44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79af48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79af48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79af4c: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x79af4cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x79af50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79af50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79af54: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x79AF54u;
    SET_GPR_U32(ctx, 31, 0x79AF5Cu);
    ctx->pc = 0x79AF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF54u;
    // 0x79af58: 0x240a0014  addiu       $t2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x79AF54u, 0x79AF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF5Cu;
label_79af5c:
    // 0x79af5c: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x79af5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x79af60: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x79af60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79af64: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x79af64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x79af68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79af68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79af6c: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x79af6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79af70: 0xa2240001  sb          $a0, 0x1($s1)
    ctx->pc = 0x79af70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x79af74: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x79af74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x79af78: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x79af78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
label_79af7c:
    // 0x79af7c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79af80: 0x9042748c  lbu         $v0, 0x748C($v0)
    ctx->pc = 0x79af80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x79af84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79AF84u;
    {
        const bool branch_taken_0x79af84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF84u;
        // 0x79af88: 0x21082  srl         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af84) {
            ctx->pc = 0x79AF98u;
            goto label_79af98;
        }
    }
    ctx->pc = 0x79AF8Cu;
    // 0x79af8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79af8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79af90: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x79AF90u;
    {
        const bool branch_taken_0x79af90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF90u;
        // 0x79af94: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af90) {
            ctx->pc = 0x79B0ACu;
            goto label_79b0ac;
        }
    }
    ctx->pc = 0x79AF98u;
label_79af98:
    // 0x79af98: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x79af98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79af9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79af9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79afa0: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x79afa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x79afa4: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x79afa4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79afa8: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x79afa8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x79afac: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x79AFACu;
    {
        const bool branch_taken_0x79afac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFACu;
        // 0x79afb0: 0xa2240002  sb          $a0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79afac) {
            ctx->pc = 0x79B0A4u;
            goto label_79b0a4;
        }
    }
    ctx->pc = 0x79AFB4u;
label_79afb4:
    // 0x79afb4: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x79afb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x79afb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79afb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79afbc: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x79afbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x79afc0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x79afc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79afc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79afc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79afc8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79afc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79afcc: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x79afccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x79afd0: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x79AFD0u;
    SET_GPR_U32(ctx, 31, 0x79AFD8u);
    ctx->pc = 0x79AFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AFD0u;
    // 0x79afd4: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x79AFD0u, 0x79AFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFD8u;
label_79afd8:
    // 0x79afd8: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x79afd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x79afdc: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x79afdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79afe0: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x79afe0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x79afe4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79afe8: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x79afe8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79afec: 0xa2240001  sb          $a0, 0x1($s1)
    ctx->pc = 0x79afecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x79aff0: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x79aff0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x79aff4: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x79aff4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
label_79aff8:
    // 0x79aff8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79affc: 0x9042748c  lbu         $v0, 0x748C($v0)
    ctx->pc = 0x79affcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x79b000: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B000u;
    {
        const bool branch_taken_0x79b000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B000u;
        // 0x79b004: 0x21082  srl         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b000) {
            ctx->pc = 0x79B014u;
            goto label_79b014;
        }
    }
    ctx->pc = 0x79B008u;
    // 0x79b008: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79b008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79b00c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x79B00Cu;
    {
        const bool branch_taken_0x79b00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B00Cu;
        // 0x79b010: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b00c) {
            ctx->pc = 0x79B0ACu;
            goto label_79b0ac;
        }
    }
    ctx->pc = 0x79B014u;
label_79b014:
    // 0x79b014: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79b014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79b018: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x79b018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x79b01c: 0x8c44d930  lw          $a0, -0x26D0($v0)
    ctx->pc = 0x79b01cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD930u));
    // 0x79b020: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79b020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79b024: 0xac6074b0  sw          $zero, 0x74B0($v1)
    ctx->pc = 0x79b024u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7474B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7474B0u, _value); } while (0);
    // 0x79b028: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b02c: 0xc058008  jal         func_160020
    ctx->pc = 0x79B02Cu;
    SET_GPR_U32(ctx, 31, 0x79B034u);
    ctx->pc = 0x79B030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B02Cu;
    // 0x79b030: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160020u, 0x79B02Cu, 0x79B034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B034u;
label_79b034:
    // 0x79b034: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x79b034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x79b038: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x79b038u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79b03c: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x79b03cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x79b040: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79b040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79b044: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x79b044u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79b048: 0xa2240001  sb          $a0, 0x1($s1)
    ctx->pc = 0x79b048u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x79b04c: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x79b04cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b050: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x79b050u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
label_79b054:
    // 0x79b054: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79b054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79b058: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x79b058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x79b05c: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x79b05cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x79b060: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79b060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79b064: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x79B064u;
    {
        const bool branch_taken_0x79b064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B064u;
        // 0x79b068: 0x24457a84  addiu       $a1, $v0, 0x7A84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 31364));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b064) {
            ctx->pc = 0x79B0A8u;
            goto label_79b0a8;
        }
    }
    ctx->pc = 0x79B06Cu;
    // 0x79b06c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79b06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79b070: 0x9042748c  lbu         $v0, 0x748C($v0)
    ctx->pc = 0x79b070u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x79b074: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B074u;
    {
        const bool branch_taken_0x79b074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B074u;
        // 0x79b078: 0x21082  srl         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b074) {
            ctx->pc = 0x79B088u;
            goto label_79b088;
        }
    }
    ctx->pc = 0x79B07Cu;
    // 0x79b07c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79b07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79b080: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x79B080u;
    {
        const bool branch_taken_0x79b080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B080u;
        // 0x79b084: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b080) {
            ctx->pc = 0x79B0ACu;
            goto label_79b0ac;
        }
    }
    ctx->pc = 0x79B088u;
label_79b088:
    // 0x79b088: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79b088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b08c: 0xaca2fa2c  sw          $v0, -0x5D4($a1)
    ctx->pc = 0x79b08cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294965804), GPR_U32(ctx, 2));
    // 0x79b090: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x79b090u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b094: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x79b094u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79b098: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x79b098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x79b09c: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x79b09cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79b0a0: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x79b0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_79b0a4:
    // 0x79b0a4: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x79b0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
label_79b0a8:
    // 0x79b0a8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x79b0a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_79b0ac:
    // 0x79b0ac: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x79b0acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79b0b0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x79b0b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79b0b4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x79b0b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79b0b8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x79b0b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79b0bc: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x79b0bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79b0c0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x79b0c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b0c4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x79b0c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b0c8: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x79b0c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b0cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b0d0: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x79b0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x79b0d4: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x79b0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79b0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x79B0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0D8u;
        // 0x79b0dc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B0E0u;
}
} // namespace gh_r020
